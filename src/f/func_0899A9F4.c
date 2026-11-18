#include "common.h"

typedef struct {
    f32 unk_00[3];
} PMF;

typedef struct {
    void *unk_00;
    PMF unk_04;
    s32 *unk_10;
} I;

typedef struct {
    void *unk_00;
    s32 unk_04;
    I unk_08;
} F;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
} E;

typedef struct {
    u8 pad_00[0xF90];
    E *unk_F90;
    u8 pad_F94[4];
    s32 unk_F98;
    u8 pad_F9C[0x90];
    s32 unk_102C;
    u8 pad_1030[0x10];
    u8 unk_1040;
    u8 pad_1041[3];
    s32 unk_1044;
    f32 unk_1048;
    u8 pad_104C[0x1C];
    F unk_1068;
    u8 pad_1084[4];
    F unk_1088;
} S;

extern u8 D_08A48610[];
extern u8 D_08A4861C[];
extern u8 D_08A48628[];
extern u8 D_08A48634[];
extern f32 D_08A06BD8[];
extern f32 D_08A06BE0[];
extern f32 D_08A06BE8[];
extern f32 D_08A06BEC[];
void func_0881F120(void *, void *, s32);
void func_0899E290(s32);

void func_0899A9F4(S *arg0, s32 arg1, F *arg2, F *arg3) {
    I *p;
    PMF m;
    PMF n;

    if (arg0->unk_F98 != 0) {
    arg0->unk_102C = arg1;
    arg0->unk_1044 = 0;
    arg0->unk_1048 = 1.0f;
    arg0->unk_1040 = 1;
    func_0899E290(((E *)((u8 *)arg0->unk_F90 + (arg1 << 4)))->unk_08);
    if (arg2 != &arg0->unk_1068) {
        if (arg2->unk_00 != NULL) {
            if (arg2->unk_04 != 0) {
                arg0->unk_1068.unk_04 = arg2->unk_04;
                p = &arg0->unk_1068.unk_08;
                if (p != NULL) {
                    m.unk_00[0] = D_08A06BD8[0];
                    m.unk_00[1] = D_08A06BD8[1];
                    m.unk_00[2] = D_08A06BE0[0];
                    p->unk_00 = D_08A48634;
                    p->unk_00 = D_08A48628;
                    p->unk_04 = m;
                    p->unk_10 = &arg0->unk_1068.unk_04;
                }
                arg0->unk_1068.unk_00 = p;
            } else {
                func_0881F120(&arg0->unk_1068.unk_08, &arg2->unk_08, 0x14);
                arg0->unk_1068.unk_00 = &arg0->unk_1068.unk_08;
            }
        } else {
            arg0->unk_1068.unk_00 = NULL;
            arg0->unk_1068.unk_04 = 0;
        }
    }
    if (arg3 != &arg0->unk_1088) {
        if (arg3->unk_00 != NULL) {
            if (arg3->unk_04 != 0) {
                arg0->unk_1088.unk_04 = arg3->unk_04;
                p = &arg0->unk_1088.unk_08;
                if (p != NULL) {
                    n.unk_00[0] = D_08A06BE0[1];
                    n.unk_00[1] = D_08A06BE8[0];
                    n.unk_00[2] = D_08A06BEC[0];
                    p->unk_00 = D_08A4861C;
                    p->unk_00 = D_08A48610;
                    p->unk_04 = n;
                    p->unk_10 = &arg0->unk_1088.unk_04;
                }
                arg0->unk_1088.unk_00 = p;
            } else {
                func_0881F120(&arg0->unk_1088.unk_08, &arg3->unk_08, 0x14);
                arg0->unk_1088.unk_00 = &arg0->unk_1088.unk_08;
            }
        } else {
            arg0->unk_1088.unk_00 = NULL;
            arg0->unk_1088.unk_04 = 0;
        }
    }
    }
}
