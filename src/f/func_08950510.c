#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} Unk1;

typedef struct {
    u8 pad_00[0xC];
    Unk1 unk_0C;
} Unk;

void func_0880416C(void *);

void *func_08950510(Unk *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        Unk1 *temp = &arg0->unk_0C;
        s32 *temp2 = arg0->unk_0C.unk_00;
        s32 temp3 = arg0->unk_0C.unk_04;

        if ((u32)temp2 != (u32)(temp2 + temp3)) {
            do {
                temp2++;
            } while (temp2 != temp->unk_00 + temp3);
        }
        arg0->unk_0C.unk_04 = 0;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
