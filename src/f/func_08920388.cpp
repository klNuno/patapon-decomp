#include "common.h"

extern "C" {
void func_08880088(void *, s16);
void func_0891FA10(void *, s16);

struct T {
    u8 pad_00[8];
    u8 unk_08[0xC];
    u8 unk_14[0x28];
    u8 unk_3C[0x28];
};

class S {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(T *);
};

void func_08920388(T *arg0, S *arg1)
{
    T *temp = arg0;
    if (temp != NULL) {
        if (temp != NULL) {
            func_08880088(temp->unk_3C, -1);
            func_08880088(temp->unk_14, -1);
            func_0891FA10(temp->unk_08, -1);
        }
        arg1->unk_10(temp);
    }
}
}
