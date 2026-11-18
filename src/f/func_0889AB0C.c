#include "common.h"
typedef struct {
    u8 pad_00[0x104];
    u32 unk_104;
    u8 pad_108[4];
    char *unk_10C;
    u8 pad_110[0x38];
    u8 unk_148[0x64];
    s32 unk_1AC;
    u8 unk_1B0;
    u8 pad_1B1[0x5BB];
    u8 unk_76C[0x158];
    u32 unk_8C4;
} S;
void func_08858F88(S *, u32, s32, void *, ...);
void func_08885980(void *, s32, s32, void *);
s32 func_0889C49C(void *);
extern char D_089FA604[];
extern char D_089FA628[];
extern char D_089FA64C[];
extern char D_089FA670[];
extern char D_089FA694[];
extern char D_089FA6B8[];
extern char D_089FA6DC[];
extern char D_089FA700[];
extern char D_089FA724[];
extern char D_089FA748[];
extern char D_089FA76C[];
extern char D_089FA798[];
extern char D_089FA7B0[];
extern char D_089FA7CC[];
extern char D_089FA7E8[];
extern char D_089FA7F4[];
extern char D_089FA7F8[];
extern char D_089FA7FC[];

void func_0889AB0C(S *arg0)
{
    switch (arg0->unk_8C4) {
    case 0:
        func_08858F88(arg0, 5, 2, D_089FA798);
        func_08885980(arg0->unk_76C, 5, 1, D_089FA7B0);
        break;
    case 1:
        func_08858F88(arg0, 5, 2, D_089FA7CC);
        func_08885980(arg0->unk_76C, 5, 1, D_089FA7B0);
        break;
    case 2: {
        char *p;
        char *q;
        s32 n;

        func_08858F88(arg0, 5, 3, D_089FA7E8,
            (arg0->unk_104 & 1) ? arg0->unk_10C : (char *)&arg0->unk_104 + 1);
        n = arg0->unk_1AC;
        if (arg0->unk_1B0 != 0) {
            p = D_089FA7F4;
        } else {
            p = D_089FA7F8;
        }
        if (func_0889C49C(arg0->unk_148) != 0) {
            q = D_089FA7F8;
        } else {
            q = D_089FA7F4;
        }
        func_08858F88(arg0, 5, 4, D_089FA7FC, q, p, (u8)(n >= 9));
        func_08858F88(arg0, 8, 0x12, D_089FA604);
        func_08858F88(arg0, 8, 0x13, D_089FA628);
        func_08858F88(arg0, 8, 0x14, D_089FA64C);
        func_08858F88(arg0, 8, 0x15, D_089FA670);
        func_08858F88(arg0, 8, 0x16, D_089FA694);
        func_08858F88(arg0, 8, 0x17, D_089FA6B8);
        func_08858F88(arg0, 8, 0x18, D_089FA6DC);
        func_08858F88(arg0, 8, 0x19, D_089FA700);
        func_08858F88(arg0, 8, 0x1A, D_089FA724);
        func_08858F88(arg0, 8, 0x1B, D_089FA748);
        func_08858F88(arg0, 8, 0x1C, D_089FA76C);
        break;
    }
    }
}
