#include "common.h"

typedef struct {
    u8 pad_00[0x55490];
    u8 unk_55490;
} O;

typedef struct {
    u8 pad_00[0x10];
    O *unk_10;
    s32 unk_14;
} T;

void func_08970908(void *, O *, s32, void *);
void func_08852F00(void *, s32);

void func_088EE788(T *arg0, void *arg1)
{
    O *temp = arg0->unk_10;
    func_08970908(&temp->unk_55490, temp, arg0->unk_14, arg1);
    func_08852F00(arg1, 0);
}
