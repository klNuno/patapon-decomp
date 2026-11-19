#include "common.h"

typedef struct Unk {
    struct Unk *volatile unk_00;
    struct Unk *volatile unk_04;
    u8 unk_08[1];
} Unk;

typedef struct {
    u8 pad_00[8];
    Unk *unk_08;
    s32 unk_0C;
} Unk1;

void *func_0897B1D8(Unk1 *arg0, Unk *arg1)
{
    Unk *temp;
    Unk *temp2;
    Unk *temp3;

    temp = arg0->unk_08->unk_00;
    if (temp != arg0->unk_08) {
        temp2 = temp->unk_00;
        if (temp2 != NULL) {
            temp2->unk_04 = temp->unk_04;
        }
        temp2 = temp->unk_04;
        if (temp2 != NULL) {
            temp2->unk_00 = temp->unk_00;
            temp->unk_00 = NULL;
        } else {
            temp->unk_00 = NULL;
        }
        temp->unk_04 = NULL;
    } else {
        temp = NULL;
    }
    temp3 = arg1->unk_04;
    arg0->unk_0C++;
    temp3->unk_00 = temp;
    arg1->unk_04 = temp;
    temp->unk_00 = arg1;
    temp->unk_04 = temp3;
    return temp->unk_08;
}
