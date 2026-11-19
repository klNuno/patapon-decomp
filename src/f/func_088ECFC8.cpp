#include "common.h"

extern "C" {

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_089AD67C(void *);

typedef struct {
    u8 pad_00[0x55570];
    u8 unk_55570;
} Unk00;

typedef struct {
    u8 pad_00[0x14];
    Unk00 *unk_14;
} Unk01;

void func_088ECFC8(Unk01 *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    *temp = func_089AD67C(&arg0->unk_14->unk_55570);
    func_08852F00(arg1, 0);
}

}
