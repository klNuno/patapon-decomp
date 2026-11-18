#include "common.h"

typedef struct {
    u8 pad_00[0x28];
    s32 unk_28;
    u8 pad_2C[4];
    f32 unk_30;
} T;

s32 func_08973230(void);
s32 func_08973238(T *);
s32 func_089732D4(T *);
s32 func_0897333C(void);
void func_089737CC(T *, s32, s32);

void func_08972D04(T *arg0, s32 arg1, f32 arg2) {
    s32 temp;
    switch (arg1) {
    case 0:
        temp = -1;
        break;
    case 1:
        temp = func_08973230();
        break;
    case 2:
        temp = func_08973238(arg0);
        break;
    case 3:
        temp = func_089732D4(arg0);
        break;
    case 4:
        temp = func_0897333C();
        break;
    default:
        temp = 0x1C;
        break;
    }
    if (temp >= 0) {
        func_089737CC(arg0, temp, 0);
    }
    arg0->unk_30 = arg2;
    arg0->unk_28++;
}
