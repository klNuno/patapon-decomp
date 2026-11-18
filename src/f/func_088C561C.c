#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0x14BC];
    u8 unk_1510[0x4C0];
    u8 unk_19D0;
    u8 pad_19D1[3];
    s32 unk_19D4;
} T088C561C;

extern u8 D_08A45FA8[];

void func_0886E5CC(T088C561C *, s32);
void func_0886ECC8(void *, s32, s32, void (*)(void), void (*)(void), T088C561C *);
void func_0886F33C(T088C561C *, s32, s32);
void func_088C5920(void);
void func_088C5914(void);
void func_088C5868(void);
void func_088C585C(void);
void func_088C57C0(void);
void func_088C57B4(void);
void func_088C5714(void);
void func_088C5708(void);

T088C561C *func_088C561C(T088C561C *arg0, s32 arg1) {
    func_0886E5CC(arg0, arg1);
    arg0->unk_50 = D_08A45FA8;
    arg0->unk_19D0 = 0;
    arg0->unk_19D4 = -1;
    func_0886ECC8(arg0->unk_1510, 0, arg1, func_088C5920, func_088C5914, arg0);
    func_0886ECC8(arg0->unk_1510, 1, arg1, func_088C5868, func_088C585C, arg0);
    func_0886ECC8(arg0->unk_1510, 2, arg1, func_088C57C0, func_088C57B4, arg0);
    func_0886ECC8(arg0->unk_1510, 3, arg1, func_088C5714, func_088C5708, arg0);
    func_0886F33C(arg0, 1, 1);
    return arg0;
}
