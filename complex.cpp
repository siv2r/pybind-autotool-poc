#include <iostream>
#include "complex.h"

cmplx::cmplx() {
    this->x = 0;
    this->y = 0;
}

cmplx::cmplx(int x1, int y1){
    this->x = x1;
    this->y = y1;
}

cmplx add(cmplx c1, cmplx c2) {
    cmplx c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}

cmplx sub(cmplx c1, cmplx c2) {
    cmplx c3;
    c3.x = c1.x - c2.x;
    c3.y = c1.y - c2.y;
    return c3;
}