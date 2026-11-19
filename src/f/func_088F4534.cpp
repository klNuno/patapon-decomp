#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x8C];
    s32 unk_8C;
} S;

void func_088F45AC(S *);
void func_088F4590(S *);

void func_088F4534(S *arg0) {
    switch (arg0->unk_8C) {
    case 0:
        func_088F45AC(arg0);
        return;
    case 1:
        func_088F4590(arg0);
        return;
    default:
        func_088F45AC(arg0);
        return;
    }
}
}
