#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    u8 *unk_04;
} R;

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} S;

R *func_0884E644(s32);
s32 func_088A88C0(void);

void func_088D330C(S *arg0, s32 arg1)
{
    R *r;
    u32 i;

    arg0->unk_24 = arg1;
    r = func_0884E644(func_088A88C0());
    for (i = 100; i < 699; i++) {
        r->unk_04[i >> 3] &= (u8)((1 << (i & 7)) ^ 0xFF);
    }
}
