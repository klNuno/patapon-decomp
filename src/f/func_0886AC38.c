#include "common.h"

typedef struct {
    u8 pad_00[0x2C];
    u32 unk_2C;
    u8 unk_30[0x28];
    s32 unk_58;
    u8 pad_5C[4];
} Elem_0886AC38;

typedef struct {
    u8 pad_00[0xD88];
    Elem_0886AC38 *unk_D88;
    s32 unk_D8C;
} Obj_0886AC38;

s32 func_0881F08C(void *, char *, u32);
u32 func_08822BC4(char *);

s32 func_0886AC38(Obj_0886AC38 *arg0, char *arg1) {
    Elem_0886AC38 *p;
    Elem_0886AC38 *end;
    u32 n;

    p = arg0->unk_D88;
    end = p + arg0->unk_D8C;
    for (; p != end; p++) {
        n = func_08822BC4(arg1);
        if (func_0881F08C(p->unk_30, arg1, n < p->unk_2C ? p->unk_2C : n) == 0) {
            return p->unk_58;
        }
    }
    return 0;
}
