#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x28];
} E_088A4094;

void func_0889B100(E_088A4094 *, f32);

void func_088A41B8(E_088A4094 *arg0, s32 arg1, f32 arg2)
{
    u32 temp1;
    E_088A4094 *temp;

    temp = arg0;
    temp1 = 0;

    do {
        if (arg1 == 0 || arg1 == temp->unk_00) {
            func_0889B100(temp, arg2);
            temp1++;
        } else {
            temp1++;
        }
        temp++;
    } while (temp1 < 0x20);
}
