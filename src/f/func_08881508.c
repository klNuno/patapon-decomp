#include "common.h"

typedef struct {
    u8 unk_00[0x24];
    void *unk_24;
} L_08881508;

typedef struct {
    u8 pad_00[0x24];
} A_08881508;

typedef struct {
    u8 pad_00[0x20];
} B_08881508;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x10];
    A_08881508 unk_20[0x100];
    B_08881508 unk_2420[0x100];
    L_08881508 unk_4420;
    L_08881508 unk_4448;
} T_08881508;

void func_0880416C(void *);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_08881BA8(void *);
void func_08881B98(void *);
void func_08881A78(void *);
void func_088816E4(void *);
void func_088816DC(void *, void *);
void func_08881684(void *, void *);
void func_08882058(void *, s32);
void func_088820EC(void *, s32);
extern u8 D_08A45398[];
extern u8 D_08A4538C[];
extern u8 D_08A449F4[];

T_08881508 *func_08881508(T_08881508 *arg0, s16 arg1) {
    s32 i;
    B_08881508 *p;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A45398;
        func_08881BA8(&arg0->unk_4448);
        func_08881BA8(&arg0->unk_4420);
        func_08881B98(arg0->unk_10);
        func_08881A78(&arg0->unk_4420);
        func_08881A78(&arg0->unk_4448);
        for (i = 0; i < 0x100; i++) {
            p = &arg0->unk_2420[i];
            func_088816E4(p);
            func_088816DC(p, &arg0->unk_20[i]);
            func_08881684(&arg0->unk_4448, p);
        }
        func_08881BA8(&arg0->unk_4448);
        if (&arg0->unk_4448 != NULL) {
            arg0->unk_4448.unk_24 = D_08A4538C;
            func_08881A78(&arg0->unk_4448);
            func_08882058(&arg0->unk_4448, -1);
        }
        if (&arg0->unk_4420 != NULL) {
            arg0->unk_4420.unk_24 = D_08A4538C;
            func_08881A78(&arg0->unk_4420);
            func_08882058(&arg0->unk_4420, -1);
        }
        func_08804000(arg0->unk_2420, func_08882058, 0x20, 0x100);
        func_08804000(arg0->unk_20, func_088820EC, 0x24, 0x100);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A449F4;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
