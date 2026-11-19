#include "common.h"

extern "C" {

class Unk_088F3AEC {
public:
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual f32 *unk_28();
};

typedef struct {
    u8 pad_00[8];
    Unk_088F3AEC *unk_08;
} Unk_088F3AEC_2;

s32 func_088F3AEC(void *arg0, Unk_088F3AEC_2 *arg1, Unk_088F3AEC_2 *arg2)
{
    Unk_088F3AEC *temp = arg1->unk_08;
    Unk_088F3AEC *temp2 = arg2->unk_08;
    f32 temp3 = *temp->unk_28();
    f32 temp5 = *temp2->unk_28();
    s32 temp4 = 1;

    if (!(temp3 < temp5)) {
        temp4 = 0;
    }
    return temp4;
}

}
