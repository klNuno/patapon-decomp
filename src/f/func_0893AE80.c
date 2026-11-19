#include "common.h"

typedef struct {
    f32 unk_00;
} Unk;

typedef struct {
    Unk unk_00;
    u8 unk_04;
} Unk2;

void func_0893AE80(Unk2 *arg0, u32 arg1, u8 arg2)
{
    volatile u32 temp = arg1;
    arg0->unk_00 = *(Unk *)&temp;
    arg0->unk_04 = arg2;
}
