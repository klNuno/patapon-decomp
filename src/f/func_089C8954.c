#include "common.h"

typedef struct {
    u8 pad_00[0x168];
    u8 unk_168[0xB20];
    s32 unk_C88;
    u8 pad_C8C[8];
    u8 unk_C94;
    u8 pad_C95[0xB];
    s32 unk_CA0;
} T;

extern s32 func_08985828(s32, s32);
void func_0898ABB8(s32, s32, s32, f32);
void func_089CDCD4(void *);
s32 func_089CDE3C(void *);

void func_089C8954(T *arg0, u32 arg1) {
    switch (arg1) {
    case 4:
        if (arg0->unk_C88 == 0) {
            func_0898ABB8(func_08985828((s32)arg0, 3), 0xB, 0, 0.0f);
            func_0898ABB8(func_08985828((s32)arg0, 3), 3, 0, 2.4f);
            func_0898ABB8(func_08985828((s32)arg0, 3), 4, 1, 3.06f);
        } else if (arg0->unk_C88 == 8) {
            func_0898ABB8(func_08985828((s32)arg0, 3), 9, 0, 0.0f);
            func_0898ABB8(func_08985828((s32)arg0, 3), 3, 0, 2.4f);
            func_0898ABB8(func_08985828((s32)arg0, 3), 4, 1, 3.06f);
        }
        break;
    case 5:
        if (arg0->unk_C88 == 0) {
            arg0->unk_CA0 = 0;
        }
        break;
    case 6:
        if (arg0->unk_C88 == 0) {
            arg0->unk_CA0 = 1;
        }
        break;
    case 7:
    case 9:
        if (arg0->unk_C88 == 0) {
            arg0->unk_CA0 = 0;
        } else if (arg0->unk_C88 == 5) {
            arg0->unk_CA0 = 1;
            func_089CDCD4(arg0->unk_168);
        }
        break;
    case 8:
    case 10:
        if (arg0->unk_C88 == 0) {
            arg0->unk_CA0 = 1;
        } else if (arg0->unk_C88 == 5) {
            arg0->unk_CA0 = 0;
            func_089CDCD4(arg0->unk_168);
        }
        break;
    case 11:
        if (arg0->unk_C88 == 0) {
            arg0->unk_CA0 = 0;
        } else if (arg0->unk_C88 == 4 && func_089CDE3C(arg0->unk_168) != 0) {
            func_0898ABB8(func_08985828((s32)arg0, 3), 0xE, 0, 0.0f);
            func_0898ABB8(func_08985828((s32)arg0, 3), 1, 1, 1.625f);
            arg0->unk_C94 = 1;
        }
        break;
    case 0:
    case 1:
    case 2:
    case 3:
    default:
        break;
    }
}
