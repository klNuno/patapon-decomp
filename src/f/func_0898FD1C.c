#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} V;

typedef struct {
    s32 unk_00;
    V unk_04;
} K;

typedef struct {
    u8 pad_00[0xD0];
    s32 unk_D0;
    V unk_D4;
} R;

typedef struct {
    u8 pad_00[0x40A0];
    s32 unk_40A0;
} S;

s32 func_0898EA40(s32, s32, K *);
R *func_0898FBD0(S *, s32, s32, s32, s32, s32);

void func_0898FD1C(S *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    K k;
    R *r;

    k.unk_00 = -1;
    k.unk_04.unk_00 = -1;
    k.unk_04.unk_04 = -1;
    k.unk_04.unk_08 = -1;
    r = func_0898FBD0(arg0, arg1, arg2, arg3, func_0898EA40(arg0->unk_40A0, arg4, &k), arg5);
    if (r != NULL) {
        r->unk_D0 = k.unk_00;
        r->unk_D4 = k.unk_04;
    }
}
