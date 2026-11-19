#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x24];
    u8 unk_28;
    u8 pad_29[3];
} E_088A4094;

void func_0889B100(E_088A4094 *, f32);

void func_088A4138(E_088A4094 *arg0, s32 arg1, f32 arg2)
{
    u32 i;
    E_088A4094 *p;

    p = arg0;
    i = 0;
    do {
        if (arg1 == 0 || arg1 == (p->unk_28 != 0 ? 0 : p->unk_00)) {
            func_0889B100(p, arg2);
        }
        i++;
        p++;
    } while (i < 0x20U);
}
