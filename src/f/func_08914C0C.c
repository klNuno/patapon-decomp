#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
} Obj;

extern s32 D_08A00534[];
s32 sceImposeGetLanguageMode(s32 *, s32 *);

void func_08914C0C(s32 arg0, Obj *arg1)
{
    s32 a;
    s32 b;
    s32 temp;

    arg1->unk_00 = arg0;
    a = 0;
    b = 0;
    sceImposeGetLanguageMode(&a, &b);
    arg1->unk_04 = a;
    arg1->unk_08 = b;
    temp = D_08A00534[0];
    if (temp >= 0) {
        arg1->unk_04 = temp;
    }
    arg1->unk_0C = 0x11;
    arg1->unk_10 = 0x13;
    arg1->unk_14 = 0x12;
    arg1->unk_18 = 0x10;
}
