#include "common.h"

void func_089AE168(void *);
void func_089B170C(void *, s32);
s32 func_089B23BC(void *, u8);

typedef struct {
    u8 pad_00[0x2770];
    u8 unk_2770[0x1D4];
    u8 unk_2944[0x2190];
    u8 *unk_4AD4;
    s32 unk_4AD8;
} T;

void func_088F4FE0(T *arg0) {
    func_089AE168(arg0);
    if (arg0->unk_4AD8 != 0) {
        s32 temp = func_089B23BC(arg0->unk_2770, *arg0->unk_4AD4);
        if (temp > 0) {
            func_089B170C(arg0->unk_2944, temp);
        }
    }
}
