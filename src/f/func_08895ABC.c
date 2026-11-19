#include "common.h"

typedef struct {
    u8 pad_00[0x28];
} B_08895ABC;

typedef struct {
    B_08895ABC *unk_00;
} C_08895ABC;

typedef struct {
    u8 pad_00[0x95DC];
    C_08895ABC unk_95DC;
} A_08895ABC;

void func_0893F2E4(B_08895ABC *, s32);
s32 func_0893F2EC(B_08895ABC *);

B_08895ABC *func_08895ABC(A_08895ABC *arg0, s32 arg1) {
    u32 off;
    C_08895ABC *p = &arg0->unk_95DC;
    s32 i = 0;

    do {
        off = (u32)i * 0x28U;
        if (func_0893F2EC((B_08895ABC *)((u8 *)p->unk_00 + off)) == -1) {
            func_0893F2E4((B_08895ABC *)((u8 *)p->unk_00 + off), arg1);
            return (B_08895ABC *)((u8 *)p->unk_00 + off);
        }
    } while (++i < 16);
    return NULL;
}
