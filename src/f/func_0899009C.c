#include "common.h"

typedef struct {
    u8 pad_00[0x40];
    s32 unk_40;
} T;

void func_089900E8(T *, s32);
void func_089902D8(T *, s32);

void func_0899009C(T *arg0, s32 arg1) {
    switch (arg0->unk_40) {
    case 0:
        func_089900E8(arg0, arg1);
        return;
    case 1:
        func_089902D8(arg0, arg1);
        return;
    }
}
