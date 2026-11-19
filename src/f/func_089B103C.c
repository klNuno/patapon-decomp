#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2_088FCD2C;

typedef struct {
    V2_088FCD2C unk_00;
    V2_088FCD2C unk_08;
} V4_088FCD2C;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    void *unk_20;
} U;

extern f32 D_089F0958[];
extern f32 D_089F095C[];

void func_088FC854(void *, void *, u8 *, s32, V4_088FCD2C *, f32);
void func_089B1124(U *, void *, s8);
s8 *func_089B135C(s32);

void func_089B103C(U *arg0, void *arg1, f32 arg2) {
    V2_088FCD2C temp;
    f32 a = arg0->unk_14 + D_089F095C[0];
    f32 b = arg0->unk_10 + D_089F0958[0];
    f32 c = a + arg0->unk_1C;
    f32 d = b + arg0->unk_18;
    temp.unk_00 = d;
    temp.unk_04 = c;
    if (arg0->unk_0C == -1) {
        arg2 = -1.0f;
    } else if ((u8)func_089B135C((s32)arg0)[1] == 0) {
        arg2 = -1.0f;
    }
    func_088FC854(arg0->unk_20, arg1, (u8 *)&temp, arg0->unk_0C, NULL, arg2);
    if (arg0->unk_0C != -1) {
        func_089B1124(arg0, arg1, *func_089B135C((s32)arg0));
    }
}
