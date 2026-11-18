#include "common.h"

typedef struct { f32 unk_00; f32 unk_04; } V2;
typedef V2 V;

typedef struct { u8 pad_00[0x110]; u8 unk_110; } B;
typedef struct {
    u8 pad_00[0x36B08];
    B *unk_36B08;
    u8 pad_36B0C[0x1D1B4];
    u8 unk_53CC0;
} A;
typedef struct { u8 pad_00[4]; A *unk_04; } T;

s32 func_08865184(s32 arg0);
void func_08925918(void *, V *, f32, f32);
s32 func_0892A498(void *, s32, V2 *, V2 *, s32, s32, f32);
void func_0892C14C(s32, f32, f32);

void func_089AD730(T *arg0, f32 arg1) {
    struct { V unk_00; u8 pad_08[8]; } temp;
    V2 temp2;
    V2 temp3;
    temp.unk_00.unk_00 = 5.0f;
    temp.unk_00.unk_04 = 5.0f;
    func_08925918(&arg0->unk_04->unk_36B08->unk_110, &temp.unk_00, 0.0f, arg1);
    temp3.unk_00 = 0.0f;
    temp3.unk_04 = 0.0f;
    temp2.unk_00 = *(f32 *)func_08865184((s32)arg0->unk_04->unk_36B08);
    temp2.unk_04 = 0.0f;
    func_0892C14C(func_0892A498(&arg0->unk_04->unk_53CC0, 0x71, &temp2, &temp3, 0, 0, 0.0f), arg1, 0.0f);
}
