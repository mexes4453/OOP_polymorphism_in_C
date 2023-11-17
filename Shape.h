#ifndef SHAPE_H
#define SHAPE_H
#include <stdio.h>


/* MACROS */
#define VC_SHAPE_DRAW(me)(*(me->vptr->draw))(me)
#define VC_SHAPE_AREA(me)(*(me->vptr->area))(me)


typedef struct {
    struct vShapeTable const *vptr;
    int     x;      /* position x cordinate */
    int     y;      /* position y cordinate */
} Shape;

struct vShapeTable {
    void (*draw)(Shape const * const me);
    int  (*area)(Shape const * const me);
};

void    Shape_ctor(Shape * const me, int x, int y);
void    Shape_draw(Shape const * const me);
int     Shape_area(Shape const * const me);


#endif /* SHAPE_H */