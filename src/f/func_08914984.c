#include "common.h"

typedef struct Sub {
    u8 pad_00[0x4C];
    u8 unk_4C[0x14];
} Sub;

typedef struct S {
    u8 pad_00[0x8];
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    Sub unk_1C;
} S;

extern u8 D_08AD8788[];

s32 sceUtilitySavedataGetStatus(void);
s32 sceUtilitySavedataShutdownStart(void);
s32 sceUtilitySavedataUpdate(s32);
void func_0881F120(void *, void *, s32);
void func_0885A274(s32, s32);
S *func_0885A27C(s32);

void func_08914984(S *arg0, s32 arg1) {
    switch (sceUtilitySavedataGetStatus()) {
    case 1:
        break;
    case 2:
        sceUtilitySavedataUpdate(arg1);
        break;
    case 3:
        if (sceUtilitySavedataShutdownStart() == 0) {
            Sub *sub = &arg0->unk_1C;
            s32 m = *(s32 *)((u8 *)arg0 + 0x4C);
            switch (m) {
            case 4:
            case 5:
                func_0881F120(D_08AD8788, sub->unk_4C, 0x14);
                break;
            }
        }
        break;
    case 4:
        break;
    case 0:
        if (func_0885A27C(arg0->unk_08) == arg0) {
            func_0885A274(arg0->unk_08, 0);
        }
        arg0->unk_0C = 0;
        break;
    }
}
