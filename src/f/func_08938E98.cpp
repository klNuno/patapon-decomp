#include "common.h"

extern "C" {

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
typedef struct T T;
void func_08954ABC(T *, u8);

typedef struct {
    u8 pad_00[0x1E6B0];
    u8 unk_1E6B0;
} Unk00;

typedef struct {
    u8 pad_00[0x10];
    Unk00 *unk_10;
} Unk01;

void func_08938E98(Unk01 *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    func_08954ABC((T *)&arg0->unk_10->unk_1E6B0, *temp != 0);
    func_08852F00(arg1, 0);
}

}
