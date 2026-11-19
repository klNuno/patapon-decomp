#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    u8 unk_20;
    u8 pad_21[0x8F];
    u8 unk_B0;
} Unk;

void func_08865F78(void *, s32);
void func_0880416C(void *);

Unk *func_0899F224(Unk *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_08865F78(&arg0->unk_B0, -1);
        func_08865F78(&arg0->unk_20, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        } else {
            return arg0;
        }
    }
    return arg0;
}
