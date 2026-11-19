#include "common.h"

typedef struct { void *unk_00; } It_08878520;
typedef struct { u8 pad_00[4]; s32 unk_04; } Pair_08878520;
typedef struct { s32 unk_00, unk_04, unk_08; } T;
typedef struct { u8 pad_00[4]; u8 unk_04[4]; } W;
typedef struct { u8 pad_00[0xBB8]; W unk_BB8; } U;

extern s32 D_089F96D4[];
s32 func_088586E8(void);
u8 *func_089B53D8(s32);
Pair_08878520 *func_0886E1B8(It_08878520 *);
s32 func_0886E1C4(It_08878520 *, It_08878520 *);
void func_0886E1DC(It_08878520 *, void *);
void func_0886E1E8(It_08878520 *, void *, s32 *);
extern s32 func_088A4818(s32, s32);
extern void func_0889B620(char *, s32);
void func_0889B6E8(char *, s32);
void func_0889BF08(void *, f32);
void func_0889C0A4(void *, f32, f32);
void func_0889C514(char *, s32);

void func_088797FC(s32 arg0, s32 arg1, s32 arg2, T *arg3) {
    s32 temp;
    It_08878520 temp1, temp2;
    union { W *unk_00; s32 unk_04; } temp3;
    s32 temp4;
    s32 temp6;
    s32 temp7;

    if (arg3->unk_00 > 0) {
        temp7 = arg3->unk_04;
        if (temp7 > 0) {
            temp4 = temp7 >= 4 ? (s32)(void *)2 : (s32)(void *)1;
        } else {
            temp4 = 0;
        }
        if (arg3->unk_08 == 1) {
            temp4 = 2;
        }
        temp3.unk_00 = &((U *)func_089B53D8(func_088586E8()))->unk_BB8;
        temp = D_089F96D4[temp4];
        func_0886E1E8(&temp1, temp3.unk_00->unk_04, &temp);
        func_0886E1DC(&temp2, temp3.unk_00->unk_04);
        if (func_0886E1C4(&temp2, &temp1) != 0) {
            temp6 = func_0886E1B8(&temp1)->unk_04;
        } else {
            temp6 = 0;
        }
        *(s32 *)&temp3.unk_04 = arg1 & 7;
        func_0889BF08((void *)func_088A4818(arg0 + 0x18, temp3.unk_04), 0.0f);
        func_0889B620((char *)func_088A4818(arg0 + 0x18, temp3.unk_04), temp6);
        func_0889B6E8((char *)func_088A4818(arg0 + 0x18, temp3.unk_04), arg2);
        func_0889C514((char *)func_088A4818(arg0 + 0x18, temp3.unk_04), 5);
        func_0889C0A4((void *)func_088A4818(arg0 + 0x18, temp3.unk_04), (f32)arg3->unk_00, 1.0f);
    }
}
