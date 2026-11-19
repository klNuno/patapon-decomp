#include "common.h"

extern "C" {
class S {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(void *);
};

struct T {
    u8 pad_00[0x24];
    S *unk_24;
    void *unk_28;
};

void func_08827C2C(void *);
void func_08827CAC(void *, void *, s32);
void func_08827DA8(void *);
void func_0892E048(void);

void func_0892E1E8(T *arg0)
{
    void *temp = arg0->unk_28;

    if (temp != NULL) {
        if (temp != NULL) {
            func_08827CAC(arg0, (void *)func_0892E048, 0);
            func_08827DA8(arg0);
        }
        func_08827C2C(arg0);
        arg0->unk_24->unk_10(arg0->unk_28);
        arg0->unk_28 = NULL;
        arg0->unk_24 = NULL;
    }
}
}
