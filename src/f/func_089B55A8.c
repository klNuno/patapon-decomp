#include "common.h"

typedef struct {
    void *volatile unk_00;
    u8 pad_04[0x2C8];
    s32 unk_2CC;
} T;

extern u8 D_08A46A0C[];
extern u8 D_08A48AC0[];
void func_089B5658(T *);

T *func_089B55A8(T *arg0, s32 arg1)
{
    arg0->unk_00 = D_08A46A0C;
    arg0->unk_00 = D_08A48AC0;
    arg0->unk_2CC = arg1;
    func_089B5658(arg0);
    return arg0;
}
