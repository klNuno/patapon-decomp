#include "common.h"

extern u8 *D_08AD1F14[];
extern char *D_08A063D4[];
s32 func_0887744C(u8 *, char *, s32);

typedef struct {
    s32 unk_00;
    s32 unk_04;
} T;

T *func_0898B81C(T *arg0) {
    u8 *temp;

    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    temp = D_08AD1F14[0];
    arg0->unk_00 = func_0887744C(temp != NULL ? temp : NULL, D_08A063D4[0], 1);
    return arg0;
}
