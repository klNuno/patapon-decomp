#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} Unk8DC4;

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
    u8 pad_0C[0x8DB4];
    s32 unk_8DC0;
    Unk8DC4 unk_8DC4;
} Unk;

extern u8 D_08A47DA4[];
void func_08961998(Unk *);
void func_08967A30(Unk *);

Unk *func_08967804(Unk *arg0) {
    Unk8DC4 *temp;

    func_08961998(arg0);
    arg0->unk_08 = D_08A47DA4;
    arg0->unk_8DC0 = 0;
    temp = &arg0->unk_8DC4;
    temp->unk_00 = 0;
    temp->unk_04 = 0;
    temp->unk_08 = 0;
    temp->unk_0C = 0;
    func_08967A30(arg0);
    return arg0;
}
