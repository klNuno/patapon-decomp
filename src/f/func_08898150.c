#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S;

typedef struct {
    u8 pad_00[0x114];
    S *unk_114;
} T;

void func_088FB230(void);
void func_0892B788(char *, void (*)(void), s32, T *);
void func_0892C02C(char *, s32);

void func_08898150(T *arg0, char *arg1) {
    if (arg1 != NULL) {
        func_0892B788(arg1, func_088FB230, 2, arg0);
        func_0892C02C(arg1, arg0->unk_114->unk_10);
    }
}
