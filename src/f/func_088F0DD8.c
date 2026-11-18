#include "common.h"

typedef struct {
    u8 pad_00[0x920];
    s32 unk_920;
    u8 pad_924[0xC];
    f32 unk_930;
    f32 unk_934;
    f32 unk_938;
    f32 unk_93C;
    f32 unk_940;
    f32 unk_944;
    f32 unk_948;
    f32 unk_94C;
    u8 pad_950[0x18];
    u8 unk_968;
    u8 unk_969;
    u8 unk_96A;
    u8 pad_96B[0x81];
    s32 unk_9EC;
    u8 pad_9F0[8];
    u8 unk_9F8;
    u8 pad_9F9[2];
    u8 unk_9FB;
} Unk;

void func_088F1C0C(Unk *);
void func_088F0EA4(Unk *, void *, void *);
extern u8 D_089E2C08[];
extern u8 D_089E2C10[];
extern f32 D_089FDBF0[];
extern f32 D_089FDBF4[];
extern f32 D_089FDBF8[];
extern f32 D_089FDBFC[];
extern f32 D_089FDC00[];
extern f32 D_089FDC08[];
extern f32 D_089FDC0C[];

void func_088F0DD8(Unk *arg0)
{
    func_088F1C0C(arg0);
    arg0->unk_930 = D_089FDBF0[0];
    arg0->unk_934 = D_089FDBF4[0];
    arg0->unk_938 = D_089FDBF8[0];
    arg0->unk_93C = D_089FDBFC[0];
    arg0->unk_940 = D_089FDC00[0];
    arg0->unk_944 = D_089FDC00[1];
    arg0->unk_948 = D_089FDC08[0];
    arg0->unk_94C = D_089FDC0C[0];
    func_088F0EA4(arg0, D_089E2C10, D_089E2C08);
    arg0->unk_969 = 0;
    arg0->unk_968 = 1;
    arg0->unk_96A = 0;
    arg0->unk_9EC = 0;
    arg0->unk_920 = -1;
    arg0->unk_9F8 = 0;
    arg0->unk_9FB = 1;
}
