#include "common.h"

extern "C" {

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
u8 func_0891106C(void *);

typedef struct {
    u8 pad_00[0xB21EC];
    void *unk_B21EC;
} Unk00;

typedef struct {
    u8 pad_00[0x10];
    Unk00 *unk_10;
} Unk01;

void func_088FA6A8(Unk01 *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    *temp = func_0891106C(arg0->unk_10->unk_B21EC);
    func_08852F00(arg1, 0);
}

}
