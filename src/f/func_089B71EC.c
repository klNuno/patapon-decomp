#include "common.h"

typedef struct {
    u8 pad_00[0x1A0F0];
    u16 unk_1A0F0;
} S2;

typedef struct {
    u8 pad_00[0x1498];
    S2 *unk_1498;
} S1;

typedef struct {
    u8 pad_00[0x1064];
    s32 unk_1064;
    u8 pad_1068[0x3F8];
    u8 unk_1460[0x2F8];
    u8 unk_1758[0x1714];
    s32 unk_2E6C;
    u8 pad_2E70[0x3108];
    u8 unk_5F78[0x40C];
    u8 unk_6384[4];
} S0;

typedef struct {
    u8 unk_00[0x100];
} Buf;

extern u8 *D_08AD1F14[];
extern s32 D_08A08AB4[];
extern s32 D_08A08B54[];
extern char D_08A08C18[];

void func_088226BC(char *, char *, ...);
s32 func_089985FC(s32);
void func_0899ECC4(u8 *, s32);
void func_089A0AB8(u8 *, char *);
void func_089B84A4(S0 *, u8 *);
void func_089B8604(S0 *, u8 *);

void func_089B71EC(S0 *arg0) {
    Buf buf;
    S1 *p;

    func_0899ECC4(arg0->unk_1460, func_089985FC(arg0->unk_1064));
    func_088226BC((char *)buf.unk_00, D_08A08C18, D_08A08AB4[0], D_08A08B54[0]);
    func_089A0AB8(arg0->unk_1758, (char *)buf.unk_00);
    p = D_08AD1F14[0] != NULL ? (S1 *)D_08AD1F14[0] : NULL;
    arg0->unk_2E6C = p->unk_1498->unk_1A0F0 == 0 ? 0 : 2;
    func_089B8604(arg0, arg0->unk_5F78);
    func_089B84A4(arg0, arg0->unk_6384);
}
