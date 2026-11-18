#include "common.h"

extern "C" {

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
    s32 unk_04;
} E_08853450;

typedef struct {
    E_08853450 unk_00[0x23];
} R_08853450;

class S_08853450 {
public:
    virtual void v08();
    virtual s32 v0C();
    u8 pad_04[0x94];
    R_08853450 unk_98[2];
    u8 pad_2C8[0x98];
    s32 unk_360;
    u8 pad_364[0x10C];
    s32 unk_470;
};

s32 func_0884E64C(s32);
void *func_0884EBA0(s32, s32);
void *func_0884EBB0(s32, s32);

void *func_08853450(S_08853450 *arg0, s32 arg1) {
    E_08853450 *e = &arg0->unk_98[arg0->unk_360].unk_00[arg1];
    void *r = NULL;
    s32 a = arg0->v0C();
    s32 b = func_0884E64C(arg0->unk_470);

    switch (e->unk_00) {
    case 0:
        r = &e->unk_04;
        break;
    case 1:
        r = &e->unk_04;
        break;
    case 2:
        r = &e->unk_04;
        break;
    case 4:
        r = func_0884EBA0(a, e->unk_04);
        break;
    case 8:
        r = func_0884EBA0(b, e->unk_04);
        break;
    case 0x10:
        r = &e->unk_04;
        break;
    case 0x20:
        r = func_0884EBB0(a, e->unk_04);
        break;
    case 0x40:
        r = func_0884EBB0(b, e->unk_04);
        break;
    }
    return r;
}

}
