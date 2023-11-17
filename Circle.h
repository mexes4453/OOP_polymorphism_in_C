
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

typedef struct {
    Shape super;   /* Circle class inherits from Shape class */
    int radius;
} Circle;


void    Circle_ctor(Circle * const me, int x, int y, int r);
void    Circle_draw(Circle const * const me);
int     Circle_area(Circle const * const me);


#endif /* CIRCLE_H */