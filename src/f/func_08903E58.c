#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[4];
} E08904068;

typedef struct {
    u8 pad_00[0x404];
    E08904068 *unk_404;
    s32 unk_408;
} O08904068;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} W08904068;

typedef struct {
    u8 pad_00[0x10];
    W08904068 *unk_10;
} T08904068;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6464(void *);
s32 func_088F8DCC(s32, s32, O08904068 **);
void func_088F9CE0(void *, s32, f32);

void func_08903E58(T08904068 *arg0, void *arg1)
{
    O08904068 *temp;
    s32 *temp2;
    s32 *temp3;
    f32 *temp4;
    s32 temp5;
    E08904068 *temp6;
    E08904068 *temp7;

    temp2 = func_0885356C(arg1, 0, 1, 4);
    temp3 = func_0885356C(arg1, 1, 1, 4);
    temp4 = (f32 *)func_0885356C(arg1, 2, 1, 4);
    temp5 = func_088C6464(arg0->unk_10->unk_506F0);
    temp = NULL;
    if (func_088F8DCC(temp5, *temp2, &temp) != 0) {
        temp6 = temp->unk_404;
        temp7 = temp6 + temp->unk_408;
        for (; temp6 != temp7; temp6++) {
            if (temp6->unk_08 != NULL) {
                func_088F9CE0(temp6->unk_08, *temp3, *temp4);
            }
        }
    }
    func_08852F00(arg1, 0);
}
