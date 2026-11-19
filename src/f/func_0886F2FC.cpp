#include "common.h"

extern "C" {
class S {
    u8 pad_00[0x50];
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
};

typedef struct {
    u8 pad_00[0xC];
    S *unk_0C;
} T;

void func_0886F2FC(T *arg0)
{
    S *temp = arg0->unk_0C;
    if (temp != NULL) {
        temp->unk_1C();
    }
}
}
