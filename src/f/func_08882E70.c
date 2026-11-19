#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    u8 pad_20[0xC];
    s32 unk_2C;
    s32 unk_30;
} T;

extern u8 D_08A4535C[];
void func_08882EC0(T *arg0);

T *func_08882E70(T *arg0) {
    arg0->unk_1C = D_08A4535C;
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_2C = 0;
    arg0->unk_30 = -1;
    func_08882EC0(arg0);
    return arg0;
}
