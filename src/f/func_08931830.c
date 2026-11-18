#include "common.h"

typedef struct {
    u8 pad_00[0x5C];
    s32 unk_5C;
    u8 pad_60[0x13C - 0x60];
    s32 unk_13C;
} Sub_08931830;

typedef struct {
    u8 pad_00[0x8C];
    s32 unk_8C;
    u8 pad_90[0x4];
    s32 unk_94;
    u8 pad_98[0xC4 - 0x98];
    Sub_08931830 *unk_C4;
} Obj_08931830;

extern s32 D_089E7428[];
extern s32 D_089E742C[];

void func_08931830(Obj_08931830 *arg0) {
    s32 a;
    Sub_08931830 *s;
    s32 k;
    s32 v;

    a = D_089E7428[0];
    s = arg0->unk_C4;
    k = *(volatile s32 *)&s->unk_5C;
    if (k == *(volatile s32 *)D_089E7428 || k == D_089E742C[0]) {
        v = s->unk_13C;
        if (v >= 999) {
            arg0->unk_94 = 9;
            return;
        }
        if (k == a) {
            switch (arg0->unk_8C) {
            case 2:
            case 3:
            case 5:
                arg0->unk_94 = v % 100 / 10;
                break;
            case 0:
            case 1:
            case 4:
                arg0->unk_94 = v % 1000 / 100;
                break;
            }
        } else if (k == D_089E742C[0]) {
            switch (arg0->unk_8C) {
            case 0:
            case 1:
            case 2:
                arg0->unk_94 = v % 10;
                break;
            }
        }
    }
}
