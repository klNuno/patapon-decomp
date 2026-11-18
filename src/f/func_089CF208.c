#include "common.h"

typedef struct {
    u8 pad_00[0x10A44];
    u8 unk_10A44[0x10D14 - 0x10A44];
    u8 unk_10D14[0x11551 - 0x10D14];
    u8 unk_11551;
} S_089CF208;

s32 func_089D04A8(S_089CF208 *);
void func_089140C0(void *, s32);
s32 func_08914A74(void *);
s32 func_08914A7C(void *);
s32 func_08914B20(void *);
void func_089D0470(S_089CF208 *, s32);
void func_089B568C(void *, s32);

s32 func_089CF208(S_089CF208 *arg0) {
    void *s;
    s32 v;

    s = arg0->unk_10D14;
    if (func_089D04A8(arg0) != 0) {
        func_089140C0(s, 7);
        return 0;
    }
    if (func_08914A74(s) == 0) {
        v = func_08914A7C(s);
        if (v == 0) {
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
            case (s32)0x80110347:
                func_089D0470(arg0, 0xD);
                break;
            default:
                func_089B568C(arg0->unk_10A44, v);
                arg0->unk_11551 = 1;
                func_089D0470(arg0, 0xD);
                break;
            }
            return 1;
        }
    }
    return 0;
}
