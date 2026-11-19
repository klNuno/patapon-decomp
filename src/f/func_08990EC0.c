#include "common.h"

typedef struct {
    u8 unk_00[0x38];
} Unk00;

typedef struct {
    u8 pad_00[4];
    u8 unk_04[0x3814];
    s32 unk_3818;
} Unk01;

void func_088E1E7C(Unk00 *, s16);
Unk00 *func_08990D44(void *);
Unk00 *func_08990D60(void *);

void func_08990EC0(Unk01 *arg0) {
    Unk00 *temp = func_08990D60(arg0->unk_04);
    if (temp != func_08990D44(arg0->unk_04)) {
        do {
            func_088E1E7C(temp, -1);
            ++temp;
        } while (temp != func_08990D44(arg0->unk_04));
    }
    arg0->unk_3818 = 0;
}
