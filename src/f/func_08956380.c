#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    f32 unk_14;
} P_08956380;

typedef struct {
    u8 pad_00[0x1F30];
    s32 unk_1F30;
    u8 pad_1F34[0x431C - 0x1F34];
    u8 unk_431C[0x2217D - 0x431C];
    u8 unk_2217D;
} Obj_08956380;

P_08956380 *func_0888AA78(P_08956380 *, s32, s32, s32, s32, s32, f32);
void func_088A3A88(void *, P_08956380 *);
void func_088A3B14(void *, P_08956380 *);
void func_08957878(Obj_08956380 *);

void func_08956380(Obj_08956380 *arg0, u8 arg1, s32 arg2) {
    P_08956380 p;

    arg0->unk_2217D = arg1;
    if (arg0->unk_2217D != 0) {
        arg0->unk_1F30 = 0;
        return;
    }
    if (arg2 != 0) {
        func_08957878(arg0);
        func_0888AA78(&p, 0, 1, 0, 0, -1, 0.0f);
        func_088A3B14(arg0->unk_431C, &p);
        func_088A3A88(arg0->unk_431C, &p);
    }
    arg0->unk_1F30 = 2;
}
