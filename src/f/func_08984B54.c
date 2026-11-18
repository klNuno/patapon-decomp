#include "common.h"

typedef struct {
    u8 pad_00[0x8D0];
    u8 unk_8D0;
} S_089C2CA8_3B0;

typedef struct {
    u8 pad_00[0x164];
    u8 unk_164;
    u8 unk_165;
    u8 pad_166[6];
    S_089C2CA8_3B0 *unk_16C;
    u8 pad_170[0x40];
    s32 unk_1B0;
    u8 unk_1B4;
} S;

void func_088D45F4(S_089C2CA8_3B0 *);
void func_08984ED4(S *, void *, s32);
extern s32 func_08985828(s32, s32);
s32 func_08986C60(void *);
s32 func_08986C90(void *);
void func_0898ABB8(f32, s32, s32, u8);
void func_0898AD00(s32);

void func_08984B54(S *arg0, void *arg1, void *arg2) {
    if (arg0->unk_165 == 0 && func_08986C90(arg2) > 0) {
        func_0898AD00(func_08985828((s32)arg0, 0));
        func_0898AD00(func_08985828((s32)arg0, 1));
        func_08984ED4(arg0, arg2, 1);
        arg0->unk_165 = 1;
    }
    if (func_08986C60(arg2) != 0) {
        arg0->unk_164 = 0;
        func_0898ABB8(0.0f, func_08985828((s32)arg0, 1), 1, 1);
        if (arg0->unk_16C != NULL) {
            func_088D45F4(arg0->unk_16C);
            arg0->unk_16C->unk_8D0 = 0;
            arg0->unk_16C = NULL;
        }
        arg0->unk_1B4 = 0;
        arg0->unk_1B0 = 0;
    }
}
