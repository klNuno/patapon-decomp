#include "common.h"

typedef struct Elem_088BD330 {
    u8 pad_00[0x2C];
    u32 unk_2C;
    char unk_30[0x28];
    s32 unk_58;
    u8 pad_5C[4];
} Elem_088BD330;

typedef struct Obj_088BD330 {
    u8 pad_00[0x3008];
    Elem_088BD330 *unk_3008;
    s32 unk_300C;
} Obj_088BD330;

extern s32 func_08822BC4(s32);
s32 func_0881F08C(char *, char *, u32);

s32 func_088BD330(Obj_088BD330 *arg0, char *arg1) {
    Elem_088BD330 *p;
    Elem_088BD330 *end;
    s32 len;
    u32 n;

    p = arg0->unk_3008;
    end = p + arg0->unk_300C;
    for (; p != end; p++) {
        len = func_08822BC4((s32)arg1);
        n = (u32)len < p->unk_2C ? p->unk_2C : len;
        if (func_0881F08C(p->unk_30, arg1, n) == 0) {
            return p->unk_58;
        }
    }
    return 0;
}
