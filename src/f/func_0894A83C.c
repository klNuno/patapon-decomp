#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
} T;

extern f32 D_089E9430[];
extern f32 D_089E9434[];
extern f32 D_089E9438[];
extern f32 D_089E943C[];

T *func_0894A83C(T *arg0, s32 arg1)
{
    arg0->unk_00 = arg1;
    arg0->unk_10 = D_089E9430[0];
    arg0->unk_14 = D_089E9434[0];
    arg0->unk_18 = D_089E9438[0];
    arg0->unk_1C = D_089E943C[0];
    return arg0;
}
