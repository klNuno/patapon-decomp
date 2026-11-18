#include "common.h"

typedef struct {
    u8 pad_00[0xB21EC];
    void *unk_B21EC;
} S_088FA484;

typedef struct {
    u8 pad_00[0x10];
    S_088FA484 *unk_10;
} Obj_088FA484;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} V_088FA484;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08911010(void *, V_088FA484 *, s32);

void func_088FA484(Obj_088FA484 *arg0, void *arg1) {
    s32 *temp_s3;
    s32 *temp_s2;
    s32 *temp_v0;
    V_088FA484 sp28;
    s32 temp;

    temp_s3 = func_0885356C(arg1, 0, 1, 4);
    temp_s2 = func_0885356C(arg1, 1, 1, 4);
    temp_v0 = func_0885356C(arg1, 2, 1, 4);
    temp = *temp_s3;
    sp28.unk_00 = *temp_s2;
    sp28.unk_04 = temp;
    func_08911010(arg0->unk_10->unk_B21EC, &sp28, *temp_v0);
    func_08852F00(arg1, 0);
}
