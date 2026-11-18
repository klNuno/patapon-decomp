#include "common.h"

typedef struct {
    u8 pad_00[0x10A44];
    u8 unk_10A44[0x10D14 - 0x10A44];
    u8 unk_10D14[0x11551 - 0x10D14];
    u8 unk_11551;
    u8 pad_11552[0x11584 - 0x11552];
    u8 unk_11584;
    u8 unk_11585;
} S_089CF31C;

s32 func_089D04A8(S_089CF31C *);
void func_089140C0(void *, s32);
s32 func_08914A74(void *);
s32 func_08914A7C(void *);
s32 func_08914B20(void *);
void func_089D0470(S_089CF31C *, s32);
void func_089B568C(void *, s32);

s32 func_089CF31C(S_089CF31C *arg0) {
    void *s;
    s32 v;

    s = arg0->unk_10D14;
    if (func_089D04A8(arg0) != 0) {
        func_089140C0(s, 8);
        return 0;
    }
    if (func_08914A74(s) == 0) {
        v = func_08914A7C(s);
        if (v == 0) {
            arg0->unk_11584 = 1;
            arg0->unk_11585 = 0;
            return 1;
        }
        if (v == 1) {
            return 1;
        }
        if (v == 2) {
            func_089D0470(arg0, 0x1E);
        } else {
            v = func_08914B20(s);
            switch (v) {
            case (s32)0x801103C1:
                arg0->unk_11584 = 0;
                arg0->unk_11585 = 1;
                return 1;
            case (s32)0x801103C7:
                arg0->unk_11584 = 1;
                arg0->unk_11585 = 1;
                return 1;
            case (s32)0x801103C5:
                arg0->unk_11584 = 1;
                arg0->unk_11585 = 1;
                return 1;
            default:
                arg0->unk_11584 = 0;
                arg0->unk_11585 = 1;
                func_089B568C(arg0->unk_10A44, v);
                arg0->unk_11551 = 1;
                func_089D0470(arg0, 0xC);
                return 1;
            }
        }
    }
    return 0;
}
