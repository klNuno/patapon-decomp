#include "common.h"

typedef struct {
    u8 pad_00[0x3C];
    s32 unk_3C;
} T;

void func_089391F8(T *, s32);
void func_08939280(T *, s32);

void func_0893911C(T *arg0, s32 arg1)
{
    s32 temp;

    do {
        temp = arg0->unk_3C;
        switch (temp) {
        case 0:
            func_089391F8(arg0, arg1);
            break;
        case 1:
            func_08939280(arg0, arg1);
            break;
        }
    } while (temp != arg0->unk_3C);
}
