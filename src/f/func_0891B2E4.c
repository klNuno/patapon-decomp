#include "common.h"

typedef struct {
    s32 unk_00;
    u8 unk_04[4];
} Sub_0891B2E4;

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C[0x90 - 0xC];
    Sub_0891B2E4 unk_90;
    u8 pad_98[0x2C8 - 0x98];
    Sub_0891B2E4 unk_2C8;
    u8 pad_2D0[0x500 - 0x2D0];
    Sub_0891B2E4 unk_500;
    u8 pad_508[0x738 - 0x508];
    u8 unk_738[0x2E70 - 0x738];
    u8 unk_2E70[0x3160 - 0x2E70];
    u8 unk_3160[0x3430 - 0x3160];
    u8 unk_3430[0x37C0 - 0x3430];
    u8 unk_37C0[0x3810 - 0x37C0];
    u8 unk_3810[4];
} Obj_0891B2E4;

void func_0891C288(void *, s32);
void func_089136C0(void *, s32);
void func_0891F5C8(void *, s32);
void func_0891D768(void *, s32);
void func_0891CBD0(void *, s32);
void func_089195FC(void *, s32);
void func_0891AEC0(void *, s32);
void func_08920BF8(void *, s32);
void func_0880416C(void *);

Obj_0891B2E4 *func_0891B2E4(Obj_0891B2E4 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_0891C288(arg0->unk_3810, -1);
        func_089136C0(arg0->unk_37C0, -1);
        func_0891F5C8(arg0->unk_3430, -1);
        func_0891D768(arg0->unk_3160, -1);
        func_0891CBD0(arg0->unk_2E70, -1);
        func_089195FC(arg0->unk_738, -1);
        if (&arg0->unk_500 != NULL) {
            func_0891AEC0(arg0->unk_500.unk_04, -1);
        }
        if (&arg0->unk_2C8 != NULL) {
            func_0891AEC0(arg0->unk_2C8.unk_04, -1);
        }
        if (&arg0->unk_90 != NULL) {
            func_0891AEC0(arg0->unk_90.unk_04, -1);
        }
        func_08920BF8(arg0->unk_0C, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
