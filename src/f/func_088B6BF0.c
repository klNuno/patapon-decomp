#include "common.h"

void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0880416C(void *);
void func_08865F78(void *, s32);
void func_088CE530(void *, s32);
void func_088B6A00(void *, s32);
void func_088B6B8C(void *, s32);
extern u8 D_08A45D48[];

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
    u8 pad_2C[0x4];
    u8 unk_30[0x1B0 - 0x30];
    u8 unk_1B0[0x304 - 0x1B0];
    u8 unk_304[0x4];
} S_088B6BF0;

S_088B6BF0 *func_088B6BF0(S_088B6BF0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_28 = D_08A45D48;
        if (&arg0->unk_1B0 != NULL) {
            func_088B6A00(arg0->unk_304, 0);
            func_088B6B8C(arg0->unk_1B0, 0);
        }
        func_08804000(arg0->unk_30, func_08865F78, 0x90, 2);
        func_088CE530(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
