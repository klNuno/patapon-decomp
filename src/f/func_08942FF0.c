#include "common.h"

typedef struct N N;

typedef struct {
    u8 pad_00[0x16D4];
    u8 unk_16D4;
    u8 pad_16D5[3];
    s32 unk_16D8;
    s32 unk_16DC;
} T;

extern void *D_08AD1E28[];
extern void *D_08AD8DD8[];
void func_0886891C(void *, s32);
void func_0892E524(N *arg0);
void func_08883444(void);

void func_08942FF0(T *arg0)
{
    if (arg0->unk_16D4 != 0) {
        func_0886891C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 6);
        arg0->unk_16D4 = 0;
    }
    arg0->unk_16D8 = 0;
    arg0->unk_16DC = -1;
    func_0892E524(D_08AD8DD8[0] != NULL ? (N *)D_08AD8DD8[0] : NULL);
    func_08883444();
}
