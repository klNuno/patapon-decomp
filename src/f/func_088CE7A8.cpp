#include "common.h"

extern "C" {
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
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44();
};

struct S : T {
    u8 pad_54[0x14BC];
    u8 unk_1510;
};

extern void *D_08A8812C[];
void func_08860820(void *, s32);

void func_088CE7A8(S *arg0) {
    u8 temp[0x40];
    u8 *temp0;
    s32 temp1;
    void *temp2;

    arg0->unk_44();
    temp2 = D_08A8812C[0];
    func_08860820(temp2 != NULL ? temp2 : NULL, 0);
    temp0 = temp;
    temp1 = sizeof(temp);
    if (temp0 != NULL) {
        do {
            *temp0++ = 0;
        } while (--temp1);
    }
    arg0->unk_1510 = 0;
}
}
