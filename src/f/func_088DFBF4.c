#include "common.h"

typedef struct {
    u8 pad_00[0x1AB1];
    u8 unk_1AB1;
    u8 pad_1AB2[0xE];
    f32 unk_1AC0;
    f32 unk_1AC4;
    u8 pad_1AC8[8];
    f32 unk_1AD0;
    f32 unk_1AD4;
} S;

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[0x14];
} T;

void func_08855354(char *);
void func_08857C14(void *);
void func_088649A4(s32 *);
void func_088649D8(s32 *, s16);
void func_08865CC4(f32, f32, s32, s32);

void func_088DFBF4(S *arg0) {
    s32 temp;
    T temp2;

    if (arg0->unk_1AB1 != 0) {
        func_088649A4(&temp);
        func_08855354((char *)&temp2);
        temp2.unk_30 = arg0->unk_1AC0;
        temp2.unk_34 = arg0->unk_1AC4;
        func_08857C14(&temp2);
        func_08865CC4(arg0->unk_1AD0, arg0->unk_1AD4, 2, -1);
        func_088649D8(&temp, -1);
    }
}
