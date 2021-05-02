#include <stdio.h>

#include "include/Point.h"
#include "include/Point3D.h"

int main() {

    // point 2d
    Point* p = createPoint(5,0);
    p->setX(p, 10);

    printf("Point: %d, %d\n", p->getX(p), p->getY(p));

    // point 3d
    Point3D* p3 = createPoint3D(-5, 4, 2);
    p3->setX(p3, 5);
    p3->setZ(p3, 7);
    printf("Point3D: %d, %d, %d\n", p3->getX(p3), p3->getY(p3), p3->getZ(p3));

    return 0;
}