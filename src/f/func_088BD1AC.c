#include "common.h"

typedef struct Unk_088BD1AC_Elem {
    u8 pad_00[0x2C];
    u32 unk_2C;
    u8 unk_30[0x30];
} Unk_088BD1AC_Elem;

typedef struct Unk_088BD1AC {
    u8 pad_00[0x3008];
    Unk_088BD1AC_Elem *unk_3008;
    s32 unk_300C;
} Unk_088BD1AC;

s32 func_0881F08C(void *, s32, u32);
u32 func_08822BC4(s32);

Unk_088BD1AC_Elem *func_088BD1AC(Unk_088BD1AC *arg0, s32 arg1) {
    Unk_088BD1AC_Elem *p = arg0->unk_3008;
    Unk_088BD1AC_Elem *end = p + arg0->unk_300C;
    u32 temp;
    u32 len;

    for (; p != end; p++) {
        temp = func_08822BC4(arg1);
        len = (temp < p->unk_2C) ? p->unk_2C : temp;
        if (func_0881F08C(p->unk_30, arg1, len) == 0) {
            return p;
        }
    }
    return NULL;
}
