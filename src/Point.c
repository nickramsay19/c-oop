#include "include/Point.h"

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