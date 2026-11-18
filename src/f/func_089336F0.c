#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[4];
    u8 unk_10[1];
} S_089336F0;

s32 func_08866B80(void *, s32);
void func_08866B54(void *, s32, s32);
void func_08933578(S_089336F0 *);

void func_089336F0(S_089336F0 *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4) {
    if (arg1 != 0) {
        arg0->unk_00 = arg1;
        arg0->unk_04 = arg2;
        arg0->unk_08 = arg3;
        func_08866B54(arg0->unk_10, 0, func_08866B80(arg4, 0));
        func_08866B54(arg0->unk_10, 1, func_08866B80(arg4, 1));
        func_08866B54(arg0->unk_10, 2, func_08866B80(arg4, 2));
        func_08866B54(arg0->unk_10, 3, func_08866B80(arg4, 3));
        func_08933578(arg0);
    }
}
