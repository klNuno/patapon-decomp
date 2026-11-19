#include "common.h"

s32 func_08814C0C(s32);
void func_08815C6C(s32);
extern void (*D_089F9B40[])(void *, s32);

typedef struct {
    u8 pad_00[0x34];
    s32 unk_34;
    s32 unk_38;
    u8 pad_3C[0x44];
    u8 unk_80[1];
} T;

void func_088832B4(T *arg0) {
    void (*temp)(void *, s32) = D_089F9B40[arg0->unk_34];
    if (temp != NULL) {
        func_08814C0C(9);
        func_08814C0C(1);
        func_08815C6C(1);
        temp(arg0->unk_80, arg0->unk_38 != 0);
    }
}
