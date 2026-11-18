#include "common.h"

typedef struct {
    u8 pad_00[0xB21EC];
    s32 unk_B21EC;
} Sub_088FA714;

typedef struct {
    u8 pad_00[0x10];
    Sub_088FA714 *unk_10;
} Obj_088FA714;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0891107C(s32);
s32 func_089110C4(s32);

void func_088FA714(Obj_088FA714 *arg0, void *arg1) {
    s32 *temp_s2;
    s32 *temp_s1;

    temp_s2 = func_0885356C(arg1, 0, 1, 4);
    temp_s1 = func_0885356C(arg1, 1, 1, 4);
    *temp_s2 = func_0891107C(arg0->unk_10->unk_B21EC);
    *temp_s1 = func_089110C4(arg0->unk_10->unk_B21EC);
    func_08852F00(arg1, 0);
}
