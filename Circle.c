
#include "Circle.h"


void    Circle_ctor(Circle * const me, int x, int y, int r)
{
    Shape_ctor(&(me->super), x, y);
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


