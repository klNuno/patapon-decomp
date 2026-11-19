#include "common.h"

typedef struct T_08914CD0 T_08914CD0;

typedef struct {
    u8 pad_00[0xAAC];
    s32 unk_AAC;
    s32 unk_AB0;
    s32 unk_AB4;
} T;

void func_0881F5C0(void *, s32, s32);
s32 func_08859C04(void);
void func_08913E3C(T_08914CD0 *, s32, s32);

T *func_089D4FBC(T *arg0, s32 arg1) {
    func_08913E3C((T_08914CD0 *)((u8 *)arg0 + 0x280), arg1, func_08859C04());
    arg0->unk_AAC = 0;
    arg0->unk_AB0 = 0;
    arg0->unk_AB4 = 0;
    func_0881F5C0(arg0, 0, 0x280);
    return arg0;
}
