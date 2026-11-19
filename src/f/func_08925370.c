#include "common.h"

typedef struct {
    s32 unk_00;
} T;

void func_0880416C(void *);
void func_0892535C(s32 *, void *);
void func_08925364(s32 *, T *);
void func_089253E4(s32 *, T *, s32, s32);

T *func_08925370(T *arg0, s16 arg1)
{
    T *temp = arg0;
    s32 out;
    s32 a;
    s32 b;

    if (temp != NULL) {
        func_08925364(&a, temp);
        func_0892535C(&b, temp);
        func_089253E4(&out, temp, a, b);
        if (arg1 > 0) {
            func_0880416C(temp);
        }
    }
    return temp;
}
