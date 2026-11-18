#include "common.h"

extern "C" {

class C_089553C0 {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
};

class Del_089553C0 {
public:
    virtual s32 *vf_08(s32, s32);
    virtual void vf_0C(s32, s32 *, s32);
};

void func_08958A88(s32, s32);

class Ptr_089553C0 {
public:
    s32 unk_00;
    Del_089553C0 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            s32 *&c = unk_0C;
            *c -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, c, unk_00);
                func_08958A88(p, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x1C];
    u8 unk_1C[0x1EC - 0x1C];
    u8 unk_1EC[0x2F8 - 0x1EC];
    u8 unk_2F8[0x30C - 0x2F8];
    u8 unk_30C[0xB90 - 0x30C];
    u8 unk_B90[0x25CC - 0xB90];
    u8 unk_25CC[0x2600 - 0x25CC];
} B_089553C0;

typedef struct {
    void *unk_00;
    u8 pad_04[0x4];
    u8 unk_08[0x48];
    void *unk_50;
    u8 pad_54[0xA88 - 0x54];
    Ptr_089553C0 unk_A88;
    u8 pad_A98[0xAAC - 0xA98];
    u8 unk_AAC[0xAF0 - 0xAAC];
    u8 unk_AF0[0x1D50 - 0xAF0];
    B_089553C0 unk_1D50;
    u8 unk_4350[0x43C0 - 0x4350];
    u8 unk_43C0[0x1E6B0 - 0x43C0];
    u8 unk_1E6B0[0x20010 - 0x1E6B0];
    u8 unk_20010[0x22060 - 0x20010];
    u8 unk_22060[0x10];
} S_089553C0;

extern u8 D_08A478A4[];
extern u8 D_08A48024[];
extern u8 D_08A477CC[];
void func_08955C30(void);
void func_0894B550(void *, s32);
void func_0894C130(void *, s32);
void func_08953F7C(void *, s32);
void func_0894D9EC(void *, s32);
void func_08958BB8(void *, s32);
void func_08950790(B_089553C0 *);
void func_088A38B0(void *, s32);
void func_089504A4(void *, s32);
void func_088793F0(void *, s32);
void func_08950510(void *, s32);
void func_0895057C(void *, s32);
void func_089505F4(void *, s32);
void func_08952D3C(void *, s32);
void func_0885AC5C(void *, s32);
void func_0886B11C(void *, s32);
void func_0887A820(void *, s32);
void func_0880416C(void *);

S_089553C0 *func_089553C0(S_089553C0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A478A4;
        func_08955C30();
        func_0894B550(arg0->unk_22060, -1);
        func_0894C130(arg0->unk_20010, -1);
        func_08953F7C(arg0->unk_1E6B0, -1);
        func_0894D9EC(arg0->unk_43C0, -1);
        func_08958BB8(arg0->unk_4350, -1);
        if (&arg0->unk_1D50 != NULL) {
            func_08950790(&arg0->unk_1D50);
            func_088A38B0(arg0->unk_1D50.unk_25CC, -1);
            func_089504A4(arg0->unk_1D50.unk_B90, -1);
            func_088793F0(arg0->unk_1D50.unk_30C, -1);
            func_08950510(arg0->unk_1D50.unk_2F8, -1);
            func_0895057C(arg0->unk_1D50.unk_1EC, -1);
            func_089505F4(arg0->unk_1D50.unk_1C, -1);
        }
        func_08952D3C(arg0->unk_AF0, -1);
        if (arg0->unk_AAC != NULL) {
            func_0885AC5C(arg0->unk_AAC, -1);
        }
        if (&arg0->unk_A88 != NULL) {
            if (&arg0->unk_A88 != NULL) {
                arg0->unk_A88.release();
            }
        }
        if (&arg0->unk_50 != NULL) {
            arg0->unk_50 = D_08A48024;
            ((C_089553C0 *)&arg0->unk_50)->v14();
            func_0886B11C(&arg0->unk_50, 0);
        }
        func_0887A820(arg0->unk_08, -1);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A477CC;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
