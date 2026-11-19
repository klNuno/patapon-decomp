#include "common.h"

extern "C" {
extern s32 func_08882F6C(s32, s32);
extern void func_088D35D4(char *, s32, s32);

class S {
public:
    s32 unk_00, unk_04;
    u8 pad_08[4];
    char *unk_0C;
    s32 unk_10;
    u8 pad_14;
    u8 unk_15, unk_16;
    u8 pad_17[0xD];

    virtual s32 unk_08();
};

void func_088D1B24(S *arg0) {
    if (arg0->unk_10 != 0) {
        s32 temp = arg0->unk_08();
        func_08882F6C(arg0->unk_10, (u8)temp);
    }
    if (arg0->unk_16 == 1) {
        if (arg0->unk_15 == 0) {
            char *p = *(char *volatile *)&arg0->unk_0C;
            s32 b = *(volatile s32 *)&arg0->unk_04;
            func_088D35D4(p, *(volatile s32 *)&arg0->unk_00, b);
            arg0->unk_16 = 0;
        }
    }
    arg0->unk_15 = 0;
}
}
