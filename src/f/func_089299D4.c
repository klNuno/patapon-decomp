#include "common.h"

typedef struct L_089299D4 {
    struct L_089299D4 *unk_00;
    struct L_089299D4 *unk_04;
    u8 pad_08[0x1C];
    void *unk_24;
} L_089299D4;

typedef struct {
    u8 pad_00[0x60];
} E_089299D4;

typedef struct {
    s32 unk_00;
    u8 unk_04[0x1004];
    u32 unk_1008;
    s32 unk_100C;
    s32 unk_1010;
    s32 unk_1014;
    u8 unk_1018[0x304];
    u32 unk_131C;
    s32 unk_1320;
    L_089299D4 unk_1324;
    L_089299D4 unk_134C;
    u8 pad_1374[0xC];
    u8 unk_1380[0x2A0];
    u8 unk_1620[0x14];
    E_089299D4 **unk_1634;
    u32 unk_1638;
    s32 unk_163C;
    u8 unk_1640[8];
    s32 unk_1648;
    u8 pad_164C[4];
    s32 unk_1650;
    s32 unk_1654;
    s32 unk_1658;
    u8 pad_165C[4];
    u8 unk_1660[0xA0];
    s32 unk_1700;
    s32 unk_1704;
    s32 unk_1708;
    f32 unk_170C;
    f32 unk_1710;
    f32 unk_1714;
    u8 unk_1718[0x40];
} S_089299D4;

void func_0881F5C0(void *, s32, s32);
void func_0888065C(L_089299D4 *);
void func_08880754(L_089299D4 *);
void func_08882E70(void *);
void func_089315A4(void *, s32);
void func_089457D8(void *);
extern u8 D_08A45350[];

S_089299D4 *func_089299D4(S_089299D4 *arg0, s32 arg1, s32 arg2, E_089299D4 *arg3, u32 arg4, s32 arg5, s32 arg6) {
    L_089299D4 *l;
    E_089299D4 **p;
    u32 i;

    arg0->unk_00 = arg1;
    arg0->unk_1008 = ((u32)arg0->unk_04 & 3) + (u32)arg0 + 4;
    arg0->unk_100C = 0;
    arg0->unk_1010 = 0;
    arg0->unk_1014 = 0;
    arg0->unk_131C = ((u32)arg0->unk_1018 & 3) + (u32)arg0 + 0x1018;
    arg0->unk_1320 = 0;
    l = &arg0->unk_1324;
    arg0->unk_1324.unk_24 = D_08A45350;
    func_08880754(l);
    l->unk_04 = l;
    l->unk_00 = l;
    func_0888065C(l);
    l = &arg0->unk_134C;
    arg0->unk_134C.unk_24 = D_08A45350;
    func_08880754(l);
    l->unk_04 = l;
    l->unk_00 = l;
    func_0888065C(l);
    func_089315A4(arg0->unk_1380, arg2);
    arg0->unk_1634 = (E_089299D4 **)(((u32)arg0->unk_1620 & 3) + (u32)arg0 + 0x1620);
    arg0->unk_1638 = 0;
    arg0->unk_163C = arg5;
    func_089457D8(arg0->unk_1640);
    arg0->unk_1648 = arg6;
    arg0->unk_1650 = 0;
    arg0->unk_1654 = 0;
    arg0->unk_1658 = 0;
    func_08882E70(arg0->unk_1660);
    arg0->unk_1700 = 0;
    arg0->unk_1704 = 0;
    arg0->unk_1708 = 0;
    arg0->unk_170C = 5.0f;
    arg0->unk_1710 = 5.0f;
    arg0->unk_1714 = 5.0f;
    for (i = 0; i < arg4; i++, arg3++) {
        p = &arg0->unk_1634[arg0->unk_1638];
        if (p != NULL) {
            *p = arg3;
        }
        arg0->unk_1638++;
    }
    func_0881F5C0(arg0->unk_1718, 0, 0x40);
    return arg0;
}
