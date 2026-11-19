#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    char *unk_36B10;
} T1;

typedef struct {
    u8 pad_00[0x14];
    T1 *unk_14;
} T;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0893FFD4(char *);

void func_088EAA30(T *arg0, void *arg1)
{
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    T1 *temp1 = arg0->unk_14;

    if (temp1 != NULL) {
        *temp = func_0893FFD4(temp1->unk_36B10 + 0x1040);
    }
    func_08852F00(arg1, 0);
}
