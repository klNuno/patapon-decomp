#include "common.h"

s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_088DDF78(s32, s32);

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} T;

void func_08905460(T *arg0, void *arg1) {
    void *p = arg1;
    s32 temp = func_08852EB8(p);
    if (temp == 0) {
        func_088DDF78(arg0->unk_10, 2);
        func_08852EDC(p, temp + 1);
    }
}
