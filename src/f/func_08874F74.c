#include "common.h"

typedef struct Elem_08874F74 {
    u8 pad_00[0x2C];
    u32 unk_2C;
    char unk_30[0x30];
} Elem_08874F74;

typedef struct Obj_08874F74 {
    u8 pad_00[0x68];
    Elem_08874F74 *unk_68;
    s32 unk_6C;
} Obj_08874F74;

extern s32 func_08822BC4(s32);
s32 func_0881F08C(char *, char *, u32);

Elem_08874F74 *func_08874F74(Obj_08874F74 *arg0, char *arg1) {
    Elem_08874F74 *p;
    Elem_08874F74 *end;
    s32 len;
    u32 n;

    p = arg0->unk_68;
    end = p + arg0->unk_6C;
    for (; p != end; p++) {
        len = func_08822BC4((s32)arg1);
        n = (u32)len < p->unk_2C ? p->unk_2C : len;
        if (func_0881F08C(p->unk_30, arg1, n) == 0) {
            return p;
        }
    }
    return NULL;
}
