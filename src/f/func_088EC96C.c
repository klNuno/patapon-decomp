#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
extern void *D_08AD1E28[];

typedef struct {
    u8 pad_00[0x22D0];
    s32 unk_22D0;
} T0;

typedef struct {
    u8 pad_00[0x14A0];
    T0 *unk_14A0;
} T1;

typedef struct {
    u8 pad_00[0x42820];
    T1 *unk_42820;
} T2;

static inline T2 *func_088EC96C_unk_00(void) {
    T2 *temp = (T2 *)D_08AD1E28[0];
    return temp != NULL ? temp : NULL;
}

void func_088EC96C(void *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    func_088EC96C_unk_00()->unk_42820->unk_14A0->unk_22D0 = *temp;
    func_08852F00(arg1, 0);
}
