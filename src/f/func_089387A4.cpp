#include "common.h"

extern "C" {

void func_08852F00(void *, s32);
extern s32 *func_0885356C(void *, s32, s32, s32);

typedef struct {
    u8 pad_00[0x4314];
    s32 unk_4314;
} U;

typedef struct {
    u8 pad_00[0x10];
    U *unk_10;
} T;

void func_089387A4(T *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    *temp = arg0->unk_10->unk_4314;
    func_08852F00(arg1, 0);
}

}
