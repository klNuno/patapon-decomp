#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2;

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    u8 pad_3C[0xF8 - 0x3C];
    f32 unk_F8;
    f32 unk_FC;
    u8 pad_100[0x10];
    u8 unk_110[0x1B60 - 0x110];
    u8 unk_1B60[0x20];
    u8 unk_1B80;
    u8 pad_1B81;
    u8 unk_1B82;
    u8 pad_1B83[0xD];
    f32 unk_1B90;
    f32 unk_1B94;
    f32 unk_1B98;
} T;

extern s32 func_08864C64(T *, s32);
void func_0885A958(void *);
void func_08925618(void *, s32);
V2 *func_08925A90(void *);

void func_0887EFB0(T *arg0, s32 arg1) {
    V2 *v;

    func_08864C64(arg0, arg1);
    if (arg0->unk_1B80 != 0) {
        arg0->unk_1B80 = 0;
    }
    if (arg0->unk_1B82 == 0) {
        arg0->unk_1B90 = arg0->unk_30;
        arg0->unk_1B94 = arg0->unk_34;
        arg0->unk_1B98 = arg0->unk_38;
    }
    func_0885A958(arg0->unk_1B60);
    func_08925618(arg0->unk_110, arg1);
    v = func_08925A90(arg0->unk_110);
    arg0->unk_F8 = v->unk_00;
    arg0->unk_FC = v->unk_04;
}
