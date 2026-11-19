#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    void *unk_14;
    u8 unk_18[0x10];
} T;

void *func_08827A50(u32);
void func_088698B4(void *);
void func_08883B60(void *, s32, s32);
void func_08883C50(void *);
extern u8 D_08A453C0[];

T *func_08883AEC(s32 arg0, s32 arg1)
{
    T *temp;

    if ((temp = func_08827A50(0x28)) != NULL) {
        func_088698B4(temp);
        temp->unk_14 = D_08A453C0;
        func_08883C50(temp->unk_18);
        func_08883B60(temp->unk_18, arg0, arg1);
    }
    return temp;
}
