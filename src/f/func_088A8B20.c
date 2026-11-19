#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0C;
} S_0884EE1C;

extern u8 D_08A45B08[];
S_0884EE1C *func_0884EE1C(S_0884EE1C *, s32);

S_0884EE1C *func_088A8B20(S_0884EE1C *arg0)
{
    func_0884EE1C(arg0, 0);
    arg0->unk_00 = D_08A45B08;
    return arg0;
}
