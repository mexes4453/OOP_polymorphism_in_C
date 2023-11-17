
#include "Triangle.h"


void Triangle_ctor(Triangle * const me, int x, int y, int b, int h)
{
    static const struct vShapeTable vtable = {
        (void (*)(Shape const * const me))&Triangle_draw,
        (int (*)(Shape const * const me))&Triangle_area
    };
    Shape_ctor((Shape *)me, x, y);
    me->super.vptr = &vtable;
    me->base = b;
    me->height = h;
}

void Triangle_draw(Triangle const * const me)
{
    printf("Calling ... Triangle -> draw( b=%d, h=%d ), @%d, %d\n",
     me->base, me->height,
     ((Shape *)me)->x,
     ((Shape *)me)->y);
}



int Triangle_area(Triangle const * const me)
{
    int area = me->height * me->base / 2;
    printf("Calling ... Triangle -> area (%d)\n", area);
    return (area);
}
