#include "common.h"

s32 func_088586E8(void);
u8 *func_089B53D8(s32);
void func_0897C3F4(f32, void *, s32);

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[0x80];
    s32 unk_8C;
    u8 pad_90[0x738 - 0x90];
    u8 unk_738[0x4C00 - 0x738];
    s32 unk_4C00;
    u8 pad_4C04[2];
    u8 unk_4C06;
} T;

void func_0891974C(void *, s32, s32);
void func_08919CF0(void *, s32);
u8 func_0891A7A0(void *);
void func_0891BFFC(T *);
void func_08956E50(s32, f32);
void func_0895759C(f32, s32, f32, s32, s32, s32);

s32 func_0891BE94(T *arg0, s32 arg1, u8 arg2) {
    if (arg2 == 1) {
        func_0891974C(arg0->unk_738, arg0->unk_8C, arg0->unk_4C00);
        func_08956E50(arg0->unk_08, 0.5f);
        func_0895759C(1.0f, arg0->unk_08, 0.5f, 7, 0x21, 8);
    }
    func_08919CF0(arg0->unk_738, arg1);
    if (func_0891A7A0(arg0->unk_738) == 1) {
        func_0891BFFC(arg0);
        func_0897C3F4(0.2f, func_089B53D8(func_088586E8()) + 0x14, 7);
        arg0->unk_4C06 = 1;
        return 1;
    }
    return 0;
}
