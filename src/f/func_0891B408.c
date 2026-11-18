#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x80];
    void *unk_8C;
    u8 pad_90[0x4B70];
    s32 unk_4C00;
    u8 pad_4C04[0x1];
    u8 unk_4C05;
    u8 pad_4C06[0x2];
    s32 unk_4C08;
} S_0891B408;

typedef struct {
    u8 pad_00[0x25688];
    s32 unk_25688;
} T_0891B408;

s32 func_088586E8(void);
u8 *func_089B53D8(s32);
void func_0897C3F4(f32, void *, s32);
void func_08957744(f32, s32, s32, s32, s32);

void func_0891B408(S_0891B408 *arg0, s32 arg1, T_0891B408 *arg2) {
    arg0->unk_4C08 = arg1;
    arg0->unk_8C = arg2;
    arg0->unk_4C00 = arg2->unk_25688;
    arg0->unk_4C05 = 1;
    switch (arg0->unk_4C08) {
    case 2:
        func_0897C3F4(0.5f, func_089B53D8(func_088586E8()) + 0x14, 1);
        func_08957744(0.0f, arg0->unk_08, 7, 0x20, 8);
        break;
    case 1:
        func_0897C3F4(0.5f, func_089B53D8(func_088586E8()) + 0x14, 1);
        func_08957744(0.0f, arg0->unk_08, 7, 0x1F, 8);
        break;
    case 3:
        break;
    }
}
