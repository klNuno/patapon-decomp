#include "common.h"

typedef struct {
    f32 unk_00[3];
} V;

typedef struct {
    V unk_00;
    f32 unk_0C;
} S;

typedef struct {
    u8 pad_00[0x44];
    S unk_44;
} T;

void func_0889B5D4(T *arg0, const S *arg1)
{
    volatile S temp;

    temp.unk_00 = arg1->unk_00;
    temp.unk_0C = arg1->unk_0C;
    arg0->unk_44.unk_00 = temp.unk_00;
    arg0->unk_44.unk_0C = temp.unk_0C;
}
