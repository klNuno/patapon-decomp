#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V3;

typedef struct {
    u8 pad_00[0x42820];
    u8 *unk_42820;
} G;

typedef struct S {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    struct S *unk_0C;
    V3 unk_10;
    u8 unk_1C[0x10A3C];
    u8 unk_10A58[0x11A30];
    s32 unk_22488;
    s32 unk_2248C;
} S;

extern f32 D_08A0A298[];
extern f32 D_08A0A2A0[];
extern u8 D_08A46884[];
extern u8 D_08A49048[];
extern G *D_08AD1E28[];

void func_089D05EC(void *);
void func_089CE194(void *, s32, s32, u8 *);

S *func_089D6534(S *arg0, s32 arg1, s32 arg2, s32 arg3) {
    V3 t;

    arg0->unk_00 = arg3;
    arg0->unk_04 = 0;
    t.unk_00 = D_08A0A298[0];
    t.unk_04 = D_08A0A298[1];
    t.unk_08 = D_08A0A2A0[0];
    arg0->unk_08 = D_08A46884;
    arg0->unk_08 = D_08A49048;
    arg0->unk_0C = arg0;
    arg0->unk_10 = t;
    func_089D05EC(arg0->unk_1C);
    func_089CE194(arg0->unk_10A58, arg1, arg2, (D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820 + 0x24A1);
    arg0->unk_22488 = 0;
    arg0->unk_2248C = arg2;
    return arg0;
}
