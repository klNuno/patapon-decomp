#include "common.h"

typedef struct {
    u8 pad_00[0x824];
    s32 unk_824;
    u32 unk_828;
    u8 pad_82C[0x400];
    s32 unk_C2C;
    u8 pad_C30[0x1];
    u8 unk_C31;
} T;

void func_0885A3F8(s32, s32);
void func_08814B10(s32, s32, s32);
void func_08859E44(T *);

void func_0885A074(T *arg0) {
    if (arg0->unk_C31 == 0) {
        func_0885A3F8(arg0->unk_824, 0);
    } else {
        s32 temp;
        s32 temp2;
        u32 temp3;
        func_0885A3F8(arg0->unk_824, 4);
        temp3 = arg0->unk_828 & 1;
        temp2 = arg0->unk_C2C;
        if (temp3 != 0) {
            temp = 0;
        } else {
            temp = 0x44000;
        }
        func_08814B10(temp2, temp, 0x200);
        func_08859E44(arg0);
    }
}
