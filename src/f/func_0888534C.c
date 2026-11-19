#include "common.h"

s32 func_0887FE48(void *);

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[0xDA7];
    u8 unk_DA9;
} Unk00;

typedef struct {
    u8 pad_00[0x10C];
    s32 unk_10C;
    u8 unk_110;
    u8 unk_111;
} Unk01;

void func_0888534C(Unk01 *arg0, Unk00 *arg1) {
    s32 temp;

    arg0->unk_10C = func_0887FE48(arg1);
    arg0->unk_110 = arg1->unk_00;
    temp = arg1->unk_01 != 0;
    if (temp != 0) {
        temp = (arg1->unk_00 != 0) ^ 1;
    }
    if (temp != 0) {
        temp = arg1->unk_DA9 != 0;
    }
    arg0->unk_111 = temp;
}
