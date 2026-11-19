#include "common.h"

extern s32 func_08985828(s32, s32);

typedef struct {
    u8 pad_00[0x54];
    f32 unk_54;
    u8 pad_58[4];
    f32 unk_5C;
} U;

typedef struct {
    u8 pad_00[0xB94];
    s32 unk_B94;
} T;

void func_089C18DC(T *arg0) {
    U *temp = (U *)func_08985828((s32)arg0, 0);
    if (temp->unk_5C <= temp->unk_54) {
        arg0->unk_B94 = 3;
    }
}
