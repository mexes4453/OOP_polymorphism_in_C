#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <stdlib.h>

Shape   s1;
Circle  c1;

int main(void)
{
    int idx = 0;
    Circle *pc2 = malloc(sizeof(Circle));
    Rectangle *pr3 = malloc(sizeof(Rectangle));

    Shape_ctor(&s1, 4, 5);
    Circle_ctor(&c1, 4, 5, 10);
    Circle_ctor(pc2, 5, 3, 8);
    Rectangle_ctor(pr3, 5, 8, 8, 2);


    Shape *all_shapes[] = {
        &s1,
        (Shape *)&c1,
        (Shape *)pc2,
        (Shape *)pr3,
        (Shape *)0      /* same as null pointer */
    };


    while( all_shapes[idx] != (Shape *)0 )
    {
        /*
        Shape_draw(all_shapes[idx]);
        Shape_area(all_shapes[idx]);
        */
        VC_SHAPE_AREA(all_shapes[idx]);
        VC_SHAPE_DRAW(all_shapes[idx]);
        idx++;
    }
    free(pc2);
    free(pr3);

    return (0);
}