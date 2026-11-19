#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    void *volatile unk_10;
} T;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08956380(void *, s32, s32);

void func_08938090(T *arg0, void *arg1) {
    s32 *temp;
    void *temp2 = arg1;
    T *temp3 = arg0;
    s32 *temp4;
    s32 temp5;
    s32 temp6;
    temp = func_0885356C(temp2, 0, 1, 4);
    temp4 = func_0885356C(temp2, 1, 1, 4);
    temp5 = *(volatile s32 *)temp;
    temp6 = *(volatile s32 *)temp4;
    func_08956380(temp3->unk_10, temp5 != 0, temp6);
    func_08852F00(temp2, 0);
}
