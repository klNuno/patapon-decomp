#include "common.h"

typedef struct {
    u8 pad_00[0x70];
    s32 unk_70, unk_74;
} E_089316C4;

void func_088812A4(E_089316C4 *, s32);

void func_08882530(s32 arg0, E_089316C4 *arg1) {
    s32 i = arg1->unk_70;
    E_089316C4 *temp = arg1;
    if (i == 0 || i != arg0) {
        s32 flag;
        temp->unk_70 = arg0;
        flag = temp->unk_74 != 0;
        if (flag != 0) {
            func_088812A4(temp, 0);
        } else {
            func_088812A4(temp, 1);
        }
        func_088812A4(temp, flag);
    }
}
