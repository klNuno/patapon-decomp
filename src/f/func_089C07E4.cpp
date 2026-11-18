#include "common.h"

extern "C" {

struct Obj_089C07E4_M {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};

struct Obj_089C07E4 {
    u8 pad_00[0x15C];
    void *unk_15C;
    Obj_089C07E4_M unk_160;
    u8 pad_164[0xBC4 - 0x164];
    u8 unk_BC4[0x20];
    u8 unk_BE4[4];
};

void func_0880416C(void *);
void func_0886B11C(void *, s32);
void func_08985484(void *, s32);
void func_089C4520(void *, s32);
void func_089D3B78(void *, s32);
extern u8 D_08A48024[];
extern u8 D_08A48C4C[];

Obj_089C07E4 *func_089C07E4(Obj_089C07E4 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_15C = D_08A48C4C;
        func_089C4520(arg0->unk_BE4, -1);
        func_089D3B78(arg0->unk_BC4, -1);
        if (&arg0->unk_160 != NULL) {
            *(void **)&arg0->unk_160 = D_08A48024;
            arg0->unk_160.v3();
            func_0886B11C(&arg0->unk_160, 0);
        }
        func_08985484(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
