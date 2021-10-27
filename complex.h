#ifndef CMPLX_HEADER_H
#define CMPLX_HEADER_H

class cmplx{
public:
    int x;
    int y;
    cmplx();
    cmplx(int, int);
};

cmplx add(cmplx c1, cmplx c2);
cmplx sub(cmplx c1, cmplx c2);

#endif // CMPLX_HEADER_H