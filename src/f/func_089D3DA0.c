#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    u8 *unk_08;
    u8 pad_0C[0x58 - 0xC];
    u8 *unk_58;
    u8 pad_5C[0x7C - 0x5C];
    u8 *unk_7C;
    u8 pad_80[0xCC - 0x80];
    u8 *unk_CC;
    u8 pad_D0[0x1B0 - 0xD0];
    u8 unk_1B0[0x1C];
    u8 *unk_1CC;
} Obj_089D3DA0;

void func_0880416C(void *);
void func_08895F6C(void *);
void func_0895FEC8(Obj_089D3DA0 *, s32);
void func_089D3F68(Obj_089D3DA0 *);
extern u8 D_08A45774[];
extern u8 D_08A48F3C[];
extern u8 D_08A48F58[];
extern u8 D_08A48F70[];
extern u8 D_08A48F80[];
extern u8 D_08A48FCC[];

Obj_089D3DA0 *func_089D3DA0(Obj_089D3DA0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A48F3C;
        arg0->unk_58 = D_08A48F58;
        arg0->unk_7C = D_08A48F70;
        arg0->unk_CC = D_08A48F80;
        arg0->unk_1CC = D_08A48FCC;
        func_089D3F68(arg0);
        if (arg0->unk_1B0 != NULL) {
            arg0->unk_1CC = D_08A45774;
            func_08895F6C(arg0->unk_1B0);
        }
        func_0895FEC8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
