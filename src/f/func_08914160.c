#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[4];
    s32 unk_38;
    u8 pad_3C[0x5DC - 0x3C];
    u8 unk_5DC[4];
} Sub08914160;

typedef struct {
    u8 pad_00[0x1C];
    Sub08914160 unk_1C;
} T08914160;

void func_089142C0(T08914160 *, void *);
void func_08914328(T08914160 *, s32);
void func_08914384(T08914160 *, s32);
void func_08914408(T08914160 *, s32);
void func_08914470(T08914160 *, s32);
void func_08914554(T08914160 *);
void func_0891464C(T08914160 *, s32);
void func_08914654(T08914160 *, s32);

s32 func_08914160(T08914160 *arg0, s32 arg1) {
    Sub08914160 *t;

    t = &arg0->unk_1C;
    t->unk_30 = arg1;
    t->unk_38 = 1;
    func_089142C0(arg0, t->unk_5DC);
    switch (arg1) {
    case 0:
    case 2:
        func_08914328(arg0, 1);
        break;
    case 1:
    case 3:
        func_08914408(arg0, 1);
        break;
    case 4:
        func_08914384(arg0, 1);
        break;
    case 5:
        func_08914470(arg0, 1);
        break;
    case 12:
        func_08914554(arg0);
        break;
    case 14:
        func_08914470(arg0, 1);
        break;
    case 20:
        func_0891464C(arg0, 0);
        break;
    case 7:
        break;
    case 8:
        func_08914654(arg0, 1);
        break;
    default:
        return 0;
    }
    return 1;
}
