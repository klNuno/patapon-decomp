#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
    s32 unk_04;
} E_08853450;

typedef struct {
    E_08853450 unk_00[0x23];
} R_08853450;

typedef struct {
    u8 pad_00[0x10];
    u32 unk_10;
    u8 pad_14[0x84];
    R_08853450 unk_98[2];
    u8 pad_2C8[0x98];
    s32 unk_360;
} S_08853450;

void *func_08853450(S_08853450 *, s32);
void func_08820C24(char *, ...);
u64 func_089AB994(f32);

extern char D_089F8830[];
extern char D_089F8834[];
extern char D_089F8840[];
extern char D_089F8850[];
extern char D_089F8860[];
extern char D_089F8870[];
extern char D_089F8884[];
extern char D_089F8898[];
extern char D_089F88A8[];
extern char D_089F88BC[];
extern char D_089F88D0[];
extern char D_089F88D8[];
extern char D_089F88DC[];

void func_0885369C(S_08853450 *arg0, s32 arg1) {
    E_08853450 *e;
    void *p;
    u8 temp;

    if (arg0->unk_10 & 2) {
        e = &arg0->unk_98[arg0->unk_360].unk_00[arg1];
        p = func_08853450(arg0, arg1);
        temp = ((R_08853450 *)((u8 *)arg0 + arg0->unk_360 * sizeof(R_08853450)))->unk_00[arg1 + 0x13].unk_00;
        func_08820C24(D_089F8830);
        func_08820C24(D_089F8834, arg1);
        switch (temp) {
        case 0:
            func_08820C24(D_089F8840);
            break;
        case 1:
            func_08820C24(D_089F8850);
            break;
        case 2:
            func_08820C24(D_089F8860);
            break;
        case 4:
            func_08820C24(D_089F8870, e->unk_04);
            break;
        case 8:
            func_08820C24(D_089F8884, e->unk_04);
            break;
        case 0x10:
            func_08820C24(D_089F8898);
            break;
        case 0x20:
            func_08820C24(D_089F88A8, e->unk_04);
            break;
        case 0x40:
            func_08820C24(D_089F88BC, e->unk_04);
            break;
        }
        if (temp & 0x70) {
            func_08820C24(D_089F88D0, func_089AB994(*(f32 *)p));
        } else {
            func_08820C24(D_089F88D8, *(s32 *)p);
        }
        func_08820C24(D_089F88DC);
    }
}
