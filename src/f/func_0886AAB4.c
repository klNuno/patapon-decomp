#include "common.h"

typedef struct Unk_0886AAB4_Elem {
    u8 pad_00[0x2C];
    u32 unk_2C;
    u8 unk_30[0x30];
} Unk_0886AAB4_Elem;

typedef struct Unk_0886AAB4 {
    u8 pad_00[0xD88];
    Unk_0886AAB4_Elem *unk_D88;
    s32 unk_D8C;
} Unk_0886AAB4;

s32 func_0881F08C(void *, s32, u32);
u32 func_08822BC4(s32);

Unk_0886AAB4_Elem *func_0886AAB4(Unk_0886AAB4 *arg0, s32 arg1) {
    Unk_0886AAB4_Elem *p = arg0->unk_D88;
    Unk_0886AAB4_Elem *end = p + arg0->unk_D8C;
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
