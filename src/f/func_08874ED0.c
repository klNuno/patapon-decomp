#include "common.h"

typedef struct Unk_08874ED0_Elem {
    u32 unk_00;
    u8 unk_04[0x5C];
} Unk_08874ED0_Elem;

typedef struct Unk_08874ED0 {
    u8 pad_00[0x68];
    Unk_08874ED0_Elem *unk_68;
    s32 unk_6C;
} Unk_08874ED0;

s32 func_0881F08C(void *, s32, u32);
u32 func_08822BC4(s32);

Unk_08874ED0_Elem *func_08874ED0(Unk_08874ED0 *arg0, s32 arg1) {
    Unk_08874ED0_Elem *p = arg0->unk_68;
    Unk_08874ED0_Elem *end = p + arg0->unk_6C;
    u32 temp;
    u32 len;

    for (; p != end; p++) {
        temp = func_08822BC4(arg1);
        len = (temp < p->unk_00) ? p->unk_00 : temp;
        if (func_0881F08C(p->unk_04, arg1, len) == 0) {
            return p;
        }
    }
    return NULL;
}
