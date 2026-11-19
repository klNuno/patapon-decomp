#include "common.h"

extern "C" {
class V {
public:
    virtual void unk_08();
    virtual void unk_0C();
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    V unk_0C;
    u8 pad_10[0xD8C];
} E;

typedef struct {
    u8 pad_00[0xD9C];
    E unk_D9C[3];
} T;

void func_08926A9C(T *arg0)
{
    arg0->unk_D9C[0].unk_00 = 0;
    arg0->unk_D9C[0].unk_04 = 0;
    arg0->unk_D9C[0].unk_08 = 0;
    arg0->unk_D9C[0].unk_0C.unk_0C();
    arg0->unk_D9C[1].unk_00 = 0;
    arg0->unk_D9C[1].unk_04 = 0;
    arg0->unk_D9C[1].unk_08 = 0;
    arg0->unk_D9C[1].unk_0C.unk_0C();
    arg0->unk_D9C[2].unk_00 = 0;
    arg0->unk_D9C[2].unk_04 = 0;
    arg0->unk_D9C[2].unk_08 = 0;
    arg0->unk_D9C[2].unk_0C.unk_0C();
}
}
