#include "common.h"

typedef struct {
    u32 unk_00;
    u8 unk_04[0x5C];
} Elem_088BD108;

typedef struct {
    u8 pad_00[0x3008];
    Elem_088BD108 *unk_3008;
    s32 unk_300C;
} Obj_088BD108;

s32 func_0881F08C(void *, char *, u32);
u32 func_08822BC4(char *);

Elem_088BD108 *func_088BD108(Obj_088BD108 *arg0, char *arg1) {
    Elem_088BD108 *p;
    Elem_088BD108 *end;
    u32 n;

    p = arg0->unk_3008;
    end = p + arg0->unk_300C;
    for (; p != end; p++) {
        n = func_08822BC4(arg1);
        if (func_0881F08C(p->unk_04, arg1, n < p->unk_00 ? p->unk_00 : n) == 0) {
            return p;
        }
    }
    return NULL;
}
