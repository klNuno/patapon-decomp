#include "common.h"

extern "C" {
typedef struct {
    f32 unk_00[4];
} T;

typedef struct {
    T *unk_00;
    T unk_04[16];
    s32 unk_104;
} S;

void func_08977494(s32, T *);

void func_089761D4(S *arg0, T *arg1, s32 arg2) {
    if (arg1 != NULL && arg2 != 0) {
        arg0->unk_00 = arg1;
        arg0->unk_104 = arg2;
        T *a = arg0->unk_00;
        T *b = arg0->unk_04;
        arg0->unk_04[0] = a[0];
        arg0->unk_04[1] = a[1];
        arg0->unk_04[2] = a[2];
        arg0->unk_04[3] = a[3];
        arg0->unk_04[4] = a[4];
        arg0->unk_04[5] = a[5];
        arg0->unk_04[6] = a[6];
        arg0->unk_04[7] = a[7];
        arg0->unk_04[8] = a[8];
        arg0->unk_04[9] = a[9];
        arg0->unk_04[10] = a[10];
        arg0->unk_04[11] = a[11];
        arg0->unk_04[12] = a[12];
        arg0->unk_04[13] = a[13];
        arg0->unk_04[14] = a[14];
        arg0->unk_04[15] = a[15];
        func_08977494(arg2, b);
    }
}
}
