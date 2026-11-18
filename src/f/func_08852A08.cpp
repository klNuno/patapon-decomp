#include "common.h"

extern "C" {

class Del_08852A08 {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};

void func_08853A80(s32, s32);
void func_0881F5C0(void *, s32, s32);

class Ptr_08852A08 {
public:
    s32 unk_00;
    Del_08852A08 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, unk_0C, unk_00);
                func_08853A80(p, unk_00);
            }
        }
    }
};

typedef struct {
    Ptr_08852A08 *unk_00;
    s32 unk_04;
} V_08852A08;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} C_08852A08;

typedef struct {
    C_08852A08 unk_00[15];
    s32 unk_78;
    u8 pad_7C[0x9C];
} B_08852A08;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    C_08852A08 *unk_08;
    u8 unk_0C;
    u8 pad_0D[0x3];
    s32 unk_10;
    s32 unk_14;
    B_08852A08 unk_18[3];
    s32 unk_360;
    u8 pad_364[0x104];
    V_08852A08 unk_468;
    s32 unk_470;
} Obj_08852A08;

void func_08852A08(Obj_08852A08 *arg0) {
    Ptr_08852A08 *p;
    Ptr_08852A08 **d;
    s32 *n;

    p = arg0->unk_468.unk_00;
    d = &arg0->unk_468.unk_00;
    if ((u32)p != (u32)(p + arg0->unk_468.unk_04)) {
        n = &arg0->unk_468.unk_04;
        do {
            if (p != NULL) {
                if (p != NULL) {
                    p->release();
                }
            }
            p++;
        } while (p != *d + *n);
    }
    arg0->unk_468.unk_04 = 0;
    func_0881F5C0(arg0->unk_18, 0, sizeof(arg0->unk_18));
    arg0->unk_10 = 0;
    arg0->unk_0C = 0;
    arg0->unk_360 = 0;
    arg0->unk_08 = &arg0->unk_18[arg0->unk_360].unk_00[arg0->unk_18[arg0->unk_360].unk_78];
    arg0->unk_14 = 0;
    arg0->unk_470 = 0;
    arg0->unk_04 = 0;
}

}
