#include "common.h"

typedef struct { u8 pad_00[0x1AD0]; u8 unk_1AD0; } B;
typedef struct { u8 pad_00[0x36B08]; B *unk_36B08; } A;
typedef struct {
    u8 pad_00[0x8C];
    A *unk_8C;
    u8 pad_90[0x33A0];
    u8 unk_3430;
} T;

void func_0891FD6C(void *, A *);
void func_08920114(void *, void *);
f32 func_089202D8(void *);
void func_08920BAC(void *, f32);

s32 func_0891BE10(T *arg0, void *arg1, u8 arg2) {
    void *temp;
    if (arg2 == 1) {
        func_0891FD6C(&arg0->unk_3430, arg0->unk_8C);
        temp = &arg0->unk_8C->unk_36B08->unk_1AD0;
        func_08920BAC(temp, func_089202D8(&arg0->unk_3430));
    }
    func_08920114(&arg0->unk_3430, arg1);
    return 0;
}
