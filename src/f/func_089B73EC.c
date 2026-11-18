#include "common.h"
typedef struct {
    u8 pad_00[0x25C];
    s32 unk_25C;
} S;
typedef struct {
    u8 pad_00[0x14A0];
    S *unk_14A0;
} G;
typedef struct {
    u8 pad_00[0x1064];
    s32 unk_1064;
    u8 unk_1068;
    u8 pad_1069[0x2E60 - 0x1069];
    s32 unk_2E60;
    u8 pad_2E64[0x678C - 0x2E64];
    s32 unk_678C;
} T;
extern G *D_08AD1F14[];
extern s32 func_08947CA0(s32);
extern s32 func_08998D18(s32);
extern void func_089B88C8(T *, s32);
void func_089B73EC(T *arg0, s32 arg1) {
    G *p;
    S *s;
    if (arg1 != 0) {
        p = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
        s = p->unk_14A0;
        arg0->unk_1068 = 1;
        if (func_08947CA0(func_08998D18(arg0->unk_1064)) != 0 && s->unk_25C == -1 && arg0->unk_678C != 0) {
            arg0->unk_2E60 = 1;
        } else {
            arg0->unk_2E60 = 0;
        }
        func_089B88C8(arg0, arg0->unk_2E60);
    } else {
        arg0->unk_1068 = 0;
    }
}
