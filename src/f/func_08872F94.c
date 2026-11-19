#include "common.h"

typedef struct {
    u8 pad_00[0x151C];
    s32 unk_151C;
} S;

extern void *D_08AD2070[];
s32 func_0887C240(void *);

s32 func_08872F94(S *arg0) {
    void *temp = D_08AD2070[0];
    s32 temp2;

    if ((u8)func_0887C240(temp != NULL ? temp : NULL) == 0) {
        return -1;
    }
    temp2 = arg0->unk_151C + 1;
    return temp2 > 10 ? 0 : (temp2 < 0 ? 10 : temp2);
}
