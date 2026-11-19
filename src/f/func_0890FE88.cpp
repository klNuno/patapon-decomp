#include "common.h"

extern "C" {

class Unk {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40(s32 *, void *);
};

typedef struct {
    u8 pad_00[0x8F0];
    Unk unk_8F0;
} Unk2;

void func_0890FE88(Unk2 *arg0, s32 arg1)
{
    s32 temp = arg1;
    arg0->unk_8F0.unk_40(&temp, NULL);
}

}
