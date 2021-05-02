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

void setX(Point *self, int x);
void setY(Point *self, int y);

int getX(Point *self);
int getY(Point *self);

int equalsPoint(Point *self, Point *other);

Point* createPoint(int x, int y);

#endif