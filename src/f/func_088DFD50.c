#include "common.h"

typedef struct {
    u8 pad_00[0x8110];
    u8 unk_8110[0x1B1B0 - 0x8110];
    u8 unk_1B1B0[0x1B5F8 - 0x1B1B0];
    u8 unk_1B5F8[0x2BE50 - 0x1B5F8];
    u8 unk_2BE50[0x2FF00 - 0x2BE50];
    s32 unk_2FF00;
} T;

extern void *D_08AD1E28[];
extern char *D_089FC420[];
extern char *D_089FC434[];
extern char *D_089FC44C[];
extern char *D_089FC464[];

s32 *func_08868F6C(void *, s32, s32);
s32 func_0888B03C(s32 *, char *);
void func_088BC764(T *, s32, s32);
void func_088E0910(void *, s32, s32);
void func_088E272C(void *, void *, s32);
void func_088F6D50(void *, void *, s32);
void func_0898F890(void *, void *, s32);
void func_088BCC78(T *, s32, s32, s32, s32);

void func_088DFD50(T *arg0, s32 arg1, s32 arg2) {
    s32 sp2C;

    sp2C = *func_08868F6C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 4, 0);
    func_088BC764(arg0, func_0888B03C(&sp2C, D_089FC420[0]), func_0888B03C(&sp2C, D_089FC434[0]));
    func_088E0910(arg0->unk_8110, func_0888B03C(&sp2C, D_089FC44C[0]), func_0888B03C(&sp2C, D_089FC464[0]));
    func_088E272C(arg0->unk_1B1B0, arg0->unk_8110, arg0->unk_2FF00);
    func_088F6D50(arg0->unk_1B5F8, arg0->unk_8110, arg0->unk_2FF00);
    func_0898F890(arg0->unk_2BE50, arg0->unk_8110, arg0->unk_2FF00);
    func_088BCC78(arg0, arg1, arg2, 0, 0);
}
