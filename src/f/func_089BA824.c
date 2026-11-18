#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    s32 *unk_20;
    u8 pad_24[4];
} E_089BA824;

typedef struct {
    u8 pad_00[0x2458];
    E_089BA824 *unk_2458;
} G_089BA824;

typedef struct {
    u8 pad_00[0x1064];
    s32 unk_1064;
    u8 pad_1068[2];
    u8 unk_106A;
    u8 pad_106B;
    s32 unk_106C;
    u8 pad_1070[0x2610 - 0x1070];
    s32 unk_2610;
    u8 pad_2614[0x2A18 - 0x2614];
    s32 *unk_2A18;
} Obj_089BA824;

extern G_089BA824 *D_08AD1F14[];
s32 func_08998080(s32, s32);
void func_08999BC0(s32, s32);
void func_089BA8C8(Obj_089BA824 *, s32);
void func_08998E78(s32);

void func_089BA824(Obj_089BA824 *arg0) {
    G_089BA824 *p;

    p = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
    func_08999BC0(func_08998080(arg0->unk_1064, arg0->unk_106C), **(s32 **)((u8 *)p->unk_2458 + arg0->unk_2A18[arg0->unk_2610] * 0x28 + 0x20) + 0x50);
    func_089BA8C8(arg0, 1);
    func_08998E78(arg0->unk_1064);
    arg0->unk_106A = 1;
}
