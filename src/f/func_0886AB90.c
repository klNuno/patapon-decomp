#include "common.h"

typedef struct Elem_0886AB90 {
    u32 unk_00;
    char unk_04[0x54];
    s32 unk_58;
    u8 pad_5C[4];
} Elem_0886AB90;

typedef struct Obj_0886AB90 {
    u8 pad_00[0xD88];
    Elem_0886AB90 *unk_D88;
    s32 unk_D8C;
} Obj_0886AB90;

extern s32 func_08822BC4(s32);
s32 func_0881F08C(char *, char *, u32);

s32 func_0886AB90(Obj_0886AB90 *arg0, char *arg1) {
    Elem_0886AB90 *p;
    Elem_0886AB90 *end;
    s32 len;
    u32 n;

    p = arg0->unk_D88;
    end = p + arg0->unk_D8C;
    for (; p != end; p++) {
        len = func_08822BC4((s32)arg1);
        n = (u32)len < p->unk_00 ? p->unk_00 : len;
        if (func_0881F08C(p->unk_04, arg1, n) == 0) {
            return p->unk_58;
        }
    }
    return 0;
}
