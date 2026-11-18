#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} S088EA030_14;

typedef struct {
    u8 pad_00[0x14];
    S088EA030_14 *unk_14;
} S088EA030;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_08895B50(s32, s32);
s32 func_08895BC4(s32, s32);
s32 func_08899E18(s32, s32);
void func_0893F260(s32);

void func_088EA030(S088EA030 *arg0, void *arg1) {
    s32 *temp;
    s32 p;
    s32 i;

    temp = func_0885356C(arg1, 0, 1, 4);
    if (arg0->unk_14 != NULL) {
        p = func_08899E18(arg0->unk_14->unk_36B10, 1);
        i = func_08895B50(p, *temp);
        if (i >= 0) {
            func_0893F260(func_08895BC4(p, i));
        }
    }
    func_08852F00(arg1, 0);
}
