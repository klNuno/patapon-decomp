#include "common.h"

typedef struct {
    u8 pad_00[0x54];
    char unk_54[0x408];
    u32 unk_45C;
} T;

void func_088B8BFC(char *arg0, char *arg1, s32 arg2);

void func_088BC21C(char *arg0, T *arg1, const f32 *arg2) {
    f32 temp = *arg2;
    u32 temp2;
    u32 temp3;
    u32 temp4;

    if (temp < 0.0f) {
        func_088B8BFC(arg0, arg1->unk_54, 0);
        return;
    }
    temp2 = arg1->unk_45C;
    temp3 = 0;
    if (temp2 != 0) {
        temp4 = 0;
        do {
            if (temp > (f32)temp4 && temp < (f32)((temp3 + 1) * 0x2D0U)) {
                func_088B8BFC(arg0, arg1->unk_54, temp3);
                return;
            }
            temp4 += 0x2D0U;
            temp3++;
        } while (temp3 < *(volatile u32 *)&arg1->unk_45C);
    }
    func_088B8BFC(arg0, arg1->unk_54, temp2 - 1);
}
