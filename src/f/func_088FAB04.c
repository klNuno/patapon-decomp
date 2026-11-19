#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

extern V D_089FE120[];
extern V D_089FE128[];

s32 func_088FAB04(s32 arg0)
{
    volatile struct { V unk_00; V unk_08; } temp;

    temp.unk_00 = D_089FE120[0];
    temp.unk_08 = D_089FE128[0];
    return ((s32 *)&temp)[arg0];
}
