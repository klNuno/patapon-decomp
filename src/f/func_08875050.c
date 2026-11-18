#include "common.h"

typedef struct {
    u32 unk_00;
    u8 unk_04[0x54];
    s32 unk_58;
    u8 pad_5C[4];
} Elem_08875050;

typedef struct {
    u8 pad_00[0x68];
    Elem_08875050 *unk_68;
    s32 unk_6C;
} Obj_08875050;

s32 func_0881F08C(void *, char *, u32);
u32 func_08822BC4(char *);

s32 func_08875050(Obj_08875050 *arg0, char *arg1) {
    Elem_08875050 *p;
    Elem_08875050 *end;
    u32 n;

    p = arg0->unk_68;
    end = p + arg0->unk_6C;
    for (; p != end; p++) {
        n = func_08822BC4(arg1);
        if (func_0881F08C(p->unk_04, arg1, n < p->unk_00 ? p->unk_00 : n) == 0) {
            return p->unk_58;
        }
    }
    return 0;
}
