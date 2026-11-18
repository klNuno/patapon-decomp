#include "common.h"

typedef struct {
    u32 unk_00;
    u8 unk_04[0x5C];
} E088E13A8;

typedef struct {
    u8 pad_00[0xC008];
    E088E13A8 *unk_C008;
    s32 unk_C00C;
} T088E13A8;

s32 func_0881F08C(void *, char *, u32);
u32 func_08822BC4(char *);

E088E13A8 *func_088E13A8(T088E13A8 *arg0, char *arg1) {
    E088E13A8 *p;
    E088E13A8 *end;
    u32 temp;

    p = arg0->unk_C008;
    end = p + arg0->unk_C00C;
    for (; p != end; p++) {
        temp = func_08822BC4(arg1);
        if (func_0881F08C(p->unk_04, arg1, (temp < p->unk_00) ? p->unk_00 : temp) == 0) {
            return p;
        }
    }
    return NULL;
}
