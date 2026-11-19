#include "common.h"

extern "C" {

class V {
public:
    virtual void unk_08();
    virtual void unk_0C();
};

typedef struct {
    u8 pad_00[8];
    V unk_08;
    u8 pad_0C[0xD94];
    u8 unk_DA0;
} T;

extern void func_088A1E80(s32);

void func_0887FEBC(T *arg0)
{
    func_088A1E80((s32)&arg0->unk_DA0);
    arg0->unk_08.unk_0C();
}

}
