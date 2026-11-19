#include "common.h"

extern "C" {
class V {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
};

typedef struct {
    V **unk_00;
    s32 unk_04;
} T1;

typedef struct {
    u8 pad_00[0x28];
    T1 unk_28;
} T;

void func_089245C8(T *arg0)
{
    T1 *temp = &arg0->unk_28;
    V **temp1 = arg0->unk_28.unk_00;

    if ((u32)temp1 != (u32)(temp1 + arg0->unk_28.unk_04)) {
        s32 *temp2 = &arg0->unk_28.unk_04;
        do {
            (*temp1)->unk_14();
            temp1++;
        } while (temp1 != temp->unk_00 + *temp2);
    }
}
}
