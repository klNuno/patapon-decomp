#include "common.h"

typedef struct {
    u8 unk_00[0x24];
    void *unk_24;
} L_08963A40;

typedef struct {
    u8 pad_00[0x10];
} A_08963A40;

typedef struct {
    u8 pad_00[0x20];
} B_08963A40;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x10];
    A_08963A40 unk_20[3];
    B_08963A40 unk_50[3];
    L_08963A40 unk_B0;
    L_08963A40 unk_D8;
} T_08963A40;

void func_0880416C(void *);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_089640E0(void *);
void func_089640D0(void *);
void func_08963FB0(void *);
void func_08963C1C(void *);
void func_08963C14(void *, void *);
void func_08963BBC(void *, void *);
void func_089649B8(void *, s32);
void func_088D23FC(void *, s32);
extern u8 D_08A47C08[];
extern u8 D_08A47BC8[];
extern u8 D_08A449F4[];

T_08963A40 *func_08963A40(T_08963A40 *arg0, s16 arg1) {
    s32 i;
    B_08963A40 *p;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A47C08;
        func_089640E0(&arg0->unk_D8);
        func_089640E0(&arg0->unk_B0);
        func_089640D0(arg0->unk_10);
        func_08963FB0(&arg0->unk_B0);
        func_08963FB0(&arg0->unk_D8);
        for (i = 0; i < 3; i++) {
            p = &arg0->unk_50[i];
            func_08963C1C(p);
            func_08963C14(p, &arg0->unk_20[i]);
            func_08963BBC(&arg0->unk_D8, p);
        }
        func_089640E0(&arg0->unk_D8);
        if (&arg0->unk_D8 != NULL) {
            arg0->unk_D8.unk_24 = D_08A47BC8;
            func_08963FB0(&arg0->unk_D8);
            func_089649B8(&arg0->unk_D8, -1);
        }
        if (&arg0->unk_B0 != NULL) {
            arg0->unk_B0.unk_24 = D_08A47BC8;
            func_08963FB0(&arg0->unk_B0);
            func_089649B8(&arg0->unk_B0, -1);
        }
        func_08804000(arg0->unk_50, func_089649B8, 0x20, 3);
        func_08804000(arg0->unk_20, func_088D23FC, 0x10, 3);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A449F4;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
