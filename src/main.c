#include <stdio.h>

#include "include/Point.h"

int main() {
    Point* p = createPoint(5,0);
    p->setX(p, 10);

    printf("%d\n", p->x);

    return 0;
}