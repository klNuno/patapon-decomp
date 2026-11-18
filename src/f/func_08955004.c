#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04[5];
} T_08955004;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    u8 unk_20[0x20];
    u8 unk_40;
} S_08955004;

extern f32 D_08A04B10[];

void func_0881F5C0(void *, s32, s32);

void func_08955004(S_08955004 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    T_08955004 t;

    t = *(T_08955004 *)&D_08A04B10[1];
    arg0->unk_00 = *(s32 *)&t.unk_04[arg1];
    arg0->unk_04 = *(s32 *)&t.unk_04[arg2];
    arg0->unk_08 = *(s32 *)&t.unk_04[arg3];
    arg0->unk_0C = *(s32 *)&t.unk_04[arg4];
    arg0->unk_10 = *(s32 *)&t.unk_04[arg5];
    arg0->unk_14 = *(s32 *)&t.unk_04[arg6];
    arg0->unk_18 = *(s32 *)&t.unk_04[arg7];
    arg0->unk_1C = *(s32 *)&t.unk_04[arg8];
    func_0881F5C0(arg0->unk_20, 0, 0x20);
    arg0->unk_40 = 0;
}
