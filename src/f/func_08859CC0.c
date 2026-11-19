#include "common.h"

typedef struct {
    u8 pad_00[4];
    u8 unk_04;
    u8 pad_05[0x40F];
    u8 unk_414;
    u8 pad_415[0x81F];
    s32 unk_C34;
} Unk;

void func_0885A2F0(void *, s16);
void func_0880416C(void *);

Unk *func_08859CC0(Unk *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_C34 = 0;
        func_0885A2F0(&arg0->unk_414, -1);
        func_0885A2F0(&arg0->unk_04, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        } else {
            return arg0;
        }
    }
    return arg0;
}
