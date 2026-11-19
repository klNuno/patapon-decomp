#include "common.h"

typedef struct {
    u8 pad_00[0x24B20];
    u8 unk_24B20;
} T;

void func_0894DD84(s32, s32, s32);

void func_0896FECC(T **arg0, s32 arg1, s32 arg2)
{
    func_0894DD84((s32)&(*arg0)->unk_24B20, arg1, arg2);
}
