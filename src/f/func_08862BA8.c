#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} U;

typedef struct {
    u8 pad_00[0x84];
    U unk_84;
} T;

void func_0880416C(void *);

T *func_08862BA8(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        s32 temp = arg0->unk_84.unk_04;
        s32 *temp2 = arg0->unk_84.unk_00;
        U *temp3 = &arg0->unk_84;

        if ((u32)temp2 != (u32)(temp2 + temp)) {
            do {
                temp2++;
            } while (temp2 != temp3->unk_00 + temp);
        }
        arg0->unk_84.unk_04 = 0;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
