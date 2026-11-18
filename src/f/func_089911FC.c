#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 *unk_0C;
} Head;

typedef struct {
    u32 unk_00;
    s8 unk_04[0x21];
} Str;

typedef struct {
    Head unk_00;
    Str unk_10;
} T;

void func_0881F120(void *, void *, s32);
extern s8 D_08A066D1[];

T *func_089911FC(T *arg0, T *arg1) {
    u32 n;

    arg0->unk_00.unk_00 = arg1->unk_00.unk_00;
    arg0->unk_00.unk_04 = arg1->unk_00.unk_04;
    arg0->unk_00.unk_08 = arg1->unk_00.unk_08;
    arg0->unk_00.unk_0C = arg1->unk_00.unk_0C;
    if (arg0->unk_00.unk_08 != 0) {
        *arg0->unk_00.unk_0C += 1;
    }
    n = arg1->unk_10.unk_00;
    if (n > 0x20U) {
        n = 0x20;
    }
    if (&arg0->unk_10 != &arg1->unk_10) {
        func_0881F120(arg0->unk_10.unk_04, arg1->unk_10.unk_04, n);
        arg0->unk_10.unk_00 = n;
        arg0->unk_10.unk_04[n] = D_08A066D1[0];
    }
    return arg0;
}
