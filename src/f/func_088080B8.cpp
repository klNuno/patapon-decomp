#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x34];
    s8 unk_34;
    u8 pad_35;
    u8 unk_36;
    u8 unk_37;
    u8 unk_38;
} S_088080B8;

s32 func_0880ADA4(s32 *, s32 *);
s32 func_0880ADB8(void);
s8 func_0880AD9C(s32 *);
s32 func_0880AD60(s32 *);
s32 func_08808370(S_088080B8 *, s8);

inline bool func_088080B8_ne(s32 *a, s32 *b) { return !(bool)func_0880ADA4(a, b); }

s32 func_088080B8(S_088080B8 *arg0, s32 arg1) {
    s32 e1;
    s32 e2;
    s32 e3;

    if (arg0->unk_36 != 0) {
        if (arg0->unk_37 != 0) {
            e1 = func_0880ADB8();
            if (func_0880ADA4(&arg1, &e1)) {
                return arg1;
            }
            if (func_08808370(arg0, arg0->unk_34) < 0) {
                return func_0880ADB8();
            }
            arg0->unk_34 = func_0880AD9C(&arg1);
            arg0->unk_38 = 1;
        } else {
            e2 = func_0880ADB8();
            if (func_088080B8_ne(&arg1, &e2)) {
                arg0->unk_34 = func_0880AD9C(&arg1);
                arg0->unk_38 = 1;
            } else if (arg0->unk_38 == 0) {
                return func_0880ADB8();
            }
            arg0->unk_37 = 1;
        }
    } else {
        e3 = func_0880ADB8();
        if (func_0880ADA4(&arg1, &e3)) {
            return arg1;
        }
        if (func_08808370(arg0, func_0880AD9C(&arg1)) < 0) {
            return func_0880ADB8();
        }
    }
    return func_0880AD60(&arg1);
}

}
