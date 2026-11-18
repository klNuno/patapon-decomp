#include "common.h"

typedef struct {
    u8 pad_00[0xEAA00];
    u8 unk_EAA00[1];
} S1;

extern void *D_08AD1E28[];
extern s32 D_08A056E4[];

s32 func_0896CE18(void *, s32, s32, s32);
void func_0896CFE0(void *, s32, s32);

void func_08976058(void) {
    S1 *p;
    u8 *q;
    s32 i;
    s32 v;

    p = D_08AD1E28[0] != NULL ? (S1 *)D_08AD1E28[0] : NULL;
    q = p->unk_EAA00;
    for (i = 0; i < 29; i++) {
        v = (u32)i < 29 ? D_08A056E4[i] : 0;
        if (func_0896CE18(q, v, 0, 0) == 0) {
            func_0896CFE0(q, v, -1);
        }
    }
}
