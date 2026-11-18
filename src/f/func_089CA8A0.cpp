#include "common.h"

extern "C" {

struct A_089CA8A0 {
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, void *, s32);
};

void func_0886A45C(s32, s32);

struct H_089CA8A0 {
    s32 unk_00;
    A_089CA8A0 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return (unk_0C != NULL) ? *unk_0C : 0; }
    void release() {
        if (unk_08 != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vfunc_0C(unk_08, *(void **)&unk_0C, unk_00);
                func_0886A45C(unk_08, unk_00);
            }
        }
    }
};

struct B_089CA8A0 {
    u8 pad_00[0x28];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14(s32);
};

struct T_089CA8A0 : B_089CA8A0 {
    u8 pad_2C[0x20];
    u8 *unk_4C;
    s32 unk_50;
    u8 pad_54[0xC];
    u8 unk_60[0x90];
    f32 unk_F0;
    f32 unk_F4;
    f32 unk_F8;
    s32 unk_FC;
    f32 unk_100;
    f32 unk_104;
};

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V_089CA8A0;

s32 func_0898A324(void *);
s32 func_0898583C(s32);
void func_088CE1EC(s32, T_089CA8A0 *);
s32 func_088C6484(s32);
s32 func_088BCF94(s32);
void func_08865FEC(void *, s32, s32);
void func_089912C8(H_089CA8A0 *, s32, void *);

void func_089CA8A0(T_089CA8A0 *arg0, u8 *arg1, V_089CA8A0 *arg2) {
    H_089CA8A0 h;

    func_088CE1EC(func_0898583C(func_0898A324(&arg0->unk_4C[0x1212D0])), arg0);
    arg0->v14(-2);
    arg0->unk_50 = 0;
    arg0->unk_FC = 0;
    arg0->unk_F0 = arg2->unk_00;
    arg0->unk_F4 = arg2->unk_04;
    arg0->unk_F8 = 0;
    arg0->unk_100 = 1.0f;
    arg0->unk_104 = 1.5f;
    func_089912C8(&h, func_088BCF94(func_088C6484((s32)&arg0->unk_4C[0x506F0])), arg1 + 0x28);
    func_08865FEC(arg0->unk_60, h.unk_08, 1);
    h.release();
}

}
