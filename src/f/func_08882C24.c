#include "common.h"

typedef struct {
    u8 pad_00[0x10];
} E;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} T;

extern E D_089F9AE0[];
extern E D_089F9B00[];
extern char D_08AD1D2C[];
extern s32 D_08AD227C[];

void func_0885A4E4(char *, s32, E *);
void func_0885A58C(char *);
void func_0885A610(char *arg0, f32 fparg0, f32 fparg1, f32 fparg2);

void func_08882C24(T *arg0, s32 arg1) {
    f32 temp1;
    f32 temp0;
    f32 temp3;
    f32 temp2;
    temp0 = arg0->unk_00;
    temp1 = arg0->unk_04;
    temp2 = arg0->unk_08;
    temp3 = arg0->unk_0C;

    if (arg1 != 0) {
        func_0885A4E4(D_08AD1D2C, 2, &D_089F9AE0[(u8)arg1]);
    } else {
        func_0885A4E4(D_08AD1D2C, 2, &D_089F9B00[D_08AD227C[0]]);
    }
    func_0885A610(D_08AD1D2C, temp0, temp1, 0.0f);
    func_0885A610(D_08AD1D2C, temp2, temp1, 0.0f);
    func_0885A610(D_08AD1D2C, temp2, temp3, 0.0f);
    func_0885A610(D_08AD1D2C, temp0, temp3, 0.0f);
    func_0885A610(D_08AD1D2C, temp0, temp1, 0.0f);
    func_0885A58C(D_08AD1D2C);
}
