#include "common.h"

typedef struct {
    f32 unk_00[8];
} S3;

typedef struct {
    f32 unk_00[2];
} V;

typedef struct {
    f32 unk_00[12];
    V unk_30;
    f32 unk_38;
    f32 unk_3C;
} M;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

typedef struct {
    u8 pad_00[0x738];
    u8 unk_738[0x2738];
    u8 unk_2E70[0x2F0];
    u8 unk_3160[0x2D0];
    u8 unk_3430[0x390];
    char unk_37C0[0x50];
    u8 unk_3810[0x13F4];
    u8 unk_4C04;
    u8 unk_4C05;
    u8 pad_4C06[2];
    s32 unk_4C08;
} T;

extern f32 D_08A00AC0[];
extern f32 D_08A00AC8[];
extern f32 D_08A00AD0[];
extern f32 D_08A00AD8[];
extern f32 D_08A00AE0[];
extern u8 D_089E5E80[];

s32 func_08814C0C(s32);
void func_08855354(char *);
void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);
void func_088651A4(void *, M *, void *, s32, s32);
void func_0886575C(s32, s32, s32);
extern s32 func_08865870(void);
extern void func_089137D0(char *);
void func_08919F08(void *, void *, s32);
void func_0891CEBC(void *);
void func_0891D9F0(void *, void *);
s32 func_0892031C(void *);

void func_0891B970(T *arg0) {
    L_0893CEA8 l;
    S3 v;
    struct {
        M unk_00;
        u8 pad_40[8];
    } m;

    if (arg0->unk_4C05 != 0) {
        if (arg0->unk_4C04 == 1) {
            func_08864A30(&l);
            v.unk_00[0] = D_08A00AC0[1];
            v.unk_00[1] = D_08A00AC8[0];
            v.unk_00[2] = D_08A00AC8[1];
            v.unk_00[3] = D_08A00AD0[0];
            v.unk_00[4] = D_08A00AD0[1];
            v.unk_00[5] = D_08A00AD8[0];
            v.unk_00[6] = D_08A00AD8[1];
            v.unk_00[7] = D_08A00AE0[0];
            func_0886575C(0, 1, 1);
            func_08814C0C(9);
            func_08855354((char *)&m.unk_00);
            func_088651A4(&v, &m.unk_00, D_089E5E80, 0, 1);
            func_08865870();
            func_08864A68(&l, -1);
        }
        switch (arg0->unk_4C08) {
        case 2:
            func_0891D9F0(arg0->unk_3160, arg0->unk_3810);
            break;
        case 1:
            func_089137D0(arg0->unk_37C0);
            func_08919F08(arg0->unk_738, arg0->unk_3810, func_0892031C(arg0->unk_3430) != 0);
            func_0891CEBC(arg0->unk_2E70);
            break;
        case 3:
            func_089137D0(arg0->unk_37C0);
            break;
        }
    }
}
