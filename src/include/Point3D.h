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

int getZ(Point3D *self);
void setZ(Point3D *self, int z);

int equalsPoint3D(Point3D *self, Point3D *other);

Point3D* createPoint3D(int x, int y, int z);

#endif
