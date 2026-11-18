#include "common.h"

typedef struct {
    u8 pad_00[0xA4];
    void *unk_A4;
} M;

typedef struct S0 {
    u8 pad_00[0x1C];
    void *unk_1C;
    s32 unk_20;
    u8 unk_24[0x2C];
    M unk_50;
    u8 pad_F8[0x8];
    u8 unk_100;
    u8 pad_101[3];
    s32 unk_104;
    s32 unk_108;
    s32 unk_10C;
    u8 unk_110;
    u8 pad_111[3];
    s32 unk_114;
    s32 unk_118;
    s32 unk_11C;
    void *unk_120;
} S0;

extern u8 D_08A44AD8[];
extern u8 D_08A47EA0[];
extern u8 D_08A47EB0[];
extern u8 D_08A47ECC[];
extern u8 D_08A47ED8[];

void func_088682E8(u8 *);
void func_0896C904(M *);
void func_0896C9C0(S0 *, S0 *);

S0 *func_0896C6BC(S0 *arg0) {
    M *p;

    func_0896C9C0(arg0, arg0);
    arg0->unk_1C = D_08A47ED8;
    arg0->unk_20 = 0;
    func_088682E8(arg0->unk_24);
    p = &arg0->unk_50;
    func_0896C904(p);
    p->unk_A4 = D_08A47ECC;
    arg0->unk_1C = D_08A47EA0;
    arg0->unk_50.unk_A4 = D_08A47EB0;
    arg0->unk_100 = 0;
    arg0->unk_104 = -1;
    arg0->unk_120 = D_08A44AD8;
    arg0->unk_11C = 0;
    arg0->unk_108 = 0;
    arg0->unk_10C = 0;
    arg0->unk_110 = 0;
    arg0->unk_118 = 0;
    arg0->unk_114 = 0;
    return arg0;
}
