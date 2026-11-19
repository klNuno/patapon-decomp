#include "common.h"

typedef struct {
    u8 pad_00[0x410];
    s32 *unk_410;
    s32 unk_414;
} T;

void func_0880416C(void *);

T *func_08946CE8(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        s32 temp = arg0->unk_414;
        s32 *temp2 = arg0->unk_410;
        s32 **temp3 = &arg0->unk_410;
        if ((u32)temp2 != (u32)(temp2 + temp)) {
            s32 *temp4 = *(s32 *volatile *)temp3 + temp;
            do {
                temp2++;
            } while (temp2 != temp4);
        }
        arg0->unk_414 = 0;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
