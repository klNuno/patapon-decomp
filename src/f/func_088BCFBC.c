#include "common.h"

typedef struct {
    u8 pad_00[0x58];
    s32 unk_58;
} T0;

typedef struct {
    u8 pad_00[0x4];
    char unk_04;
    u8 pad_05[0x3007];
    s32 unk_300C;
} T;

s32 func_088CAC40(s32, s32);
s32 func_088BCC70(char *arg0);
s32 func_088BCC58(char *arg0, s32 arg1);
s32 func_08807190(s32 arg0, s32 arg1);
void func_0886A528(void *, T0 *);

void func_088BCFBC(T *arg0, T0 *arg1) {
    void *temp;
    func_088CAC40(arg1->unk_58, 0);
    temp = (void *)func_08807190(0x60, func_088BCC58(&arg0->unk_04, func_088BCC70(&arg0->unk_04)));
    if (temp != NULL) {
        func_0886A528(temp, arg1);
    }
    ++arg0->unk_300C;
}
