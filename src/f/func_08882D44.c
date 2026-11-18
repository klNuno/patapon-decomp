#include "common.h"

typedef struct { u8 pad_00[0x10]; } E;
typedef struct {
    u8 pad_00[0x10];
    f32 unk_10, unk_14, unk_18;
} T;

f32 func_0885606C(f32);
f32 func_08856234(f32);
extern E D_089F9AE0[];
extern E D_089F9B00[];
extern char D_08AD1D2C[];
extern s32 D_08AD227C[];
void func_0885A4E4(char *, s32, E *);
void func_0885A58C(char *);
void func_0885A610(char *arg0, f32 fparg0, f32 fparg1, f32 fparg2);

void func_08882D44(T *arg0, s32 arg1) {
    u32 i;
    f32 temp;
    f32 x, y;

    if (arg1 != 0) {
        func_0885A4E4(D_08AD1D2C, 2, &D_089F9AE0[(u8)arg1]);
    } else {
        func_0885A4E4(D_08AD1D2C, 2, &D_089F9B00[D_08AD227C[0]]);
    }
    i = 0;
    do {
        temp = 1.0471976f * (f32)(i % 6U);
        x = func_0885606C(temp);
        y = func_08856234(temp);
        func_0885A610(D_08AD1D2C, arg0->unk_10 + x * arg0->unk_18,
                      arg0->unk_14 + y * arg0->unk_18, 0.0f);
        i++;
    } while (i < 7U);
    func_0885A58C(D_08AD1D2C);
}
