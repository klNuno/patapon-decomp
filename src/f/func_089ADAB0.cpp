#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x36B60];
    s32 unk_36B60;
} T;

typedef struct {
    u8 pad_00[4];
    T *unk_04;
} U;

s32 func_088BCF70(s32 *);
void func_088CFD24(f32, s32, s32, s32);

void func_089ADAB0(U *arg0) {
    func_088CFD24(1.0f, func_088BCF70(&arg0->unk_04->unk_36B60), 0, 0xF);
}
}
