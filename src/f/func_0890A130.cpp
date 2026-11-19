#include "common.h"

extern "C" {
class O {
public:
    u8 pad_00[0x28];
    virtual void unk_08(s16);
};

typedef struct {
    u8 pad_00[0x100];
    O *unk_100;
    s32 unk_104;
} T;

void func_0890A130(T *arg0)
{
    O *temp = arg0->unk_100;
    if (temp != NULL) {
        temp->unk_08(-1);
        arg0->unk_100 = NULL;
    }
    arg0->unk_104 = 0;
}
}
