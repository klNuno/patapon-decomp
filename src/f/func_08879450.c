#include "common.h"

void func_088A449C(void *, s32);
void func_088D6E14(void *, s32);
extern s32 D_08AD99C4[];

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    u8 unk_18[0x544 - 0x18];
    u8 unk_544[0x82C - 0x544];
    u8 unk_82C;
} S;

void func_08879450(S *arg0, s32 arg1, s32 arg2) {
    arg0->unk_0C = arg2;
    arg0->unk_08 = arg1;
    func_088A449C(arg0->unk_18, arg0->unk_14);
    func_088D6E14(arg0->unk_544, arg0->unk_14);
    D_08AD99C4[0] = 0;
    arg0->unk_82C = 0;
}
