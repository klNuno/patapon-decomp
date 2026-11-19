#include "common.h"

void *func_08807190(s32, void *);
void func_0886A528(void *, void *);
s32 func_0886A5F4(char *, s32);
s32 func_0886A60C(char *);
void func_088CAC40(void *, s32);

typedef struct {
    u8 pad_00[4];
    char unk_04[0xD88];
    s32 unk_D8C;
} S;

typedef struct {
    u8 pad_00[0x58];
    void *unk_58;
} T;

void func_0886A4B0(S *arg0, T *arg1) {
    S *obj = arg0;
    void *a = arg1->unk_58;
    T *temp = arg1;
    void *p;
    func_088CAC40(a, 0);
    p = func_08807190(0x60, (void *)func_0886A5F4(obj->unk_04, func_0886A60C(obj->unk_04)));
    if (p != NULL) {
        func_0886A528(p, temp);
    }
    obj->unk_D8C++;
}
