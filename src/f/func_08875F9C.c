#include "common.h"

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
} E_08875F9C;

typedef struct {
    s32 unk_00;
    E_08875F9C unk_04[0x100];
} S_08875F9C;

void func_08875F9C(S_08875F9C *arg0) {
    u32 i;

    arg0->unk_00 = 0;
    for (i = 0; i < 0x100; i++) {
        arg0->unk_04[i].unk_00 = 0;
        arg0->unk_04[i].unk_01 = 0;
        arg0->unk_04[i].unk_02 = 0;
        arg0->unk_04[i].unk_03 = i;
    }
}
