#include "common.h"

void func_0893C5C8(void *);
extern u8 D_08A472F4[];

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    s32 unk_0C;
    u8 pad_10[0x30];
    void *unk_40;
} T;

T *func_0893C530(T *arg0, s32 arg1) {
    arg0->unk_40 = D_08A472F4;
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_0C = arg1;
    func_0893C5C8(arg0);
    return arg0;
}
