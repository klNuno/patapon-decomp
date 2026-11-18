#include "common.h"

typedef struct {
    u8 unk_00[0x20];
    s32 unk_20;
} E_088766F0;

typedef struct {
    E_088766F0 unk_00;
    u8 pad_24[4];
    s32 unk_28;
    s32 unk_2C;
} F_088766F0;

typedef struct {
    u8 unk_00[0x20];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
    s32 unk_40;
    s32 unk_44;
    u8 unk_48;
    u8 unk_49;
    u8 unk_4A;
    u8 unk_4B;
    s16 unk_4C;
    s16 unk_4E;
    E_088766F0 unk_50;
    F_088766F0 unk_74[3];
} T_088766F0;

void func_0881F5C0(void *, s32, s32);
void func_08822B3C(char *, char *);
extern char D_089DD524[];

T_088766F0 *func_088766F0(T_088766F0 *arg0) {
    F_088766F0 *p;

    arg0->unk_24 = -1;
    arg0->unk_50.unk_20 = 0;
    arg0->unk_50.unk_00[0] = 0;
    p = arg0->unk_74;
    do {
        p->unk_00.unk_20 = 0;
        p->unk_00.unk_00[0] = 0;
        p++;
    } while (p < &arg0->unk_74[3]);
    func_0881F5C0(arg0, 0, 0x20);
    func_08822B3C((char *)arg0->unk_00, D_089DD524);
    arg0->unk_20 = -1;
    arg0->unk_28 = 0;
    arg0->unk_2C = 0;
    arg0->unk_30 = 0;
    arg0->unk_34 = 0;
    arg0->unk_38 = 1;
    arg0->unk_3C = 0;
    arg0->unk_40 = 0;
    arg0->unk_44 = 0;
    arg0->unk_48 = arg0->unk_49 = arg0->unk_4A = arg0->unk_4B = 0xFF;
    arg0->unk_4C = -1;
    arg0->unk_4E = -1;
    func_0881F5C0(arg0->unk_74, 0, 0x90);
    arg0->unk_74[0].unk_28 = -1;
    arg0->unk_74[0].unk_2C = -1;
    arg0->unk_74[1].unk_28 = -1;
    arg0->unk_74[1].unk_2C = -1;
    arg0->unk_74[2].unk_28 = -1;
    arg0->unk_74[2].unk_2C = -1;
    return arg0;
}
