#include "common.h"

typedef struct {
    u8 pad_00[0x630];
    u8 unk_630[0xD];
    u8 unk_63D[0x14];
    u8 pad_651[0x3];
    void *unk_654;
    u8 unk_658[0xD];
    u8 unk_665[0x1C3];
    u8 unk_828;
} A_08914808;

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[0x8];
    u8 unk_3C[0x10];
    u8 unk_4C[0x14];
    void *unk_60;
    u8 unk_64[0xD];
} B_08914808;

void func_088B3034(u8 *, s32, u8 *);
extern u8 D_089E5530[];

void func_08914808(A_08914808 *arg0, s32 arg1, B_08914808 *arg2) {
    func_088B3034(arg2->unk_3C, 0xD, arg0->unk_630);
    func_088B3034(arg2->unk_4C, 0x14, arg0->unk_63D);
    switch (arg2->unk_30) {
    case 4:
        if (arg0->unk_828 != 0) {
            arg2->unk_60 = D_089E5530;
            arg0->unk_828 = 0;
        } else {
            arg2->unk_60 = arg0->unk_654;
        }
        break;
    case 5:
    case 6:
        arg2->unk_60 = arg0->unk_654;
        break;
    }
    if (arg1 != 0) {
        func_088B3034(arg2->unk_64, 0xD, arg0->unk_658);
    } else {
        func_088B3034(arg2->unk_64, 0xD, arg0->unk_665);
    }
}
