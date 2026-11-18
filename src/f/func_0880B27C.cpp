#include "common.h"

extern "C" {

typedef struct T0880B27C_S {
    u8 pad_00[0x34];
    s16 unk_34;
    u8 pad_36[0x3];
    u8 unk_39;
    u8 unk_3A;
    u8 unk_3B;
} T0880B27C_S;

s32 func_08808980(void);
s32 func_08808A80(s32 *, s32 *);
s32 func_08808B04(s16 *);
s16 func_08808D40(s32 *);
s32 func_0880D3D4(T0880B27C_S *, s32);

static inline bool ne(s32 *a, s32 *b) { return !(bool)func_08808A80(a, b); }

s32 func_0880B27C(T0880B27C_S *arg0) {
    s32 sp1C;
    s32 sp18;
    s32 flag;

    if (arg0->unk_3A != 0) {
        arg0->unk_3A = 0;
        return func_08808B04(&arg0->unk_34);
    }
    sp1C = func_0880D3D4(arg0, 1);
    flag = 0;
    if (arg0->unk_39 != 0) {
        sp18 = func_08808980();
        if (ne(&sp1C, &sp18)) {
            flag = 1;
        }
    }
    if (flag != 0) {
        arg0->unk_34 = func_08808D40(&sp1C);
        arg0->unk_3B = 1;
    }
    return sp1C;
}

}
