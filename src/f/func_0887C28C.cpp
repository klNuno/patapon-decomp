#include "common.h"

extern "C" {

class V {
public:
    u8 pad_00[0x1C];
    virtual void unk_08();
};

typedef struct {
    u8 pad_00[4];
    u32 unk_04;
    u8 pad_08[0x5C28];
    u8 unk_5C30;
    u8 pad_5C31[0x23];
    V unk_5C54;
} T;

void func_0887C28C(T *arg0)
{
    if (arg0->unk_5C30 != 0 && arg0->unk_04 != 0) {
        arg0->unk_5C54.unk_08();
    }
}

}
