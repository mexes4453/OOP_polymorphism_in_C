
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

typedef struct {
    Shape super;    /* Rectangle class inherits from Shape class */
    int height;
    int width;
} Rectangle;


void    Rectangle_ctor(Rectangle * const me, int x, int y, int h, int w);
void    Rectangle_draw(Rectangle const * const me);
int     Rectangle_area(Rectangle const * const me);


#endif /* RECTANGLE_H */