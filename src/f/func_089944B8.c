#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} V_089944B8;

typedef struct {
    u8 pad_00[0x1060];
    s32 unk_1060;
    s32 unk_1064;
    u8 unk_1068;
    u8 unk_1069;
    u8 pad_106A[0x2];
    s32 unk_106C;
    s32 unk_1070;
    s32 unk_1074;
    u8 unk_1078[0x404];
    V_089944B8 unk_147C;
} S_089944B8;

s32 func_08998080(s32, s32);
s32 func_0899A908(s32, s32);
s32 func_0899E1DC(s32, s32);
s32 func_0899E16C(s32, s32);
void func_089941E0(S_089944B8 *);
s32 func_08998D18(s32);
s32 func_08947BF0(s32, s32);
void func_089BBC08(s32, u8 *, s32, s32);

s32 func_089944B8(S_089944B8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *p;
    V_089944B8 *v;
    s32 r;
    s32 id;

    if ((u8)func_0899E1DC(func_0899A908(func_08998080(arg0->unk_1060, arg1), arg2), arg3) == 1) {
        return 0;
    }
    arg0->unk_1068 = 1;
    arg0->unk_1069 = 0;
    arg0->unk_106C = arg1;
    arg0->unk_1070 = arg3;
    arg0->unk_1074 = arg2;
    p = arg0->unk_147C.unk_00;
    v = &arg0->unk_147C;
    if ((u32)p != (u32)(p + arg0->unk_147C.unk_04)) {
        do {
            p++;
        } while (p != v->unk_00 + arg0->unk_147C.unk_04);
    }
    arg0->unk_147C.unk_04 = 0;
    func_089941E0(arg0);
    r = func_0899E16C(func_0899A908(func_08998080(arg0->unk_1060, arg1), arg2), arg3);
    if (r != 0) {
        id = func_08947BF0(func_08998D18(arg0->unk_1060), r);
    } else {
        id = -1;
    }
    func_089BBC08(arg0->unk_1064, arg0->unk_1078, id, -1);
    return 1;
}
