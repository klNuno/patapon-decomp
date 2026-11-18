#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x34];
    u8 unk_34;
    u8 pad_35;
    u8 unk_36;
    u8 unk_37;
    u8 unk_38;
} T08807F68;

s32 func_0880A97C(void *, u8);
u8 func_0880AD9C(s32 *);
s32 func_0880ADA4(s32 *, s32 *);
s32 func_0880ADB8(void);
s32 func_0880ADC0(void *);

inline bool func_08807F68_0(s32 *a, s32 *b) { return !(bool)func_0880ADA4(a, b); }

s32 func_08807F68(T08807F68 *arg0) {
    s32 sp1C;
    s32 sp18;
    bool var_s1;

    if (arg0->unk_37 != 0) {
        return func_0880ADC0(&arg0->unk_34);
    }
    sp1C = func_0880A97C(arg0, arg0->unk_36);
    var_s1 = false;
    if (arg0->unk_36 != 0) {
        sp18 = func_0880ADB8();
        if (func_08807F68_0(&sp1C, &sp18)) {
            var_s1 = true;
        }
    }
    if (var_s1) {
        arg0->unk_34 = func_0880AD9C(&sp1C);
        arg0->unk_37 = 1;
        arg0->unk_38 = 1;
    }
    return sp1C;
}

}
