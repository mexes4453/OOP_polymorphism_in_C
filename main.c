#include "Shape.h"
#include "Circle.h"
#include <stdlib.h>

Shape   s1;
Circle  c1;

int main(void)
{
    int idx = 0;

    Shape_ctor(&s1, 4, 5);
    Circle_ctor(&c1, 4, 5, 10);


    Shape *all_shapes[] = {
        &s1,
        (Shape *)&c1,
        (Shape *)0
    };


    while( all_shapes[idx] != (Shape *)0 )
    {
        Shape_draw(all_shapes[idx]);
        Shape_area(all_shapes[idx]);
        idx++;
    }

    return (0);
}