#include "common.h"

typedef struct {
    void *volatile unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C[0x40];
    u8 unk_4C[0x34];
    u8 unk_80[0x800];
    s32 unk_880;
    s32 unk_884;
} T;

extern u8 D_08A46A0C[];
extern u8 D_08A47F74[];
void func_0881F5C0(void *, s32, s32);

T *func_08975CE0(T *arg0, s32 arg1, s32 arg2) {
    arg0->unk_00 = D_08A46A0C;
    arg0->unk_00 = D_08A47F74;
    arg0->unk_04 = arg1;
    arg0->unk_08 = arg2;
    arg0->unk_880 = 0;
    arg0->unk_884 = 0;
    func_0881F5C0(arg0->unk_0C, 0, sizeof(arg0->unk_0C));
    func_0881F5C0(arg0->unk_4C, 0, sizeof(arg0->unk_4C));
    func_0881F5C0(arg0->unk_80, 0, sizeof(arg0->unk_80));
    return arg0;
}
