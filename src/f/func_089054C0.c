#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} Unk_089054C0;

s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_088DDF78(s32, s32);

void func_089054C0(Unk_089054C0 *arg0, void *arg1)
{
    s32 temp = func_08852EB8(arg1);

    if (temp == 0) {
        func_088DDF78(arg0->unk_10, 3);
        func_08852EDC(arg1, temp + 1);
    }
}
