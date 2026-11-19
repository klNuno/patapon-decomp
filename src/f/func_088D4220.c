#include "common.h"

void func_0892CB1C(void *);
extern u8 D_08A46228[];

typedef struct {
    void *unk_00;
    u8 pad_04[0x8AC];
    u32 unk_8B0, unk_8B4, unk_8B8, unk_8BC;
    u8 pad_8C0[0x10];
    u8 unk_8D0;
    u32 unk_8D4, unk_8D8, unk_8DC, unk_8E0, unk_8E4, unk_8E8;
    u8 unk_8EC, unk_8ED;
} S;

void *func_088D4220(S *arg0) {
    func_0892CB1C(arg0);
    arg0->unk_00 = D_08A46228;
    arg0->unk_8D0 = 0;
    arg0->unk_8D4 = 0;
    arg0->unk_8D8 = 0;
    arg0->unk_8DC = 0;
    arg0->unk_8E0 = 0;
    arg0->unk_8E4 = 0;
    arg0->unk_8E8 = 0;
    arg0->unk_8EC = 1;
    arg0->unk_8ED = 0;
    arg0->unk_8B8 = 0;
    arg0->unk_8B4 = 0;
    arg0->unk_8B0 = 0;
    arg0->unk_8BC = 0x3F800000;
    return arg0;
}
