
#include "Circle.h"


void    Circle_ctor(Circle * const me, int x, int y, int r)
{
    static const struct vShapeTable vtable = {
        (void (*)( Shape const * const))&Circle_draw,
        (int (*)( Shape const * const))&Circle_area,
    };
    Shape_ctor(&(me->super), x, y);
    me->super.vptr = &vtable;
    me->radius = r;
}

void    Circle_draw(Circle const * const me)
{
    printf("Calling ... Circle -> draw, @%d, %d\n", ((Shape *)me)->x,
                                                    ((Shape *)me)->y);
}

int     Circle_area(Circle const * const me)
{
    int area = 3 * me->radius * me->radius;
    printf("Calling ... Circle -> area (%d)\n", area);
    return (area);
}


