#include "common.h"

extern u8 D_08A443A8[];
typedef struct {
    u8 *unk_00;
    s32 unk_04;
    s32 unk_08;
} T;

T *func_08806A1C(T *arg0)
{
    arg0->unk_00 = D_08A443A8;
    arg0->unk_04 = 1;
    arg0->unk_08 = 1;
    return arg0;
}
