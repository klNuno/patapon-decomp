#include "common.h"

typedef struct T0 {
    u8 pad_00[0x1058];
    void *unk_1058;
    u8 pad_105C[0x14];
    u8 unk_1070[0x7800 - 0x1070];
    u8 unk_7800[0xAA90 - 0x7800];
    u8 unk_AA90[0x46180 - 0xAA90];
    u8 unk_46180[0x462F0 - 0x46180];
    u8 unk_462F0[0x47348 - 0x462F0];
    u8 unk_47348[4];
} T0;

extern u8 D_08A485CC[];
extern u8 D_08A485BC[];

void func_08925D14(void *, s32);
void func_089957E0(void *, s32);
void func_089A33E4(void *, s32);
void func_089B9274(void *, s32);
void func_089B7060(void *, s32);
void func_0880416C(void *);

T0 *func_08994F18(T0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_1058 = D_08A485CC;
        func_08925D14(arg0->unk_47348, -1);
        func_08925D14(arg0->unk_462F0, -1);
        func_089957E0(arg0->unk_46180, -1);
        func_089A33E4(arg0->unk_AA90, -1);
        func_089B9274(arg0->unk_7800, -1);
        func_089B7060(arg0->unk_1070, -1);
        if (arg0 != NULL) {
            arg0->unk_1058 = D_08A485BC;
            func_08925D14(arg0, -1);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
