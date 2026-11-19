#include "common.h"

typedef struct Unk01 Unk01;

typedef struct {
    u8 pad_00[0x14];
    u8 unk_14[0x324];
    u8 unk_338[0x984];
} T;

void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0880416C(void *);
void *func_088D6DAC(void *arg0, s16 arg1);
Unk01 *func_089BD6F8(Unk01 *arg0, s16 arg1);

T *func_089BE34C(T *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        u8 *temp = arg0->unk_338;
        if (temp != NULL) {
            func_08804000(temp, (void (*)(void *, s32))func_089BD6F8, 0x4C, 0x20);
        }
        func_088D6DAC(arg0->unk_14, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
