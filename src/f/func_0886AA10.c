#include "common.h"

typedef struct {
    u32 unk_00;
    u8 unk_04[0x5C];
} Elem_0886AA10;

typedef struct {
    u8 pad_00[0xD88];
    Elem_0886AA10 *unk_D88;
    s32 unk_D8C;
} Obj_0886AA10;

s32 func_0881F08C(void *, char *, u32);
u32 func_08822BC4(char *);

Elem_0886AA10 *func_0886AA10(Obj_0886AA10 *arg0, char *arg1) {
    Elem_0886AA10 *p;
    Elem_0886AA10 *end;
    u32 n;

    p = arg0->unk_D88;
    end = p + arg0->unk_D8C;
    for (; p != end; p++) {
        n = func_08822BC4(arg1);
        if (func_0881F08C(p->unk_04, arg1, n < p->unk_00 ? p->unk_00 : n) == 0) {
            return p;
        }
    }
    return NULL;
}
