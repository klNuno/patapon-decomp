#include "common.h"

extern "C" {

struct A_0894AA30 {
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, void *, s32);
};

void func_0886A45C(s32, s32);

struct H_0894AA30 {
    s32 unk_00;
    A_0894AA30 *unk_04;
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

struct O_0894AA30 {
    u8 pad_00[0x80];
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(s32, s32);
};

typedef struct {
    u8 pad_00[0xC0];
    s8 unk_C0[0x20];
    s8 unk_E0[0x20];
} L_0894AA30;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    L_0894AA30 *unk_08;
    u8 pad_0C[0x4];
    O_0894AA30 unk_10;
    u8 pad_94[0xC];
    O_0894AA30 unk_A0;
    u8 pad_124[0xC];
    u8 unk_130;
    u8 unk_131;
    u8 pad_132[0x6];
    s32 unk_138;
    s32 unk_13C;
    s32 unk_140;
    s32 unk_144;
    s32 unk_148;
    s32 unk_14C;
} T_0894AA30;

u32 func_08822BC4(s8 *);
void func_08865EE0(void *);
void func_08865FE4(void *, s32);
void func_089912C8(H_0894AA30 *, s32, void *);

T_0894AA30 *func_0894AA30(T_0894AA30 *arg0, s32 arg1, L_0894AA30 *arg2, s32 arg3, s32 arg4, s32 arg5) {
    struct { L_0894AA30 *unk_00; } k;
    H_0894AA30 h;
    H_0894AA30 h2;

    arg0->unk_00 = arg1;
    k.unk_00 = arg2;
    arg0->unk_04 = arg5;
    arg0->unk_08 = arg2;
    func_08865EE0(&arg0->unk_10);
    func_08865EE0(&arg0->unk_A0);
    arg0->unk_130 = 0;
    arg0->unk_131 = 0;
    arg0->unk_138 = 0;
    arg0->unk_13C = 0;
    arg0->unk_140 = 0;
    arg0->unk_144 = 0;
    arg0->unk_148 = 0;
    arg0->unk_14C = 0;
    if (func_08822BC4(k.unk_00->unk_C0) != 0) {
        func_089912C8(&h, arg4, k.unk_00->unk_C0);
        func_08865FE4(&arg0->unk_10, h.unk_08);
        h.release();
        arg0->unk_10.v4(0, 1);
        arg0->unk_130 = 1;
    }
    if (func_08822BC4(k.unk_00->unk_E0) != 0) {
        func_089912C8(&h2, arg4, k.unk_00->unk_E0);
        func_08865FE4(&arg0->unk_A0, h2.unk_08);
        h2.release();
        arg0->unk_131 = 1;
    }
    return arg0;
}

}
