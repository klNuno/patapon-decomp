#include "common.h"

s32 func_088586E8(void);
u8 *func_089B53D8(s32);
void func_089234AC(void *, s32, f32, f32);

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    f32 unk_24;
} T;

void func_08909A60(T *arg0) {
    if (arg0->unk_20 != -1) {
        u8 *temp = func_089B53D8(func_088586E8());

        func_089234AC(temp + 0x2844, arg0->unk_20, 1.0f, arg0->unk_24);
    }
}
