#include "common.h"

typedef struct T08923C88 T08923C88;

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x88];
    u8 unk_94[4];
} T;

void func_08923C88(T08923C88 *arg0);
void func_089238D0(void *, s16);
T *func_08923A5C(T *arg0, s16 arg1);
void func_0880416C(void *);

T *func_08923AC0(T *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        func_08923C88((T08923C88 *)arg0);
        if (arg0 != NULL) {
            func_089238D0(arg0->unk_94, 0);
            func_08923A5C(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
