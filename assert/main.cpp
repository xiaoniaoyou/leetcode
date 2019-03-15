#include <iostream>
#include <assert.h>

using namespace std;






void fun(int A) {
    cout << "A=" << A << endl;
    assert(A<10);
}


void *memcopy(char *src, char*dst, size_t count) {

    assert(src != nullptr);
    assert(dst != nullptr);

    char* pSrc = src;
    char* pDst = dst;
    int i = 0;
    while (*pDst < (*src+count)) {
//        dst[i] = src[i];
        *pDst = *pSrc;
        pDst = pDst + i;

    }


    return dst;

}

int main() {
    std::cout << "Hello, World!" << std::endl;

    fun(1);
    fun(11);

    cout << "end" << endl;

    return 0;
}