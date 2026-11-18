#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x34];
    u16 unk_34;
    u8 pad_36[0x3];
    u8 unk_39;
    u8 unk_3A;
    u8 unk_3B;
} Obj_0880B120;

s32 func_08808A80(s32 *, s32 *);
s32 func_08808980(void);
s32 func_08808D40(s32 *);
s32 func_08807E60(Obj_0880B120 *, s32);
s32 func_0880A6B8(s32 *);

static inline bool ne(s32 *a, s32 *b) { return !(bool)func_08808A80(a, b); }

s32 func_0880B120(Obj_0880B120 *arg0, s32 arg1) {
    s32 sp1C;
    s32 sp18;
    s32 sp14;

    if (arg0->unk_39 != 0) {
        if (arg0->unk_3A != 0) {
            sp1C = func_08808980();
            if (func_08808A80(&arg1, &sp1C)) {
                return arg1;
            }
            if (func_08807E60(arg0, arg0->unk_34) < 0) {
                return func_08808980();
            }
            arg0->unk_34 = func_08808D40(&arg1);
            arg0->unk_3B = 1;
        } else {
            sp18 = func_08808980();
            if (ne(&arg1, &sp18)) {
                arg0->unk_34 = func_08808D40(&arg1);
                arg0->unk_3B = 1;
            } else if (arg0->unk_3B == 0) {
                return func_08808980();
            }
            arg0->unk_3A = 1;
        }
    } else {
        sp14 = func_08808980();
        if (func_08808A80(&arg1, &sp14)) {
            return arg1;
        }
        if (func_08807E60(arg0, func_08808D40(&arg1)) < 0) {
            return func_08808980();
        }
    }
    return func_0880A6B8(&arg1);
}

}
