#ifndef POINT_H
#define POINT_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Point {
    int x;
    int y;

    int* (*getX)(struct Point *self);
    int* (*getY)(struct Point *self);

    void* (*setX)(struct Point *self, int x);
    void* (*setY)(struct Point *self, int y);
    int* (*equals)(struct Point *self, struct Point *other)

} Point;

void setX(Point *self, int x) {
    self->x = x;
}

void setY(Point *self, int y) {
    self->y = y;
}

int getX(Point *self) {
    return self->x;
}

int getY(Point *self) {
    return self->y;
}

int equalsPoint(Point *self, Point *other) {
    if(self->x == other->x && self->y == other->y) {
        return 1;
    } 
    return 0;
}

Point* createPoint(int x, int y) {
    Point* p = (Point*) malloc(sizeof(Point));

    // set values
    p->x = x;
    p->y = y;

    // set methods
    p->getX = (int*) getX;
    p->getY = (int*) getY;
    p->setX = (void*) setX;
    p->setY = (void*) setY;
    p->equals = (int*) equalsPoint;

    return p;
}

#endif