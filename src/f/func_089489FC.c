#include "common.h"

typedef struct {
    u8 pad_00[0x1500];
    s32 unk_1500;
    u8 pad_1504[0x1620 - 0x1504];
    u8 unk_1620[0x33E0 - 0x1620];
    s32 unk_33E0;
    u8 pad_33E4[0x1AC78 - 0x33E4];
    s32 unk_1AC78;
    u8 pad_1AC7C[4];
    s32 unk_1AC80;
} Obj_089489FC;

s32 func_0887ED98(s32, s32);
s32 func_0887ED88(s32, s32);
s32 func_0895A2D4(void *);
s32 func_08866534(s32);
void func_0895A04C(s32, s32);

void func_089489FC(Obj_089489FC *arg0) {
    s32 temp;

    if (func_0887ED98(arg0->unk_1500, 0x40) != 0) {
        temp = arg0->unk_1AC78 + 1;
        arg0->unk_1AC78 = temp;
        if (func_08866534(func_0895A2D4(arg0->unk_1620)) - 1 < temp) {
            arg0->unk_1AC78 = 0;
        }
    }
    if (func_0887ED98(arg0->unk_1500, 0x10) != 0) {
        if (--arg0->unk_1AC78 < 0) {
            arg0->unk_1AC78 = func_08866534(func_0895A2D4(arg0->unk_1620)) - 1;
        }
    }
    func_0895A04C(arg0->unk_33E0, arg0->unk_1AC78);
    if (func_0887ED88(arg0->unk_1500, 0x2000) != 0) {
        arg0->unk_1AC80 = 1;
    }
}
