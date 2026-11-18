#include "common.h"

typedef struct {
    u8 pad_00[0x70];
    s32 unk_70;
} S088C346C;

typedef struct N088C346C {
    struct N088C346C *unk_00;
    struct N088C346C *unk_04;
    u8 pad_08[6];
    u16 unk_0E;
    u8 pad_10[8];
    S088C346C *unk_18;
} N088C346C;

typedef struct {
    u8 pad_00[0x14];
    N088C346C *unk_14;
    u8 pad_18[8];
    s32 unk_20;
    u8 pad_24[8];
    N088C346C *unk_2C;
} T088C346C;

void func_088C346C(T088C346C *arg0, N088C346C *arg1) {
    if (arg1 != NULL) {
        if (arg1->unk_00 != NULL) {
            arg1->unk_00->unk_04 = arg1->unk_04;
        } else {
            arg0->unk_14 = arg1->unk_04;
            if (arg1->unk_04 != NULL) {
                arg1->unk_04->unk_00 = NULL;
            }
        }
        if (arg1->unk_04 != NULL) {
            arg1->unk_04->unk_00 = arg1->unk_00;
        } else if (arg1->unk_00 != NULL) {
            arg1->unk_00->unk_04 = NULL;
        }
        if (arg1->unk_18 != NULL) {
            arg1->unk_18->unk_70--;
        }
        arg1->unk_0E |= 0xC000;
        arg1->unk_04 = NULL;
        arg1->unk_00 = NULL;
        if (arg0->unk_2C != NULL) {
            arg1->unk_04 = arg0->unk_2C;
            arg0->unk_2C->unk_00 = arg1;
        } else {
            arg1->unk_04 = NULL;
        }
        arg0->unk_2C = arg1;
        arg0->unk_20--;
    }
}
