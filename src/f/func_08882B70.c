#include "common.h"

typedef struct {
    u8 pad_00[0x10];
} E;

typedef struct {
    u8 pad_00[0x10];
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
} T;

extern E D_089F9AE0[];
extern E D_089F9B00[];
extern char D_08AD1D2C[];
extern s32 D_08AD227C[];

void func_0885A4E4(char *, s32, E *);
void func_0885A58C(char *);
void func_0885A610(char *arg0, f32 fparg0, f32 fparg1, f32 fparg2);

void func_08882B70(T *arg0, s32 arg1) {
    if (arg1 != 0) {
        func_0885A4E4(D_08AD1D2C, 1, &D_089F9AE0[(u8)arg1]);
    } else {
        func_0885A4E4(D_08AD1D2C, 1, &D_089F9B00[D_08AD227C[0]]);
    }
    func_0885A610(D_08AD1D2C, arg0->unk_10, arg0->unk_14, 0.0f);
    func_0885A610(D_08AD1D2C, arg0->unk_18, arg0->unk_1C, 0.0f);
    func_0885A58C(D_08AD1D2C);
}
