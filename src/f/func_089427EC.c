#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} T089427EC;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088E6630(void *, s32);

void func_089427EC(T089427EC *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 0, 4);
    void *p = arg0->unk_10;

    if (p != NULL) {
        func_088E6630(p, *temp);
    }
    func_08852F00(arg1, 0);
}
