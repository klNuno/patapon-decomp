#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    char unk_1C[0x3F];
    u8 unk_5B;
    s32 unk_5C;
    s32 unk_60;
} M_0885F840;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C;
    u8 pad_0D[0x3];
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    void *unk_1C;
    u8 pad_20[0x98];
    u8 unk_B8;
    u8 pad_B9[0x3];
    s32 unk_BC;
    s32 unk_C0;
    s32 unk_C4;
    u8 unk_C8;
    u8 pad_C9[0x3];
    void *unk_CC;
    s32 unk_D0;
    s32 unk_D4;
    s32 unk_D8;
    s32 unk_DC;
    s32 unk_E0;
    s32 unk_E4;
    s32 unk_E8;
    u8 pad_EC[0x14];
    void *unk_100;
    void *unk_104;
} O_0885F840;

extern char D_089DD018[];
extern char D_089DD01C[];
extern u8 D_08A44A3C[];
extern u8 D_08A44AB0[];
extern u8 D_08A44ABC[];
extern u8 D_08A44AC8[];
extern u8 D_08A44AD8[];

s32 func_08858BA8(void);
u32 func_08822BC4(char *);
void func_08822D5C(char *, char *, s32);
void func_0885FB2C(void *, s32);

O_0885F840 *func_0885F840(O_0885F840 *arg0) {
    M_0885F840 *m;
    s32 temp;

    arg0->unk_104 = D_08A44AB0;
    temp = func_08858BA8();
    arg0->unk_1C = D_08A44AD8;
    arg0->unk_18 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_14 = 0;
    arg0->unk_10 = temp;
    arg0->unk_1C = D_08A44AC8;
    m = (M_0885F840 *)&arg0->unk_04;
    func_08822BC4(D_089DD01C);
    func_08822D5C(m->unk_1C, D_089DD018, 0x3F);
    m->unk_5B = 0;
    m->unk_5C = 0;
    m->unk_60 = 0;
    arg0->unk_CC = D_08A44A3C;
    arg0->unk_C8 = 1;
    arg0->unk_BC = 0;
    arg0->unk_C4 = 0;
    arg0->unk_C0 = 0;
    arg0->unk_D0 = 0;
    arg0->unk_D4 = 0;
    arg0->unk_D8 = 0;
    arg0->unk_DC = 0;
    arg0->unk_E0 = 0;
    arg0->unk_B8 = 0;
    arg0->unk_100 = D_08A44ABC;
    arg0->unk_E4 = 0;
    arg0->unk_E8 = 0;
    func_0885FB2C(arg0, 0);
    return arg0;
}
