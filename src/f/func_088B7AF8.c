#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V;

extern V D_089DFF04[];
extern f32 D_08AD6958[];
extern f32 D_08AD695C[];
extern s32 D_08AD6960[];
extern s32 D_08AD6964[];
extern s32 D_08AD6968[];
extern s32 D_08AD696C[];
extern V D_08AD697C[];

void func_088B7AF8(void) {
    s32 i;

    D_08AD6960[0] = 0;
    D_08AD696C[0] = 0;
    D_08AD6968[0] = 0;
    D_08AD6964[0] = 0;
    D_08AD6958[0] = 240.0f;
    D_08AD695C[0] = 136.0f;
    for (i = 0; i < 16; i++) {
        D_08AD697C[i].unk_00 = 25.0f * D_089DFF04[i].unk_00;
        D_08AD697C[i].unk_04 = 25.0f * D_089DFF04[i].unk_04;
        D_08AD697C[i].unk_08 = 25.0f * D_089DFF04[i].unk_08;
    }
}
