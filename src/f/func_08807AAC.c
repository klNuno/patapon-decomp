#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x40];
    s32 unk_44;
} Sub;

typedef struct {
    Sub *unk_00;
    void *unk_04;
    u8 unk_08[4];
} Obj;

void func_0880416C(void *);
void func_08807B2C(void *, s16);
extern u8 D_08A443F4[];
extern u8 D_08A44400[];

Obj *func_08807AAC(Obj *arg0, s32 arg1) {
    if (arg0 != NULL) {
        Sub *temp;
        u8 *temp2;
        arg0->unk_04 = D_08A443F4;
        arg0->unk_00->unk_00 = D_08A44400;
        temp = arg0->unk_00;
        temp2 = arg0->unk_08;
        temp->unk_44 = (u32)temp2 - (u32)temp;
        if (arg1 != 0) {
            func_08807B2C(temp2, 0);
        }
        if ((s16)arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
