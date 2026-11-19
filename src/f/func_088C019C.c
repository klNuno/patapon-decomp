#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x8C];
    s32 unk_90;
    s32 unk_94;
    u8 pad_98[0x10];
    u8 unk_A8;
} T;

extern void func_088BFAA4(s32);
void *func_088C5614(s32);

void func_088C019C(T *arg0) {
    func_088BFAA4((s32)&arg0->unk_A8);
    ((void (*)(s32))func_088C5614(arg0->unk_00))(arg0->unk_90);
    arg0->unk_90 = 0;
    arg0->unk_94 = 0;
}
