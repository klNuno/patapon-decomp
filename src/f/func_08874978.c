#include "common.h"

typedef struct {
    u8 pad_00[4];
    char unk_04[0x68];
    s32 unk_6C;
} T;

typedef struct {
    u8 pad_00[0x58];
    void *unk_58;
} T1;

void *func_08807190(s32, void *);
void func_0886A528(void *, void *);
s32 func_088749F0(char *arg0, s32 arg1);
s32 func_08874A08(char *arg0);
void func_088CAC40(void *, s32);

void func_08874978(T *arg0, T1 *arg1)
{
    void *temp;

    func_088CAC40(arg1->unk_58, 0);
    temp = func_08807190(0x60, (void *)func_088749F0(arg0->unk_04, func_08874A08(arg0->unk_04)));
    if (temp != NULL) {
        func_0886A528(temp, arg1);
    }
    arg0->unk_6C++;
}
