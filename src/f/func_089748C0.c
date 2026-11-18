#include "common.h"

typedef struct {
    u8 pad_00[0xE0];
    u8 unk_E0[0x2C];
    u8 unk_10C[0x1C];
    u8 unk_128[0x1C];
    u8 unk_144[0x2C];
    u8 unk_170[4];
    s32 unk_174;
    s32 unk_178;
    u8 pad_17C[0x10];
    u8 unk_18C;
} Struct_089748C0;

void func_08866058(void *, s32);
void func_089740D8(void *, s32);

void func_089748C0(Struct_089748C0 *arg0, s32 arg1) {
    if (arg0->unk_18C != 0) {
        func_089740D8(arg0->unk_170, arg1);
        if (arg0->unk_178 == arg0->unk_174) {
            func_089740D8(arg0->unk_E0, arg1);
            func_089740D8(arg0->unk_10C, arg1);
            func_089740D8(arg0->unk_128, arg1);
            func_089740D8(arg0->unk_144, arg1);
            func_08866058(arg0, arg1);
        }
    }
}
