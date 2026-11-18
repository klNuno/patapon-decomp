#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0xA8];
} E_08953378;

typedef struct {
    E_08953378 *unk_00;
    s32 unk_04;
} V_08953378;

class H_08953378 {
public:
    u8 pad_00[0x80];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(s32, s32);
};

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 unk_08[0xFCC - 0x8];
    V_08953378 unk_FCC;
    u8 pad_FD4[0x1018 - 0xFD4];
    f32 unk_1018;
    f32 unk_101C;
    f32 unk_1020;
    s32 unk_1024;
    u8 pad_1028[0x1094 - 0x1028];
    s32 unk_1094;
    u8 pad_1098[0x10C0 - 0x1098];
    H_08953378 unk_10C0;
    u8 pad_1144[0x1250 - 0x1144];
    u8 unk_1250;
} S_08953378;

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
} B_08953378;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} P_08953378;

extern u32 D_08A04A1C[];
extern u8 D_089EA6D0[];
extern u8 D_089EB390[];

void *func_088D669C(void *, u8 *);
void func_088D66F4(void *, void *);
void *func_08953538(void *, void *, void *, void *, u8, f32);

void func_08953378(S_08953378 *arg0, u32 arg1) {
    B_08953378 ca;
    B_08953378 cb;
    E_08953378 oa;
    P_08953378 pa;
    E_08953378 ob;
    P_08953378 pb;
    E_08953378 *p;
    V_08953378 *v;
    s32 n;

    arg1 = *(D_08A04A1C[0] < arg1 ? D_08A04A1C : &arg1);
    if (arg0->unk_1250 != 0) {
        p = arg0->unk_FCC.unk_00;
        n = arg0->unk_FCC.unk_04;
        v = &arg0->unk_FCC;
        if ((u32)p != (u32)(p + n)) {
            do {
                p++;
            } while (p != v->unk_00 + n);
        }
        arg0->unk_FCC.unk_04 = 0;
        arg0->unk_1094 = 0;
        arg0->unk_04 = 0;
        ca.unk_00 = 0;
        func_088D66F4(arg0->unk_08, func_08953538(&oa, &arg0->unk_10C0, func_088D669C(&pa, &ca.unk_00), D_089EB390, 0, 1.0f));
        arg0->unk_1024 = 0;
        arg0->unk_1020 = 1.0f;
        arg0->unk_1018 = 46.0f;
        arg0->unk_101C = 64.0f;
    } else {
        arg0->unk_1250 = 1;
        p = arg0->unk_FCC.unk_00;
        n = arg0->unk_FCC.unk_04;
        v = &arg0->unk_FCC;
        if ((u32)p != (u32)(p + n)) {
            do {
                p++;
            } while (p != v->unk_00 + n);
        }
        arg0->unk_FCC.unk_04 = 0;
        arg0->unk_1094 = 0;
        arg0->unk_04 = 0;
        arg0->unk_10C0.v3(0, 1);
        cb.unk_00 = 0;
        func_088D66F4(arg0->unk_08, func_08953538(&ob, &arg0->unk_10C0, func_088D669C(&pb, &cb.unk_00), D_089EA6D0, 0, 1.0f));
        arg0->unk_1024 = 0;
        arg0->unk_1020 = 1.0f;
        arg0->unk_1018 = 46.0f;
        arg0->unk_101C = 64.0f;
    }
}

}
