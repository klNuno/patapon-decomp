#include "common.h"

void func_08822B3C(char *, char *);
u32 func_08822BC4(char *);
s32 func_0893D560(char *);

typedef struct {
    u8 pad_00[0xC];
    char unk_0C[0x90];
    s32 unk_9C;
} T;

s32 func_0885AE9C(T *arg0, char *arg1)
{
    u32 temp;
    if (arg1 == 0) {
        return 0;
    }
    if (func_08822BC4(arg1) >= 0x80U) {
        return 0;
    }
    func_08822B3C(arg0->unk_0C, arg1);
    temp = func_08822BC4(arg0->unk_0C);
    arg0->unk_9C = temp - func_0893D560(arg0->unk_0C);
    return 1;
}
