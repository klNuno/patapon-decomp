#include "common.h"

typedef struct { f32 unk_00; s32 unk_04; } V_089ADA00;
typedef struct { u8 pad_00[0x506F0]; u8 unk_506F0; } B;
typedef struct { u8 pad_00[0x10]; B *unk_10; } A;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088BCF70(s32);
s32 func_088C6484(void *);
void func_088CF75C(s32, V_089ADA00 *, s32);

void func_089027D4(A *arg0, void *arg1) {
    V_089ADA00 temp;
    f32 temp2 = (f32)*func_0885356C(arg1, 0, 1, 4);
    temp.unk_04 = 0;
    temp.unk_00 = temp2;
    func_088CF75C(func_088BCF70(func_088C6484(&arg0->unk_10->unk_506F0)), &temp, 0);
    func_08852F00(arg1, 0);
}
