#include "common.h"

extern "C" {

void func_088649A4(void *);
void func_08855354(char *);
void func_08857C14(void *);
void func_08865CC4(f32, f32, s32, s32);
void func_088649D8(void *, s16);

typedef struct {
    u8 pad_00[0x1B81];
    u8 unk_1B81;
    u8 pad_1B82[0xE];
    f32 unk_1B90;
    f32 unk_1B94;
    u8 pad_1B98[8];
    f32 unk_1BA0;
    f32 unk_1BA4;
} Unk00;

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[0x14];
} Unk01;

void func_0887F044(Unk00 *arg0) {
    s32 temp;
    Unk01 temp2;

    if (arg0->unk_1B81 != 0) {
        func_088649A4(&temp);
        func_08855354((char *)&temp2);
        temp2.unk_30 = arg0->unk_1B90;
        temp2.unk_34 = arg0->unk_1B94;
        func_08857C14(&temp2);
        func_08865CC4(arg0->unk_1BA0, arg0->unk_1BA4, 2, -1);
        func_088649D8(&temp, -1);
    }
}

}
