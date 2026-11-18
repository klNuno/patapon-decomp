#include "common.h"

extern "C" {

struct A_088B8398 {
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, void *, s32);
};

void func_0886A45C(s32, s32);

struct H_088B8398 {
    s32 unk_00;
    A_088B8398 *unk_04;
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

struct O_088B8398 {
    u8 pad_00[0x80];
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(s32, s32);
};

typedef struct {
    s8 unk_00;
    u8 pad_01[0x1F];
} E_088B8398;

typedef struct {
    u8 pad_00[0x20];
    E_088B8398 unk_20[1];
} L_088B8398;

typedef struct {
    s32 unk_00;
    L_088B8398 *unk_04;
    u8 pad_08[0x8];
    O_088B8398 unk_10;
    u8 pad_94[0xC];
    u8 unk_A0;
} T_088B8398;

void func_08865EE0(void *);
void func_08865FE4(void *, s32);
void func_089912C8(H_088B8398 *, s32, void *);

T_088B8398 *func_088B8398(T_088B8398 *arg0, s32 arg1, L_088B8398 *arg2, s32 arg3, s32 arg4, s32 arg5) {
    H_088B8398 h;

    arg0->unk_00 = arg5;
    arg0->unk_04 = arg2;
    func_08865EE0(&arg0->unk_10);
    arg0->unk_A0 = 1;
    if (arg0->unk_04->unk_20[arg3].unk_00 != 0) {
        func_089912C8(&h, arg4, &arg0->unk_04->unk_20[arg3]);
        func_08865FE4(&arg0->unk_10, h.unk_08);
        h.release();
        arg0->unk_10.v4(0, 1);
    }
    return arg0;
}

}
