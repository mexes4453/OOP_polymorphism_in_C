#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

typedef struct {
    Shape super;    /* Triangle class inherits from Shape class */
    int base;
    int height;
}   Triangle;

void   Triangle_ctor(Triangle * const me, int x, int y, int b, int h);
void   Triangle_draw(Triangle const * const me);
int    Triangle_area(Triangle const * const me);

#endif /* TRIANGLE_H*/