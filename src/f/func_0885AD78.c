#include "common.h"

typedef struct {
    s32 unk_00;
    u8 unk_04;
    u8 unk_05;
    u8 pad_06[2];
    void *volatile unk_08;
    char unk_0C[0x80];
    s32 unk_8C;
    u8 unk_90;
    u8 unk_91;
    u8 unk_92;
    u8 pad_93[1];
    s32 unk_94;
    s32 unk_98;
    s32 unk_9C;
    s32 unk_A0;
} Obj;

void func_08822B3C(char *, char *);
extern u8 D_089F89D8[];
extern u8 D_08A449A0[];
extern u8 D_08A44970[];

Obj *func_0885AD78(Obj *arg0) {
    arg0->unk_08 = D_08A449A0;
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_05 = 0;
    arg0->unk_08 = D_08A44970;
    arg0->unk_94 = -1;
    arg0->unk_98 = -1;
    arg0->unk_8C = 0;
    arg0->unk_90 = 1;
    arg0->unk_91 = 1;
    arg0->unk_92 = 1;
    arg0->unk_A0 = 0;
    func_08822B3C(arg0->unk_0C, (char *)D_089F89D8);
    arg0->unk_9C = 0;
    return arg0;
}
