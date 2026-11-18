#include "common.h"

extern "C" {

class Del_089CB3D4 {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};

void func_089CBAD0(s32, s32);
void func_0880416C(void *);

class Ptr_089CB3D4 {
public:
    s32 unk_00;
    Del_089CB3D4 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, unk_0C, unk_00);
                func_089CBAD0(p, unk_00);
            }
        }
    }
};

typedef struct {
    Ptr_089CB3D4 *unk_00;
    s32 unk_04;
} V_089CB3D4;

typedef struct {
    u8 pad_00[0x110];
    V_089CB3D4 unk_110;
} M_089CB3D4;

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} L_089CB3D4;

typedef struct {
    u8 pad_00[8];
    u8 unk_08[0xC];
    M_089CB3D4 unk_14;
    L_089CB3D4 unk_12C;
    L_089CB3D4 unk_154;
} Obj_089CB3D4;

extern u8 D_08A48DF4[];

void func_089CB55C(Obj_089CB3D4 *);
void func_089CB2B8(L_089CB3D4 *);
void func_089CA414(L_089CB3D4 *, s32);
void func_08945EC4(void *, s32);
void func_089458C8(void *, s32);

Obj_089CB3D4 *func_089CB3D4(Obj_089CB3D4 *arg0, s16 arg1) {
    Ptr_089CB3D4 *p;
    Ptr_089CB3D4 **d;
    s32 *n;

    if (arg0 != NULL) {
        func_089CB55C(arg0);
        if (&arg0->unk_154 != NULL) {
            arg0->unk_154.unk_24 = D_08A48DF4;
            func_089CB2B8(&arg0->unk_154);
            func_089CA414(&arg0->unk_154, -1);
        }
        if (&arg0->unk_12C != NULL) {
            arg0->unk_12C.unk_24 = D_08A48DF4;
            func_089CB2B8(&arg0->unk_12C);
            func_089CA414(&arg0->unk_12C, -1);
        }
        if (&arg0->unk_14 != NULL) {
            p = arg0->unk_14.unk_110.unk_00;
            d = &arg0->unk_14.unk_110.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_14.unk_110.unk_04)) {
                n = &arg0->unk_14.unk_110.unk_04;
                do {
                    if (p != NULL) {
                        if (p != NULL) {
                            p->release();
                        }
                    }
                    p++;
                } while (p != *d + *n);
            }
            arg0->unk_14.unk_110.unk_04 = 0;
        }
        func_08945EC4(arg0->unk_08, -1);
        func_089458C8(arg0, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
