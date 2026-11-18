#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} L08926C30;

typedef struct {
    u8 pad_00[0x20];
} E08926C30;

typedef struct {
    u8 pad_00[0x10];
} F08926C30;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x10];
    F08926C30 unk_20[8];
    E08926C30 unk_A0[8];
    L08926C30 unk_1A0;
    L08926C30 unk_1C8;
} T08926C30;

extern u8 D_08A46EF0[];
extern u8 D_08A46EE4[];
extern u8 D_08A449F4[];

void func_089272D0(L08926C30 *);
void func_089272C0(void *);
void func_089271A0(L08926C30 *);
void func_08926E0C(E08926C30 *);
void func_08926E04(E08926C30 *, F08926C30 *);
void func_08926DAC(L08926C30 *, E08926C30 *);
void func_08927754(void *, s32);
void func_08924CC0(void *, s32);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0880416C(void *);

T08926C30 *func_08926C30(T08926C30 *arg0, s16 arg1) {
    s32 i;
    E08926C30 *e;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A46EF0;
        func_089272D0(&arg0->unk_1C8);
        func_089272D0(&arg0->unk_1A0);
        func_089272C0(arg0->unk_10);
        func_089271A0(&arg0->unk_1A0);
        func_089271A0(&arg0->unk_1C8);
        for (i = 0; i < 8; i++) {
            e = &arg0->unk_A0[i];
            func_08926E0C(e);
            func_08926E04(e, &arg0->unk_20[i]);
            func_08926DAC(&arg0->unk_1C8, e);
        }
        func_089272D0(&arg0->unk_1C8);
        if (&arg0->unk_1C8 != NULL) {
            arg0->unk_1C8.unk_24 = D_08A46EE4;
            func_089271A0(&arg0->unk_1C8);
            func_08927754(&arg0->unk_1C8, -1);
        }
        if (&arg0->unk_1A0 != NULL) {
            arg0->unk_1A0.unk_24 = D_08A46EE4;
            func_089271A0(&arg0->unk_1A0);
            func_08927754(&arg0->unk_1A0, -1);
        }
        func_08804000(arg0->unk_A0, func_08927754, 0x20, 8);
        func_08804000(arg0->unk_20, func_08924CC0, 0x10, 8);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A449F4;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
