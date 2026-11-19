#include "common.h"

extern u8 D_08A45918[];

typedef struct {
    s32 unk_00;
    f32 unk_04;
    u32 unk_08;
    u8 unk_0C;
    u8 pad_0D[0x13];
    u32 unk_20;
    u8 *unk_24;
} T;

void func_0889C85C(T *);

T *func_0889C7B4(T *arg0) {
    arg0->unk_24 = D_08A45918;
    arg0->unk_00 = -1;
    arg0->unk_04 = 0.5f;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_20 = 0;
    func_0889C85C(arg0);
    return arg0;
}
