#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} Unk;

void func_0880649C(void *, s32);

void func_08808F28(void *arg0, Unk *arg1)
{
    func_0880649C(arg0, arg1->unk_20);
}

}
