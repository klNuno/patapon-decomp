#include "common.h"

typedef struct {
    u8 pad_00[0xA10];
    u8 *unk_A10;
    s32 unk_A14;
} S;

void func_0880416C(void *);

S *func_088B21E0(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            u8 *temp = arg0->unk_A10;
            u8 **temp2 = &arg0->unk_A10;
            s32 temp3 = arg0->unk_A14 * 0x50;

            if ((u32)temp != (u32)(temp + temp3)) {
                u8 *temp4 = *(u8 *volatile *)temp2 + temp3;
                do {
                    temp += 0x50;
                } while (temp != temp4);
            }
            arg0->unk_A14 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
