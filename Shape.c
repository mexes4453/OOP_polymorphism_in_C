#include "Shape.h"


void    Shape_ctor(Shape * const me, int x, int y)
{
    static const struct vShapeTable vtable = {
        &Shape_draw,
        &Shape_area
    };
    me->vptr = &vtable;
    me->x = x;
    me->y = y;
}

void    Shape_draw(Shape const * const me)
{
    printf("Calling ... Shape -> draw, @%d, %d\n", me->x, me->y);
}

int     Shape_area(Shape const * const me)
{
    printf("Calling ... Shape -> area, @%d, %d\n", me->x, me->y);
    return (0);
}


