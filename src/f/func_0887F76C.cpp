#include "common.h"

typedef struct {
    u8 pad_00[0x80];
    s32 unk_80;
} T;

extern "C" {
void func_0887F7C8(T *);
void func_0887FB54(T *);

void func_0887F76C(T *arg0) {
    switch (arg0->unk_80) {
    case 0:
        func_0887F7C8(arg0);
        return;
    case 1:
        func_0887FB54(arg0);
        return;
    default:
        func_0887F7C8(arg0);
        return;
    }
}
}
