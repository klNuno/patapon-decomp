#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} C;

typedef struct N_08882F6C N_08882F6C;

typedef struct T2 {
    u8 pad_00[0x170];
    C unk_170;
    u8 pad_178[0x12C];
    struct T2 *unk_2A4;
    u8 pad_2A8[0x50];
    s32 *unk_2F8;
    u8 pad_2FC[0xA4];
    u8 unk_3A0;
    u8 pad_3A1[0x6B];
    N_08882F6C *unk_40C;
    u8 pad_410[0x1BD];
    u8 unk_5CD;
    u8 unk_5CE;
} T2;

typedef struct {
    u8 pad_00[0xB4];
    s32 unk_B4;
} R;

void func_08882F6C(N_08882F6C *, u8);
s32 func_0892AE88(s32 *);
void func_0892C670(T2 *, s32);
void func_08933218(C *);

void func_0892C090(T2 *arg0) {
    N_08882F6C *temp;
    T2 *temp1;
    arg0->unk_3A0 = 0;
    temp = arg0->unk_40C;
    if (temp != NULL) {
        func_08882F6C(temp, arg0->unk_5CE);
    }
    if (arg0->unk_5CD == 1) {
        temp1 = arg0->unk_2A4;
        arg0->unk_170.unk_00 = temp1->unk_170.unk_00;
        arg0->unk_170.unk_04 = temp1->unk_170.unk_04;
        func_08933218(&arg0->unk_170);
    }
    arg0->unk_2A4 = NULL;
    func_0892C670(arg0, ((R *)func_0892AE88(arg0->unk_2F8))->unk_B4);
}
