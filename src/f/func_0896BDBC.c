#include "common.h"

void func_0880416C(void *);

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} Unk00;

typedef struct {
    u8 pad_00[0x1C];
    Unk00 unk_1C;
} Unk01;

Unk01 *func_0896BDBC(Unk01 *arg0, s16 arg1) {
    s32 *temp;
    Unk00 *temp2;

    if (arg0 != NULL) {
        temp2 = &arg0->unk_1C;
        temp = arg0->unk_1C.unk_00;
        if ((u32)temp != (u32)(temp + arg0->unk_1C.unk_04)) {
            do {
                ++temp;
            } while (temp != temp2->unk_00 + arg0->unk_1C.unk_04);
        }
        arg0->unk_1C.unk_04 = 0;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
