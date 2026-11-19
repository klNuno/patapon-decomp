#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[0x18];
    u8 unk_4C[0x14];
    u8 pad_60[0x568];
    s32 unk_5C8;
} U;

typedef struct {
    u8 pad_00[0x1C];
    U unk_1C;
} T;

void func_0881F120(void *, void *, s32);
extern u8 D_08AD8788[];

void func_08914B28(T *arg0) {
    U *temp;

    arg0->unk_1C.unk_5C8 = 3;
    temp = &arg0->unk_1C;
    switch (arg0->unk_1C.unk_30) {
    case 4:
    case 5:
        if ((s8)D_08AD8788[0] != 0) {
            temp->unk_5C8 = 0;
            func_0881F120(temp->unk_4C, D_08AD8788, 0x14);
        }
        break;
    }
}
