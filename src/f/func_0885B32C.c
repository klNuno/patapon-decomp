#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    char unk_0C[0x98];
    s32 unk_A4;
} T;

void func_08822B3C(char *, char *);
u32 func_08822BC4(char *);
s32 func_0893D560(char *);

s32 func_0885B32C(T *arg0, char *arg1)
{
    char *p = arg1;
    T *q = arg0;
    u32 temp;

    if (p == NULL) {
        return 0;
    }
    if (func_08822BC4(p) >= 0x80U) {
        return 0;
    }
    func_08822B3C(q->unk_0C, p);
    temp = func_08822BC4(q->unk_0C);
    q->unk_A4 = temp - func_0893D560(q->unk_0C);
    return 1;
}
