#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x2FEF4];
    u8 unk_2FEF4[0x22D4];
} Unk;

typedef struct {
    u8 pad_00[0x1498];
    Unk *unk_1498;
    u8 pad_149C[4];
    void *unk_14A0;
} Unk2;

void func_0881F120(void *, void *, s32);

void func_088773E0(Unk2 *arg0)
{
    Unk *temp = arg0->unk_1498;
    void *temp2 = arg0->unk_14A0;
    if (temp != NULL && temp2 != NULL) {
        func_0881F120(temp2, temp->unk_2FEF4, 0x22D4);
    }
}

}
