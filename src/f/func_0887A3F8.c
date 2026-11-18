#include "common.h"

typedef struct {
    u8 pad_00[0x320];
} E;

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x100];
    u8 unk_110;
    u8 unk_111;
    u8 pad_112[0xE];
    E unk_120[8];
} S;

void func_0887A4BC(E *, s32);
void func_0887A59C(E *, s32);
void func_0887DEB0(f32, u8 *, s32, s32);

void func_0887A3F8(S *arg0, s32 arg1) {
    u32 i;
    s32 n;
    u32 j;

    for (i = 0; i < 8; i++) {
        func_0887A59C(&arg0->unk_120[i], arg1);
    }
    func_0887DEB0(1.0f, arg0->unk_10, arg1, 0);
    if (arg0->unk_110 != 0) {
        n = 4;
        if (arg0->unk_111 != 0) {
            n = 5;
        }
        for (j = 0; j < 8; j++) {
            func_0887A4BC(&arg0->unk_120[j], n);
        }
        arg0->unk_00 = 0;
        arg0->unk_110 = 0;
        arg0->unk_111 = 0;
    }
}
