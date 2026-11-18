#include "common.h"

typedef struct {
    u8 pad_00[0x8D0];
    u8 unk_8D0;
} S_089C2CA8_3B0;

typedef struct {
    u8 pad_00[0x2E3C0];
    u8 unk_2E3C0[1];
} S_089C2CA8_00;

typedef struct {
    S_089C2CA8_00 *unk_00;
    u8 pad_04[0x15C];
    s32 unk_160;
    u8 pad_164[0x24C];
    S_089C2CA8_3B0 *unk_3B0;
    u8 pad_3B4[0x68];
    u8 unk_41C;
} S_089C2CA8;

void func_0898584C(void);
void func_088D45F4(S_089C2CA8_3B0 *);
void func_08956380(void *, s32, s32);
s32 func_088586E8(void);
u8 *func_089B53D8(s32);
void func_0897C3F4(f32, void *, s32);

void func_089C2CA8(S_089C2CA8 *arg0) {
    func_0898584C();
    if (arg0->unk_3B0 != NULL) {
        func_088D45F4(arg0->unk_3B0);
        arg0->unk_3B0->unk_8D0 = 0;
        arg0->unk_3B0 = NULL;
    }
    func_08956380(arg0->unk_00->unk_2E3C0, 0, 1);
    func_0897C3F4(1.0f, func_089B53D8(func_088586E8()) + 0x14, 0);
    arg0->unk_160 = 4;
    arg0->unk_41C = 0;
}
