#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} Unk0;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    Unk0 *unk_0C;
} Unk;

s32 func_0888B844(Unk *arg0) {
    s32 *temp2;
    s32 temp3;
    Unk0 *temp = arg0->unk_0C;
    if (temp != NULL) {
        temp2 = &temp->unk_08;
        if (temp->unk_08 != 0) {
            temp3 = *(volatile s32 *)&arg0->unk_08;
            return temp3 + *(volatile s32 *)temp2;
        }
    }
    return 0;
}
