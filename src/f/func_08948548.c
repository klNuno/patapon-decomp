#include "common.h"

typedef struct {
    u8 pad_00[0x1500];
    s32 unk_1500;
    u8 pad_1504[0x11C];
    char unk_1620[0x1AC74 - 0x1620];
    s32 unk_1AC74;
    u8 pad_1AC78[4];
    u8 unk_1AC7C;
    u8 pad_1AC7D[3];
    s32 unk_1AC80;
} S;

s32 func_088148F0(s32, s32);
s32 func_0887ED78(s32, s32);
s32 func_0887ED88(s32, s32);
s32 func_0887ED98(s32, s32);
s32 func_08959754(s32);
void func_0895A054(char *, void *);
f32 func_0895A2B4(char *arg0);
void func_0895A2C4(char *arg0, f32 fparg0);
f32 func_0895A2CC(char *arg0);
s32 func_0895A2DC(char *);
void func_0895A2F0(char *, s32);
s32 func_0895A304(char *arg0);

void func_08948548(S *arg0, void *arg1) {
    s32 temp;
    f32 temp2;
    s32 temp3;

    if (func_0887ED98(arg0->unk_1500, 0x10) != 0) {
        temp = arg0->unk_1AC74 - 1;
        arg0->unk_1AC74 = temp;
        if (temp < 0) {
            arg0->unk_1AC74 = 4;
        }
    }
    if (func_0887ED98(arg0->unk_1500, 0x40) != 0) {
        temp = arg0->unk_1AC74 + 1;
        if ((arg0->unk_1AC74 = temp) > 4) {
            arg0->unk_1AC74 = 0;
        }
    }
    if (arg0->unk_1AC74 == 0) {
        if (func_0887ED88(arg0->unk_1500, 0x2000) != 0) {
            arg0->unk_1AC7C = !arg0->unk_1AC7C;
        }
    }
    temp = arg0->unk_1AC74;
    if (temp == 1) {
        arg0->unk_1AC7C = 0;
        temp2 = func_0895A2B4(arg0->unk_1620);
        if (func_0887ED78(arg0->unk_1500, 0x1000) != 0) {
            if (func_0887ED78(arg0->unk_1500, 0x20) != 0) {
                temp2 += 1.0f;
                if (temp2 > func_0895A2CC(arg0->unk_1620)) {
                    temp2 = 0.0f;
                }
            }
            if (func_0887ED78(arg0->unk_1500, 0x80) != 0) {
                temp2 -= 1.0f;
                if (temp2 < 0.0f) {
                    temp2 = func_0895A2CC(arg0->unk_1620);
                }
            }
        } else {
            if (func_0887ED98(arg0->unk_1500, 0x20) != 0) {
                temp2 += 1.0f;
                if (temp2 > func_0895A2CC(arg0->unk_1620)) {
                    temp2 = 0.0f;
                }
            }
            if (func_0887ED98(arg0->unk_1500, 0x80) != 0) {
                temp2 -= 1.0f;
                if (temp2 < 0.0f) {
                    temp2 = func_0895A2CC(arg0->unk_1620);
                }
            }
        }
        func_0895A2C4(arg0->unk_1620, temp2);
    } else if (temp == 2) {
        if (func_0887ED88(arg0->unk_1500, 0x2000) != 0) {
            arg0->unk_1AC80 = 2;
        }
    } else if (temp == 3) {
        temp3 = func_0895A304(arg0->unk_1620);
        if (func_0887ED98(arg0->unk_1500, 0x20) != 0) {
            temp3++;
            if ((u32)(func_0895A2DC(arg0->unk_1620) - 1) < (u32)temp3) {
                temp3 = 0;
            }
        }
        if (func_0887ED98(arg0->unk_1500, 0x80) != 0) {
            temp3--;
            if (temp3 < 0) {
                temp3 = func_0895A2DC(arg0->unk_1620) - 1;
            }
        }
        func_0895A2F0(arg0->unk_1620, temp3);
    } else if (temp == 4) {
        if (func_0887ED88(arg0->unk_1500, 0x2000) != 0) {
            arg0->unk_1AC80 = 3;
        }
    }
    if (arg0->unk_1AC7C != 0) {
        func_0895A054(arg0->unk_1620, arg1);
    }
    if (func_0887ED88(arg0->unk_1500, 0x4000) != 0) {
        func_088148F0(4, 0);
        func_08959754((s32)arg0->unk_1620);
        arg0->unk_1AC74 = 0;
        arg0->unk_1AC7C = 1;
        arg0->unk_1AC80 = 0;
    }
}
