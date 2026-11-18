#include "common.h"

typedef struct {
    void *unk_00;
} T;

typedef struct {
    u8 pad_00[0x260E0];
    T **unk_260E0;
    s32 unk_260E4;
} S0;

extern u8 D_08A46410[];

s32 func_08858B9C(void);
void func_088E5EAC(T *, s32, s32, s32, s32, s32, s32);

T *func_08906B74(S0 *arg0, s32 arg1) {
    T *p;

    p = *(T **)((u8 *)arg0->unk_260E0 + arg0->unk_260E4 * 4 - 4);
    if (arg1 != 0 && p != NULL) {
        func_088E5EAC(p, func_08858B9C(), 0x48, 0x48, 0x48, 0x48, 1);
        p->unk_00 = D_08A46410;
    }
    arg0->unk_260E4--;
    return p;
}
