#include "common.h"

extern "C" {

extern s32 func_0886F32C(s32);
extern void *D_08AD1E28[];
void func_0886891C(void *, s32);

class T {
public:
    u8 pad_00[0x50];

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
    virtual void unk_3C(s32);
};

void func_089189EC(T *arg0) {
    void *temp;

    func_0886F32C((s32)arg0);
    temp = D_08AD1E28[0];
    func_0886891C(temp != NULL ? temp : NULL, 3);
    arg0->unk_3C(1);
}

}
