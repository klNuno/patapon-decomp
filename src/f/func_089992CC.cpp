#include "common.h"

extern "C" {

class Unk_089992CC {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18(f32);
};

typedef struct {
    u8 pad_00[0x8D0];
    u8 unk_8D0;
} Unk_089992CC_2;

typedef struct {
    u8 pad_00[0x6D2E8];
    Unk_089992CC *unk_6D2E8;
} Unk_089992CC_3;

void func_089992CC(Unk_089992CC_3 *arg0)
{
    Unk_089992CC *temp = arg0->unk_6D2E8;

    if (temp != NULL) {
        temp->unk_18(0.25f);
        ((Unk_089992CC_2 *)arg0->unk_6D2E8)->unk_8D0 = 0;
        arg0->unk_6D2E8 = NULL;
    }
}

}
