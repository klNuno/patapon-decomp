#include "common.h"

typedef struct {
    u8 pad_00[0x58];
    u32 unk_58;
    u32 unk_5C;
    u8 pad_60[0x19A0];
    u8 unk_1A00[1];
} T;

extern int func_08864FC0(s32);
extern void func_08864C5C(void);
void func_0887F750(void *);

void func_0887EF70(T *arg0)
{
    func_08864C5C();
    arg0->unk_58 = 0;
    arg0->unk_5C = 0x42980000;
    func_0887F750(arg0->unk_1A00);
    func_08864FC0((s32)arg0);
}
