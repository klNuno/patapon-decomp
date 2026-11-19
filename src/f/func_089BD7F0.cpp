#include "common.h"

extern "C" {
void func_08956E50(s32, f32);
void func_088D72B4(void *);
void func_089C6548(void *, s32, s32, s32);

typedef struct {
    s32 unk_00;
    u8 pad_04[0x10];
    u8 unk_14[0xCB8 - 0x14];
    u8 unk_CB8[1];
} S;

void func_089BD7F0(S *arg0) {
    func_08956E50(arg0->unk_00, 0.0f);
    func_088D72B4(arg0->unk_14);
    func_089C6548(arg0->unk_CB8, 0, 0, 0);
}
}
