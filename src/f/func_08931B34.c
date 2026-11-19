#include "common.h"

typedef struct {
    u8 pad_00[0x40];
    u32 unk_40;
    u32 unk_44;
    u32 unk_48;
    u32 unk_4C;
    s32 unk_50;
} T;

s32 func_088586E8(void);
void *func_089B5470(s32, s32);
void func_088C3688(void *);

void func_08931B34(T *arg0)
{
    arg0->unk_40 = 0x40A00000;
    arg0->unk_44 = 0x40A00000;
    arg0->unk_48 = 0x40A00000;
    arg0->unk_4C = 0x40A00000;
    func_088C3688(func_089B5470(func_088586E8(), arg0->unk_50));
}
