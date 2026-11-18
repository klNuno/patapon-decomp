#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    s32 *unk_30;
    u8 pad_34[0x1C];
    u8 unk_50[0x80];
    u8 unk_D0[0x100];
    u8 unk_1D0[0x28];
    u8 unk_1F8[0x5C];
    s32 *unk_254;
} S_08927800;

void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0880416C(void *);
void func_0885BDA0(void *, s32);
void func_089272D8(void *, s32);
void func_08927480(void *);
void func_089278C8(S_08927800 *);
void func_08924CC0(void *, s32);
void func_08927754(void *, s32);
extern s32 D_08A46EC8[];
extern s32 D_08A46EF0[];

S_08927800 *func_08927800(S_08927800 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_254 = D_08A46EC8;
        func_089278C8(arg0);
        if (&arg0->unk_30 != NULL) {
            arg0->unk_30 = D_08A46EF0;
            func_08927480(&arg0->unk_30);
            func_089272D8(arg0->unk_1F8, -1);
            func_089272D8(arg0->unk_1D0, -1);
            func_08804000(arg0->unk_D0, func_08927754, 0x20, 8);
            func_08804000(arg0->unk_50, func_08924CC0, 0x10, 8);
            func_0885BDA0(&arg0->unk_30, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
