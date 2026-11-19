#include "common.h"

s32 func_0893D40C(void *);

typedef struct {
    u8 pad_00[0x3C];
    s32 unk_3C;
} V;
typedef struct {
    u8 pad_00[0x40];
    s32 unk_40[16];
} W;
typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} U;
typedef struct {
    u8 pad_00[0x374];
    s32 unk_374;
    u8 pad_378[0x18];
    V *unk_390;
    W *unk_394;
} T;
typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2;

typedef struct { V2 unk_00; u8 pad_08[4]; } P;

s32 func_0892A498(void *, s32, V2 *, V2 *, s32, s32, f32);

V *func_089378EC(T *arg0, V2 *arg1, s32 arg2, s32 *arg3, U *arg4) {
    s32 temp0;
    P temp1;
    V *p;
    s32 temp;

    if (arg2 < 0) {
        return NULL;
    }
    p = &arg0->unk_390[arg2];
    temp = -1;
    if (p->unk_3C != 0 && arg3 != NULL && arg4 != NULL) {
        temp = *(s32 *)(arg4->unk_08 * 4 + (u32)&arg0->unk_394[*arg3] + 0x40);
    }
    if (temp != -1) {
        if (arg0->unk_374 != 0) {
            temp0 = arg0->unk_374;
            temp1.unk_00.unk_00 = 0.0f;
            temp1.unk_00.unk_04 = 0.0f;
            func_0892A498((void *)func_0893D40C(&temp0), temp, arg1, &temp1.unk_00, -1, 0, 0.0f);
        }
    }
    return p;
}
