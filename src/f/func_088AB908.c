#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088D6110(void *, s32, s32, f32);

typedef struct {
    u8 pad_00[0x3E8];
    u8 unk_3E8[4];
} V088AB908;

typedef struct {
    u8 pad_00[0x36B10];
    V088AB908 *unk_36B10;
} U088AB908;

typedef struct {
    u8 pad_00[0x14];
    U088AB908 *unk_14;
} S088AB908;

void func_088AB908(S088AB908 *arg0, void *arg1) {
    s32 *a = func_0885356C(arg1, 0, 1, 4);
    s32 *b = func_0885356C(arg1, 1, 1, 4);
    f32 *c = (f32 *)func_0885356C(arg1, 2, 1, 4);

    func_088D6110(arg0->unk_14->unk_36B10->unk_3E8, *a, *b, *c);
    func_08852F00(arg1, 0);
}
