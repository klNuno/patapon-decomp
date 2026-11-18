#include "common.h"

extern void *D_08AD1E28[];
extern char D_08A08E34[];
extern char D_08A08E44[];
extern char D_08A08E54[];
extern char D_08A08E64[];

s32 func_08868CAC(void *, s32, char *, s32);
void func_08865FE4(void *, s32);

typedef struct {
    u8 unk_00[0x90];
    u8 unk_90[0x90];
    u8 unk_120[0x90];
    u8 unk_1B0[0x90];
    u8 pad_240[0x90];
    f32 unk_2D0;
    f32 unk_2D4;
} T1;

static inline void *temp0(void) {
    void *temp = D_08AD1E28[0];
    if (temp != NULL) {
        return temp;
    } else {
        return NULL;
    }
}

void func_089BAE2C(T1 *arg0, f32 arg1, f32 arg2) {
    void *temp = temp0();
    s32 x;
    func_08865FE4(arg0, func_08868CAC(temp, 0xA, D_08A08E34, 1));
    func_08865FE4(&arg0->unk_90, func_08868CAC(temp, 0xA, D_08A08E44, 1));
    func_08865FE4(&arg0->unk_120, func_08868CAC(temp, 0xA, D_08A08E54, 1));
    x = func_08868CAC(temp, 0xA, D_08A08E64, 1);
    func_08865FE4(&arg0->unk_1B0, x);
    arg0->unk_2D0 = arg1;
    arg0->unk_2D4 = arg2;
}
