#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} T;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_0895700C(void *, s32);

void func_08938ADC(T *arg0, void *arg1) {
    void *temp = arg1;
    T *temp2 = arg0;
    s32 temp3 = *func_0885356C(temp, 0, 1, 4);
    func_0895700C(temp2->unk_10, temp3 != 0);
    func_08852F00(temp, 0);
}
