#include "common.h"

typedef struct S_0888B1AC S_0888B1AC;
typedef struct H_0888B1AC H_0888B1AC;

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
    s8 *unk_10;
} T;

void func_0888B1AC(S_0888B1AC *arg0, H_0888B1AC *arg1, u32 arg2);

void func_0888B25C(T *arg0, H_0888B1AC *arg1, u32 arg2, s32 arg3)
{
    s8 *temp;
    s32 temp1;

    func_0888B1AC((S_0888B1AC *)arg0, arg1, arg2);
    arg0->unk_00 = -1;
    temp = arg0->unk_10;
    if (temp != NULL) {
        if (arg3 < 0 && (temp1 = *temp) < 0) {
            arg0->unk_00 = temp1;
        } else {
            arg0->unk_00 = arg3 < 0 ? arg3 - *temp : *temp + arg3;
        }
    }
}
