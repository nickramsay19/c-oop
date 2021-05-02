#ifndef POINT_H
#define POINT_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Point {
    int x;
    int y;

    void* (*setX)(struct Point *self, int _x);
    void* (*setY)(struct Point *self, int _Y);
    bool* (*equals)(struct Point *self, struct Point *other)

} Point;

void setX(Point *self, int _x) {
    self->x = _x;
}

void setY(Point *self, int _y) {
    self->y = _y;
}

void equals(Point *self, Point *other) {
    return self->x == other->x && self->y == self->y;
}

Point* createPoint(int x, int y) {
    Point* p = (Point*) malloc(sizeof(Point));

    // set values
    p->x = x;
    p->y = y;

    // set methods
    p->setX = (void*) setX;
    p->setY = (void*) setY;
    p->equals = (bool*) equals;

    return p;
}

#endif