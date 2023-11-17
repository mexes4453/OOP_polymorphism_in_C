#ifndef SHAPE_H
#define SHAPE_H
#include <stdio.h>

typedef struct {
    
    int     x;      /* position x cordinate */
    int     y;      /* position x cordinate */
} Shape;


void    Shape_ctor(Shape * const me, int x, int y);
void    Shape_draw(Shape const * const me);
int     Shape_area(Shape const * const me);


#endif /* SHAPE_H */