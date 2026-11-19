#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} Unk00;

typedef struct {
    Unk00 unk_00;
    s32 *unk_0C;
} Unk01;

typedef struct {
    u8 pad_00[0x468];
    Unk01 *unk_468;
    s32 unk_46C;
} Unk02;

s32 func_08853298(Unk02 *arg0, const Unk01 *arg1) {
    Unk01 *temp = &arg0->unk_468[arg0->unk_46C];
    if (temp != NULL) {
        s32 temp2 = ((const volatile Unk00 *)arg1)->unk_00;
        s32 temp3 = ((const volatile Unk00 *)arg1)->unk_04;
        s32 temp4 = ((const volatile Unk00 *)arg1)->unk_08;
        temp->unk_00.unk_00 = temp2;
        temp->unk_00.unk_04 = temp3;
        temp->unk_00.unk_08 = temp4;
        temp->unk_0C = arg1->unk_0C;
        if (*(volatile s32 *)&temp->unk_00.unk_08 != 0) {
            ++*temp->unk_0C;
        }
    }
    ++arg0->unk_46C;
    return 1;
}
