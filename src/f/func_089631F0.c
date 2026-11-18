#include "common.h"

typedef struct {
    u8 pad_00[0x20];
} E_089631F0;

typedef struct {
    u8 pad_00[0x10];
} F_089631F0;

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} M_089631F0;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x10];
    F_089631F0 unk_20[3];
    E_089631F0 unk_50[3];
    M_089631F0 unk_B0;
    M_089631F0 unk_D8;
} S_089631F0;

void func_0880416C(void *);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0896336C(void *, void *);
void func_089633C4(void *, void *);
void func_089633CC(void *);
void func_08963760(void *);
void func_08963880(void *);
void func_08963890(void *);
void func_08964564(void *, s32);
void func_089645F8(void *, s32);
extern u8 D_08A449F4[];
extern u8 D_08A47BE4[];
extern u8 D_08A47BF0[];

S_089631F0 *func_089631F0(S_089631F0 *arg0, s16 arg1) {
    s32 i;
    E_089631F0 *temp;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A47BF0;
        func_08963890(&arg0->unk_D8);
        func_08963890(&arg0->unk_B0);
        func_08963880(arg0->unk_10);
        func_08963760(&arg0->unk_B0);
        func_08963760(&arg0->unk_D8);
        for (i = 0; i < 3; i++) {
            temp = &arg0->unk_50[i];
            func_089633CC(temp);
            func_089633C4(temp, &arg0->unk_20[i]);
            func_0896336C(&arg0->unk_D8, temp);
        }
        func_08963890(&arg0->unk_D8);
        if (&arg0->unk_D8 != NULL) {
            arg0->unk_D8.unk_24 = D_08A47BE4;
            func_08963760(&arg0->unk_D8);
            func_08964564(&arg0->unk_D8, -1);
        }
        if (&arg0->unk_B0 != NULL) {
            arg0->unk_B0.unk_24 = D_08A47BE4;
            func_08963760(&arg0->unk_B0);
            func_08964564(&arg0->unk_B0, -1);
        }
        func_08804000(arg0->unk_50, func_08964564, 0x20, 3);
        func_08804000(arg0->unk_20, func_089645F8, 0x10, 3);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A449F4;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
