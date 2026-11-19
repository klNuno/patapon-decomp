#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} T2;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} T;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
extern void *func_08958954(u8 *);
s32 func_08982048(char *);

void func_08938CBC(T *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    T2 *temp2 = func_08958954(arg0->unk_10);

    if (temp2 != NULL && temp2->unk_04 == 1) {
        *temp = func_08982048((char *)temp2);
    }
    func_08852F00(arg1, 0);
}
