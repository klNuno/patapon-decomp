#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    s32 unk_0C;
} S;

void func_088139D8(s32 arg0, s32 arg1, s32 arg2);

void func_0885A3F8(S *arg0, s32 arg1) {
    s32 temp;
    arg0->unk_0C = 0;
    temp = *(volatile s32 *)&arg0->unk_04;
    func_088139D8(arg1, arg0->unk_00, temp);
}
