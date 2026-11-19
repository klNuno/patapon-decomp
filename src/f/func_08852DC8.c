#include "common.h"

s32 func_08852E24(void *);
void func_08852E48(void *, s32);

typedef struct {
    u8 pad_00[8];
} U;

typedef struct {
    u8 pad_00[0x18];
    U unk_18[0x20];
} V;

typedef struct {
    u8 pad_00[8];
    U *unk_08;
    u8 pad_0C[0x354];
    s32 unk_360;
} T;

void func_08852DC8(T *arg0) {
    s32 temp = func_08852E24(arg0);
    s32 i = arg0->unk_360;
    temp--;

    arg0->unk_08 = &((V *)arg0)[i].unk_18[temp];
    func_08852E48(arg0, temp);
}
