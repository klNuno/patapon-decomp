#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} T;

typedef struct {
    u8 pad_00[0x42820];
    s32 unk_42820;
} G;

extern void *D_08AD1E28[];
s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_088DDF78(s32, s32);
void func_088769AC(s32);

void func_088FDA48(T *arg0, void *arg1) {
    s32 temp = func_08852EB8(arg1);

    if (temp == 0) {
        G *temp1;

        func_088DDF78(arg0->unk_10, 4);
        func_08852EDC(arg1, temp + 1);
        temp1 = D_08AD1E28[0] != NULL ? (G *)D_08AD1E28[0] : NULL;
        func_088769AC(temp1->unk_42820);
    }
}
