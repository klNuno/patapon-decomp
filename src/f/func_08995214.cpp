#include "common.h"

extern "C" {

class X_08995214 {
public:
    u8 pad_00[0x1058];
    virtual void v08();
    virtual void v0C();
};

struct T_08995214 {
    u8 pad_00[0x1060];
    s32 unk_1060;
    u8 pad_1064[0xC];
    X_08995214 unk_1070;
    u8 pad_20D0[0x7800 - 0x1070 - sizeof(X_08995214)];
    X_08995214 unk_7800;
    u8 pad_8860[0xAA90 - 0x7800 - sizeof(X_08995214)];
    X_08995214 unk_AA90;
    u8 pad_B2F0[0x46180 - 0xAA90 - sizeof(X_08995214)];
    u8 unk_46180[0x462F0 - 0x46180];
    u8 unk_462F0[0x47348 - 0x462F0];
    u8 unk_47348[4];
};

extern u8 D_089EEAD0[];

s32 func_08996810(void *);
s32 func_089985E4(s32);
s32 func_08998080(s32, u32);
s32 func_0899A8E0(s32);
u32 func_08996818(void *);
void func_08926200(void *, u8 *, s32);

void func_08995214(T_08995214 *arg0) {
    s32 f;
    u32 i;
    u32 k;

    arg0->unk_1070.v0C();
    arg0->unk_7800.v0C();
    arg0->unk_AA90.v0C();
    if (func_08996810(arg0->unk_46180) == 0) {
        return;
    }
    if (func_089985E4(arg0->unk_1060) == 2) {
        return;
    }
    if (func_089985E4(arg0->unk_1060) == 4) {
        return;
    }
    f = 1;
    for (i = 0; i < 3; i++) {
        if (((func_0899A8E0(func_08998080(arg0->unk_1060, i)) != 0) ^ 1) == 0) {
            f = 0;
            break;
        }
    }
    k = func_08996818(arg0->unk_46180);
    if (k == 3) {
        return;
    }
    if (func_0899A8E0(func_08998080(arg0->unk_1060, k))) {
        func_08926200(arg0, D_089EEAD0, 0);
        return;
    }
    if (f) {
        func_08926200(arg0->unk_462F0, D_089EEAD0, 0);
    } else {
        func_08926200(arg0->unk_47348, D_089EEAD0, 0);
    }
}

}
