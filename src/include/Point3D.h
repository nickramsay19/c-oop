#ifndef POINT3D_H
#define POINT3D_H

#include "Point.h"

typedef struct Point3D {
    Point* base;
    int z;

    int* (*getX)(struct Point3D *self);
    int* (*getY)(struct Point3D *self);
    int* (*getZ)(struct Point3D *self);
    void* (*setX)(struct Point3D *self, int x);
    void* (*setY)(struct Point3D *self, int y);
    void* (*setZ)(struct Point3D *self, int z);
    int* (*equals)(struct Point3D *self, struct Point3D *other);

} Point3D;

int getZ(Point3D *self) {
    return self->z;
}

void setZ(Point3D *self, int z) {
    self->z = z;
}

int equalsPoint3D(Point3D *self, Point3D *other) {
    if(self->base->equals(self->base, other->base) == 1 && self->z == other->z) {
        return 1;
    } 
    return 0;
}

Point3D* createPoint3D(int x, int y, int z) {
    
    // initialise the 3d point
    Point3D* p3d = malloc(sizeof(Point3D));

    // create the base class
    Point* p2d = createPoint(x, y);
    p3d->base = p2d;

    // inititalise methods
    p3d->getX = (Point3D*) p3d->base->getX;
    p3d->getY = (Point3D*) p3d->base->getY;
    p3d->getZ = getZ;

    p3d->setX = p3d->base->setX;
    p3d->setY = p3d->base->setY;
    p3d->setZ = setZ;

    p3d->equals = equalsPoint3D;

    // initialise values
    p3d->setX(p3d, x);
    p3d->setY(p3d, y);
    p3d->setZ(p3d, z);

    return p3d;
}

#endif
