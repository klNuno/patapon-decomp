#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x55440];
    u8 unk_55440;
} S;

typedef struct {
    u8 pad_00[0x14];
    S *unk_14;
} T;

void func_0896D48C(void *, S *, void *);
void func_08852F00(void *, s32);

void func_088EBCA4(T *arg0, void *arg1) {
    S *temp = arg0->unk_14;
    func_0896D48C(&temp->unk_55440, temp, arg1);
    func_08852F00(arg1, 0);
}
}
