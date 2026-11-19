#include "common.h"

void func_088226BC(char *, char *, ...);
void func_088B3120(u8 *, s32, char *);
extern char D_089E49EC[];

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C[0x20];
    s32 *unk_2C;
} Unk00;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[8];
    f32 unk_18;
    f32 unk_1C;
    u8 unk_20[1];
} Unk01;

void func_088AE388(void *, s32, void *, u8 *, f32, f32);

s32 func_089096C0(Unk00 *arg0, Unk01 *arg1) {
    char temp[0x40];
    u8 temp2[0x80];
    u8 temp3[0x10];

    func_088226BC(temp, D_089E49EC, arg0->unk_0C, *arg0->unk_2C);
    func_088B3120(temp2, sizeof(temp2), temp);
    func_088AE388(temp3, arg1->unk_0C, arg1->unk_20, temp2, arg1->unk_18, arg1->unk_1C);
    return 0;
}
