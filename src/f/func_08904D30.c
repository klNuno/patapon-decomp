#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} Obj_08904D30;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void *func_088C6474(void *);
void *func_0898FB90(void *);
u8 func_0898EA1C(void *);

void func_08904D30(Obj_08904D30 *arg0, void *arg1) {
    s32 *temp;
    void *temp2;

    temp = func_0885356C(arg1, 0, 1, 4);
    temp2 = func_0898FB90(func_088C6474(arg0->unk_10 + 0x506F0));
    *temp = 0;
    if (temp2 != NULL) {
        *temp = func_0898EA1C(temp2);
    }
    func_08852F00(arg1, 0);
}
