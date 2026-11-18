#include "common.h"
extern "C" {

extern int sceKernelWaitSemaCB(s32, s32, s32);
extern int sceKernelSignalSema(s32, s32);
extern void func_089B5728(void *, void *, s32);
extern u8 D_089F8B74[];

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[0x134];
} Elem;

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3C[0xA0];
    Elem *unk_DC;
    u8 pad_E0[0xE98];
    u8 unk_F78[0x48BD0];
    s32 unk_49B48;
} Obj;

s32 func_08862904(s32 arg0, s32 arg1, Obj *arg2) {
    bool flag;
    s32 idx;

    if (arg1 < 0) {
        return 0;
    }
    flag = false;
    switch (arg1) {
    case 1:
        flag = true;
        break;
    case 2:
        flag = false;
        break;
    }
    sceKernelWaitSemaCB(arg2->unk_38, 1, 0);
    idx = arg2->unk_49B48;
    if (idx >= 0 && *(s32 *)((u8 *)arg2->unk_DC + idx * 0x168 + 0x30) == 2 && !flag) {
        func_089B5728(arg2->unk_F78, D_089F8B74, 1);
    }
    sceKernelSignalSema(arg2->unk_38, 1);
    return 0;
}
}
