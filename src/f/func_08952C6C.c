#include "common.h"

typedef struct {
    u8 pad_00[0x10A0];
    s32 unk_10A0;
    s32 unk_10A4;
    s32 unk_10A8;
    s32 unk_10AC;
    s32 unk_10B0;
    u8 pad_10B4[0xC];
    u8 unk_10C0;
    u8 pad_10C1[0x18F];
    u8 unk_1250;
    u8 unk_1251;
} T;

void func_08912AF8(T *, s16);
void func_089741D8(void *);
s32 func_08868D9C(void *, s32, void *, s32);
extern void *D_08AD1E28[];
extern u8 D_08A049A0[];

T *func_08952C6C(T *arg0) {
    void *temp;
    func_08912AF8(arg0, 0);
    arg0->unk_10A4 = 0;
    arg0->unk_10A8 = 0;
    arg0->unk_10AC = 0;
    arg0->unk_10B0 = 0;
    func_089741D8(&arg0->unk_10C0);
    temp = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    arg0->unk_10A0 = func_08868D9C(temp, 1, D_08A049A0, 1);
    arg0->unk_1250 = 0;
    arg0->unk_1251 = 0;
    return arg0;
}
