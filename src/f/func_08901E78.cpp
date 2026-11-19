#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} T;

s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 func_088DDF90(s32);

void func_08901E78(T *arg0, void *arg1) {
    s32 temp = func_08852EB8(arg1);

    if (temp == 0) {
        func_08852EDC(arg1, temp + 1);
    } else {
        if (func_088DDF90(arg0->unk_10) != 0) {
            func_08852F00(arg1, 0);
        }
    }
}
}
