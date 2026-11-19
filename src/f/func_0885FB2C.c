#include "common.h"

typedef struct {
    s32 unk_00;
    u8 unk_04;
    u8 pad_05[0xB];
    s32 unk_10;
    u8 pad_14[0x4];
    s32 unk_18;
    u8 pad_1C[0x4C];
    s32 unk_68;
    char unk_6C;
    u8 pad_6D[0x3F];
    s32 unk_AC;
    s32 unk_B0;
} T;

void func_08822B3C(char *, char *);
extern s32 func_0885DE4C(s32);
s32 func_08858BA8(void);
s32 func_08858B9C(void);
extern char D_089F8A74[];

void func_0885FB2C(T *arg0, s32 arg1) {
    arg0->unk_00 = 0;
    if (arg1 == 0) {
        arg0->unk_10 = func_08858BA8();
        arg0->unk_18 = func_08858B9C();
    } else {
        arg0->unk_18 = func_08858BA8();
        arg0->unk_10 = func_08858B9C();
    }
    arg0->unk_68 = -1;
    arg0->unk_AC = 0;
    func_08822B3C(&arg0->unk_6C, D_089F8A74);
    func_0885DE4C((s32)&arg0->unk_04);
    arg0->unk_B0 = 0;
}
