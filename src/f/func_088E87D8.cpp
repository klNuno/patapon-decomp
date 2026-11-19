#include "common.h"

extern "C" {
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_0887FCC4(char *arg0, s8 arg1);

typedef struct {
    u8 pad_00[0x36B08];
    char *unk_36B08;
} U;

typedef struct {
    u8 pad_00[0x14];
    U *unk_14;
} T;

void func_088E87D8(T *arg0, void *arg1)
{
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    func_0887FCC4(arg0->unk_14->unk_36B08 + 0x1A00, *temp == 1);
    func_08852F00(arg1, 0);
}
}
