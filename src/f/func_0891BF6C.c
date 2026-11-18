#include "common.h"

typedef struct { f32 unk_00; f32 unk_04; f32 unk_08; f32 unk_0C; } V;
typedef struct { u8 pad_00[0x1AD0]; u8 unk_1AD0; } B;
typedef struct { u8 pad_00[0x36B08]; B *unk_36B08; } A;
typedef struct { u8 pad_00[0x8C]; A *unk_8C; } T;

void func_08920B74(void *, V *);
V *func_08920B98(void *);

s32 func_0891BF6C(T *arg0) {
    V temp;
    void *temp2 = &arg0->unk_8C->unk_36B08->unk_1AD0;
    V *temp3 = func_08920B98(temp2);
    f32 temp4 = temp3->unk_00;
    f32 temp5 = temp4 - 1.0f;
    temp.unk_00 = temp4;
    temp.unk_04 = temp3->unk_04;
    temp.unk_08 = temp3->unk_08;
    temp.unk_0C = temp3->unk_0C;
    temp.unk_00 = temp5;
    func_08920B74(temp2, &temp);
    return temp.unk_00 <= 0.0f ? 1 : 0;
}
