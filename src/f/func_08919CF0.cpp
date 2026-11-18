#include "common.h"

extern "C" {
struct A;
typedef u8 (A::*P)(u32, bool);

typedef struct {
    f32 unk_00;
    P unk_04;
} B;

typedef struct {
    B *unk_00;
    s32 unk_04;
} C;

typedef struct { void *unk_00; } I;
typedef struct { u8 pad_00[0x10]; } D;
typedef struct {
    u8 pad_00[8];
    A *unk_08;
    u8 pad_0C[0x220];
    D unk_22C;
    f32 unk_23C;
} E;

void func_089191CC(I *, D *);
void func_089191C4(I *, D *);
s32 func_08919E30(I *, I *);
C *func_08919EFC(I *);
void func_08919E6C(I *, D *, void *);
void func_08919E5C(I *, I *);
void func_08919E48(I *);

void func_08919CF0(E *arg0, u32 arg1) {
    I temp;
    I temp2;
    I temp3;
    f32 temp4;

    func_089191CC(&temp, &arg0->unk_22C);
    func_089191C4(&temp2, &arg0->unk_22C);
    if (func_08919E30(&temp, &temp2) != 0) {
        do {
            C *temp5 = func_08919EFC(&temp);
            u8 temp6 = 0;
            if (temp5->unk_00->unk_00 < arg0->unk_23C) {
                temp6 = (arg0->unk_08->*temp5->unk_00->unk_04)(arg1, temp5->unk_04 == 0);
                temp5->unk_04 = 1;
            }
            if (temp6 == 1) {
                func_08919E6C(&temp3, &arg0->unk_22C, temp.unk_00);
                func_08919E5C(&temp, &temp3);
            } else {
                func_08919E48(&temp);
            }
        } while (func_08919E30(&temp, &temp2) != 0);
    }
    temp4 = (f32)arg1;
    temp4 /= 4800.0f;
    arg0->unk_23C += temp4;
}
}
