#include "common.h"
typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} A;
typedef struct {
    u8 pad_00[0x166C];
    A *unk_166C;
    u32 unk_1670;
} T;

A *func_089C603C(T *arg0, s32 arg1) {
    A *temp;
    u32 i = 0;
    if (arg0->unk_1670 != 0) {
        temp = arg0->unk_166C;
        do {
            if (temp->unk_20 == arg1) {
                return temp;
            }
            i++;
            temp++;
        } while (i < *(volatile u32 *)&arg0->unk_1670);
    }
    return NULL;
}
