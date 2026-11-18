#include "common.h"

typedef struct {
    u8 pad_00[0x1070];
    u8 unk_1070[0x90];
    u8 unk_1100[0x90];
    u8 unk_1190[0x90];
    u8 unk_1220[0x90];
    u8 unk_12B0[0x90];
    u8 unk_1340[0x418];
    u8 unk_1758[0xF18];
    u8 unk_2670[0x4];
} S_089B7294;

extern void *D_08AD1E28[];
extern char D_08A08C20[];
extern char D_08A08C30[];
extern char D_08A08C40[];
extern char D_08A08C50[];
extern char D_08A08C60[];
extern char D_08A08C70[];
void func_0899D584(void *, void *, s32);
void func_08865FE4(void *, s32);
s32 func_08868CAC(void *, s32, char *, s32);

void func_089B7294(S_089B7294 *arg0) {
    void *temp;

    func_0899D584(arg0->unk_2670, arg0->unk_1758, 0);
    temp = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    func_08865FE4(arg0->unk_1070, func_08868CAC(temp, 0xA, D_08A08C20, 1));
    func_08865FE4(arg0->unk_1100, func_08868CAC(temp, 0xA, D_08A08C30, 1));
    func_08865FE4(arg0->unk_1190, func_08868CAC(temp, 0xA, D_08A08C40, 1));
    func_08865FE4(arg0->unk_1220, func_08868CAC(temp, 0xA, D_08A08C50, 1));
    func_08865FE4(arg0->unk_12B0, func_08868CAC(temp, 0xA, D_08A08C60, 1));
    func_08865FE4(arg0->unk_1340, func_08868CAC(temp, 0xA, D_08A08C70, 1));
}
