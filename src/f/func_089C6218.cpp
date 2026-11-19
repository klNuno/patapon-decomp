#include "common.h"

struct S;
typedef void (S::*T)(s32, s32);

struct U {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[8];
    T unk_14;
    S *unk_20;
};

extern "C" {
void func_089C6218(U *arg0, s32 arg1) {
    if (arg0->unk_20 != NULL && arg0->unk_14 != NULL) {
        (arg0->unk_20->*arg0->unk_14)(arg1, arg0->unk_08);
    }
}
}
