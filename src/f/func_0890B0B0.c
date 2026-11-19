#include "common.h"

typedef struct N_0890AEB8 N_0890AEB8;

typedef struct {
    N_0890AEB8 *unk_00;
    N_0890AEB8 *unk_04;
    N_0890AEB8 *unk_08;
    s32 unk_0C;
} L_0890AEB8;

typedef struct {
    N_0890AEB8 *unk_00;
} It_0890AEB8;

typedef struct {
    u8 pad_00[0xEE018];
    L_0890AEB8 unk_EE018;
} T0890B0B0;

void func_0890AE30(s32 *, s32);
void func_0890AE38(s32 *, s32 *);
It_0890AEB8 func_0890AEB8(L_0890AEB8 *, It_0890AEB8, It_0890AEB8);

void func_0890B0B0(T0890B0B0 *arg0) {
    It_0890AEB8 temp;
    It_0890AEB8 a;
    It_0890AEB8 b;

    func_0890AE38((s32 *)&a, (s32 *)&arg0->unk_EE018);
    func_0890AE30((s32 *)(u32)&b, (s32)&arg0->unk_EE018);
    temp = func_0890AEB8(&arg0->unk_EE018, a, b);
}
