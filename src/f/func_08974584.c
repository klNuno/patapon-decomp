#include "common.h"

extern void func_08974068(char *, f32);
f32 func_0897412C(char *);
f32 func_0890CF44(s32, u8 *, f32);
extern u8 D_08A05474[];

typedef struct {
    u8 pad_00[0x10C];
    char unk_10C[0x10];
    f32 unk_11C;
    f32 unk_120;
    s32 unk_124;
} Unk;

void func_08974584(Unk *arg0, f32 arg1, f32 arg2) {
    f32 temp;
    f32 temp2;
    f32 temp3;

    if (arg2 == 0.0f) {
        arg0->unk_120 = arg1;
        arg0->unk_11C = arg1;
        func_08974068(arg0->unk_10C, arg2);
        return;
    }
    if (arg0->unk_124 == 0) {
        temp = arg0->unk_120;
        temp2 = func_0897412C(arg0->unk_10C);
        {
            f32 temp4 = arg0->unk_11C - temp;
            temp3 = temp + temp4 * temp2;
        }
    } else {
        temp2 = func_0897412C(arg0->unk_10C);
        temp3 = func_0890CF44(arg0->unk_124, D_08A05474, temp2);
    }
    arg0->unk_120 = temp3;
    arg0->unk_11C = arg1;
    func_08974068(arg0->unk_10C, arg2);
}
