#include "common.h"

extern "C" {
class S {
public:
    u8 pad_00[0x54];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
};

struct T {
    u8 pad_00[0x54];
    void *unk_54;
};

void func_0880416C(void *);
extern u8 D_08A44B58[];
extern u8 D_08A46424[];

T *func_088DF644(T *arg0, s16 arg1)
{
    T *temp = arg0;

    if (temp != NULL) {
        temp->unk_54 = D_08A46424;
        ((S *)arg0)->unk_14();
        if (temp != NULL) {
            temp->unk_54 = D_08A44B58;
        }
        if (arg1 > 0) {
            func_0880416C(temp);
        }
    }
    return temp;
}
}
