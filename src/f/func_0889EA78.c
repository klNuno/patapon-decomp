#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} Vec_0889EA78;

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C[0x14];
    Vec_0889EA78 unk_20;
    void *unk_28;
} Obj_0889EA78;

void func_0880416C(void *);
extern u8 D_08A45968[];

Obj_0889EA78 *func_0889EA78(Obj_0889EA78 *arg0, s16 arg1) {
    Vec_0889EA78 *temp;
    s32 *temp2;

    if (arg0 != NULL) {
        arg0->unk_28 = D_08A45968;
        if (arg0->unk_0C != NULL) {
            temp = &arg0->unk_20;
            temp2 = arg0->unk_20.unk_00;
            if ((u32)temp2 != (u32)(temp2 + arg0->unk_20.unk_04)) {
                do {
                    temp2++;
                } while (temp2 != temp->unk_00 + arg0->unk_20.unk_04);
            }
            arg0->unk_20.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
