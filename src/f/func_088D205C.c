#include "common.h"

typedef struct {
    s32 unk_00;
} T;

void func_0880416C(void *);
void func_088D2048(s32 *, T *);
void func_088D2050(s32 *, T *);
void func_088D20D0(s32 *, T *, s32, s32);

T *func_088D205C(T *arg0, s16 arg1)
{
    T *temp = arg0;
    s32 out;
    s32 a;
    s32 b;

    if (temp != NULL) {
        func_088D2050(&a, temp);
        func_088D2048(&b, temp);
        func_088D20D0(&out, temp, a, b);
        if (arg1 > 0) {
            func_0880416C(temp);
        }
    }
    return temp;
}
