
#include "Rectangle.h"
/*
 * The constructor contains a virtual table of type (struct VshapeTable)
 * which is created in the shape class.

*/


void    Rectangle_ctor(Rectangle * const me, int x, int y, int h, int w)
{
    static const struct vShapeTable vTable =  {
        (void (*)(Shape const * const me))&Rectangle_draw,
        (int (*)(Shape const * const me))&Rectangle_area
    };
    Shape_ctor((Shape *)me, x, y);
    me->super.vptr = &vTable;
    me->height = h;
    me->width = w;
}



void    Rectangle_draw(Rectangle const * const me)
{
    printf("Calling ... Rectangle -> draw( h=%d, w=%d ), @%d, %d\n",
    me->height, me->width,
    ((Shape *)me)->x,
    ((Shape *)me)->y);
}



int     Rectangle_area(Rectangle const * const me)
{
    int area = me->height * me->width;
    printf("Calling ... Rectangle -> area (%d)\n", area);
    return (area);
}
