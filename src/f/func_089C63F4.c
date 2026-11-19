#include "common.h"

typedef struct {
    u8 pad_00[0x48];
    void *unk_48;
} S;

S *func_089C63F4(S *arg0, s32 arg1)
{
    u32 temp0 = (u32)(arg1 * sizeof(S));
    S *temp;
    temp0 += (u32)arg0;
    temp = (S *)temp0;
    if (temp->unk_48 == NULL) {
        temp = NULL;
    }
    return temp;
}
