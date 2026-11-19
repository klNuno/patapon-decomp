#include "common.h"

extern "C" {
void func_088875FC(void *, s32);
void func_08887348(void *, s32, void *);

struct A {};

inline void func_08886AC4_00(void *arg0, const A &arg1) {
    func_088875FC(arg0, 1);
}

void func_08886AC4(void *arg0, void *arg1) {
    void *temp = arg1;
    void *ptr = arg0;

    func_08886AC4_00(ptr, A());
    func_08887348(ptr, 1, temp);
}
}
