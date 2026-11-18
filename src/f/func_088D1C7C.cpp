#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x14C8];
    s32 unk_14C8;
} D_088D1C7C;

typedef struct {
    u8 pad_00[0x3A0];
    D_088D1C7C *unk_3A0;
} C_088D1C7C;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x10];
    s32 unk_18;
    u8 pad_1C[0x14];
    C_088D1C7C *unk_30;
} B_088D1C7C;

typedef struct {
    s32 unk_00;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
    u8 pad_08[0x8];
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    f32 unk_1C;
    s32 unk_20;
} S_088D1C7C;

struct A_088D1C7C_Base {
    u8 pad_00[0x8];
    s32 *unk_08;
    u8 pad_0C[0x8];
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 pad_17[0x1];
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
};

struct A_088D1C7C : A_088D1C7C_Base {
    virtual s32 v0();
};

s32 func_088D1DD8(A_088D1C7C *, B_088D1C7C *);

s32 func_088D1C7C(S_088D1C7C *arg0, A_088D1C7C *arg1, B_088D1C7C *arg2) {
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_06 = 0;
    arg0->unk_05 = 0;
    arg0->unk_07 = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 1.0f;
    arg0->unk_20 = 0;
    if ((u8)arg1->v0() == 0) {
        return 0;
    }
    if ((u8)func_088D1DD8(arg1, arg2) == 0) {
        return 0;
    }
    arg1->unk_1C = -1;
    if (arg2->unk_04 == 2) {
        arg1->unk_20 = 1;
    } else {
        arg1->unk_20 = 0;
    }
    arg1->unk_18 = -1;
    if (arg1->unk_20 == 0 && arg2->unk_18 == 2) {
        arg1->unk_18 = arg2->unk_30->unk_3A0->unk_14C8;
    }
    switch (*arg1->unk_08) {
    case -1:
        return 0;
    case 0:
        if (arg1->unk_14 == 1) {
            return 0;
        }
        arg1->unk_14 = 1;
        break;
    case 1:
        break;
    case 2:
        arg1->unk_16 = 1;
        arg1->unk_15 = 1;
        return 0;
    }
    arg0->unk_04 = 1;
    return 0;
}

}
