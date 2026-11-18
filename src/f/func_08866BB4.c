#include "common.h"

typedef struct {
    u8 pad_00[0x2C];
    u32 unk_2C;
    char unk_30[0x30];
} Elem_08866BB4;

typedef struct {
    u8 pad_00[0xD88];
    Elem_08866BB4 *unk_D88;
    s32 unk_D8C;
} Obj_08866BB4;

s32 func_0881F08C(void *, char *, u32);
u32 func_08822BC4(char *);

s32 func_08866BB4(Obj_08866BB4 *arg0, char *arg1) {
    Elem_08866BB4 *p;
    Elem_08866BB4 *end;
    s32 i;
    u32 len;

    p = arg0->unk_D88;
    end = p + arg0->unk_D8C;
    for (i = 0; p != end; p++, i++) {
        len = func_08822BC4(arg1);
        if (func_0881F08C(p->unk_30, arg1, (len < p->unk_2C) ? p->unk_2C : len) == 0) {
            return i;
        }
    }
    return -1;
}
