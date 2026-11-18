#include "common.h"

typedef struct { u8 pad_00[0x20]; } E;
typedef struct { E *unk_00; s32 unk_04; } V;
typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0xC];
    u8 unk_1C[0x2D4];
    V unk_2F0;
    u8 pad_2F8[0x14];
    u8 unk_30C[0x884];
    u8 unk_B90[0x1A34];
    s32 unk_25C4;
    u8 pad_25C8[4];
    u8 unk_25CC;
} A;

extern const u32 D_089EA4E8[];
void func_08879610(void *, s32);
void func_0887A12C(void *, s32);
void func_088A3C34(void *);
void func_0894C7AC(s32);
void func_0894CF90(f32, void *);
s32 func_0895257C(char *arg0);

void func_08951918(A *arg0) {
    E *temp;
    V *temp2;
    s32 temp3;
    f32 temp4;

    if (arg0->unk_0C != 0) {
        func_0894C7AC(func_0895257C((char *)arg0));
    }
    temp3 = arg0->unk_2F0.unk_04;
    temp = arg0->unk_2F0.unk_00;
    temp2 = &arg0->unk_2F0;
    if ((u32)temp != (u32)(temp + temp3)) {
        do {
            temp++;
        } while (temp != temp2->unk_00 + temp3);
    }
    arg0->unk_2F0.unk_04 = 0;
    func_0887A12C(arg0->unk_B90, 0);
    func_08879610(arg0->unk_30C, 0);
    temp4 = (f32)D_089EA4E8[0];
    arg0->unk_25C4 = 0;
    func_0894CF90(temp4, arg0->unk_1C);
    func_088A3C34(&arg0->unk_25CC);
}
