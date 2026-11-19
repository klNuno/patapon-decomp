#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[8];
    u8 unk_10[0x5C00];
    s32 unk_5C10;
    s32 unk_5C14;
    void *unk_5C18;
} Unk_088665C0;

extern u8 D_08A44B8C[];
void func_088667F0(void);
void func_088668A0(void);
void func_0880406C(void *, void (*)(void), void (*)(void), s32, s32);

Unk_088665C0 *func_088665C0(Unk_088665C0 *arg0)
{
    arg0->unk_5C18 = D_08A44B8C;
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    func_0880406C(arg0->unk_10, func_088667F0, func_088668A0, 0x170, 0x40);
    arg0->unk_5C10 = 0;
    arg0->unk_5C14 = 0;
    return arg0;
}
