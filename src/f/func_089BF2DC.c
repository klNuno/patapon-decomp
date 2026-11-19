#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    u8 unk_14;
    u8 pad_15[0x323];
    u8 unk_338;
} T;

extern void func_08804000(void *, void (*)(void *, s32), s32, s32);
extern void func_088D6DAC(void *, s32);
extern void func_0880416C(void *);
void func_089BD6F8(void *, s32);

T *func_089BF2DC(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        u8 *temp = &arg0->unk_338;
        if (temp != NULL) {
            func_08804000(temp, func_089BD6F8, 0x4C, 0x20);
        }
        func_088D6DAC(&arg0->unk_14, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
