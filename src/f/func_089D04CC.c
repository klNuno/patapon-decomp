#include "common.h"

typedef struct {
    u8 pad_00[0x11588];
    s32 unk_11588;
    u8 unk_1158C[0x10];
} T;

void func_0881F5C0(void *, s32, s32);

void func_089D04CC(T *arg0) {
    arg0->unk_11588 = 0;
    func_0881F5C0(arg0->unk_1158C, 0, sizeof(arg0->unk_1158C));
}
