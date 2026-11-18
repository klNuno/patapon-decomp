#include "common.h"

typedef struct {
    f32 unk_00, unk_04;
} V;
typedef struct {
    u8 pad_00[0x30];
    V unk_30;
    u8 pad_38[8];
} Mtx;
typedef struct {
    u8 pad_00[0xF0];
    V unk_F0;
    u8 pad_F8[0xC];
    s32 unk_104;
    u8 pad_108[4];
    s32 unk_10C, unk_110;
} T;

extern s32 func_08985828(s32, s32);
void func_08866464(Mtx *, void *, void *);
extern void *D_08A09578[];

void func_089C3DB4(T *arg0) {
    Mtx temp;
    f32 temp3, temp4;
    s32 temp5;
    s32 temp2 = func_08985828(arg0->unk_110, 1);
    func_08866464(&temp, (void *)temp2, D_08A09578[0]);
    temp3 = temp.unk_30.unk_04;
    temp4 = temp.unk_30.unk_00;
    arg0->unk_F0.unk_00 = temp4;
    *(volatile f32 *)&arg0->unk_F0.unk_04 = temp3;
    temp3 += 20.0f;
    arg0->unk_F0.unk_04 = temp3;
    temp5 = arg0->unk_10C;
    if (temp5 == 1) {
        return;
    }
    if (temp5 == 2) {
        if (arg0->unk_104 == 1) {
            arg0->unk_F0.unk_00 -= 20.0f;
            arg0->unk_F0.unk_04 += 5.0f;
        } else {
            arg0->unk_F0.unk_00 += 20.0f;
            arg0->unk_F0.unk_04 += 5.0f;
        }
    } else {
        if (arg0->unk_104 == 1) {
            arg0->unk_F0.unk_00 -= 30.0f;
            arg0->unk_F0.unk_04 += 10.0f;
        } else if (arg0->unk_104 != 2) {
            arg0->unk_F0.unk_00 += 30.0f;
            arg0->unk_F0.unk_04 += 10.0f;
        }
    }
}
