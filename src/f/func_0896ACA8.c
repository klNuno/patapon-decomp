#include "common.h"

typedef struct {
    u8 pad_00[0x8];
} E_0896ACA8;

typedef struct {
    u8 pad_00[0x45218];
    u32 unk_45218;
    u8 pad_4521C[0x1004];
    E_0896ACA8 *unk_46220;
    s32 unk_46224;
} A_0896ACA8;

void func_0896ACA8(A_0896ACA8 *arg0) {
    E_0896ACA8 **data;
    E_0896ACA8 *p;
    s32 *size;

    arg0->unk_45218 += arg0->unk_46224;
    p = arg0->unk_46220;
    data = &arg0->unk_46220;
    if ((u32)p != (u32)((E_0896ACA8 *)*(u32 *)data + arg0->unk_46224)) {
        size = &arg0->unk_46224;
        do {
            p++;
        } while (p != *data + *size);
    }
    arg0->unk_46224 = 0;
}
