#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    u8 pad_08[8];
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    f32 unk_24;
    u8 pad_28[8];
    f32 unk_30;
    f32 unk_34;
} T;

void func_08866B54(void *, s32, s32);
s32 func_08866B80(void *, s32);

void func_0893328C(T *arg0, T *arg1) {
    f32 a;
    f32 b;
    f32 c = 0.0f;
    f32 t0, t1;

    arg0->unk_00 = arg1->unk_30;
    arg0->unk_04 = arg1->unk_34;
    arg0->unk_10 = arg1->unk_10;
    arg0->unk_14 = arg1->unk_14;
    a = arg0->unk_20;
    b = arg0->unk_24;
    t0 = (arg1->unk_30 * c + (arg1->unk_20 * c + (arg1->unk_00 * a + arg1->unk_10 * b)));
    t1 = (arg1->unk_34 * c + (arg1->unk_24 * c + (arg1->unk_04 * a + arg1->unk_14 * b)));
    arg0->unk_18 = arg0->unk_00 + t0;
    arg0->unk_1C = arg0->unk_04 + t1;
    func_08866B54(&arg0->unk_30, 0, func_08866B80(arg1, 0));
    func_08866B54(&arg0->unk_30, 1, func_08866B80(arg1, 1));
    func_08866B54(&arg0->unk_30, 2, func_08866B80(arg1, 2));
    func_08866B54(&arg0->unk_30, 3, func_08866B80(arg1, 3));
}
