#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    char *unk_14;
} T088F0674;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088D4724(char *, s32);

void func_088F0674(T088F0674 *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    char *p = arg0->unk_14;

    if (p != NULL) {
        func_088D4724(p, *temp);
    }
    func_08852F00(arg1, 0);
}
