#include "common.h"

typedef struct {
    u8 pad_00[1];
    u8 unk_01;
} T;
extern void func_0883C180(s32 arg0);

void func_0887B980(T *arg0, u8 arg1) {
    u8 temp2 = *(volatile u8 *)&arg0->unk_01;
    s32 temp1 = arg1;
    if (temp2 != temp1) {
        arg0->unk_01 = arg1;
        func_0883C180(temp1);
    }
}
