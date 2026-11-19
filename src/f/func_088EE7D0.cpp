#include "common.h"

extern "C" {

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

typedef struct {
    u8 pad_00[0x55498];
    u8 unk_55498;
} Unk00;

typedef struct {
    u8 pad_00[0x10];
    Unk00 *unk_10;
    void *unk_14;
} Unk01;

void func_08971308(void *, Unk00 *, void *, void *, s32);

void func_088EE7D0(Unk01 *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    func_08971308(&arg0->unk_10->unk_55498, arg0->unk_10, arg0->unk_14, arg1, *temp);
    func_08852F00(arg1, 0);
}

}
