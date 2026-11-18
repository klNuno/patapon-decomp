#include "common.h"

typedef struct {
    u8 pad_00[0x1060];
    s32 unk_1060;
} S_08995398;

s32 func_08998080(s32);
s32 func_0899A900(s32);
void func_08998E78(s32);
void func_08998DC8(s32);
void func_089B98CC(void *, s32);
void func_089B9A1C(void *);
void func_089B73EC(void *, s32);

void func_08995398(S_08995398 *arg0, s32 arg1) {
    if (arg1 != 3) {
        if (func_0899A900(func_08998080(arg0->unk_1060)) != 0) {
            func_08998E78(arg0->unk_1060);
            func_089B98CC((u8 *)arg0 + 0x7800, arg1);
        } else {
            func_08998DC8(arg0->unk_1060);
            func_089B9A1C((u8 *)arg0 + 0x7800);
        }
        func_089B73EC((u8 *)arg0 + 0x1070, 0);
    } else {
        func_089B9A1C((u8 *)arg0 + 0x7800);
        func_089B73EC((u8 *)arg0 + 0x1070, 1);
    }
}
