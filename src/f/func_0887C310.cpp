#include "common.h"

extern "C" {
s32 func_08860820(void *, s32);
extern void *D_08A8812C[];

class UnkMember {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
};

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x5C78];
    UnkMember unk_5C80;
} UnkObject;

s32 func_0887C310(UnkObject *arg0)
{
    if (arg0->unk_04 != 0) {
        arg0->unk_5C80.unk_0C();
    }
    return (func_08860820(D_08A8812C[0] != NULL ? D_08A8812C[0] : NULL, 0) != 0) ^ 1;
}
}
