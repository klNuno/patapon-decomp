#include "common.h"

extern "C" {

class Unk1 {
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
    virtual void unk_40(s32, s32, s32);
};

typedef struct {
    u8 pad_00[0x1504];
    s32 unk_1504;
    Unk1 *unk_1508;
} Unk2;

void func_0886E590(Unk2 *arg0, s32 arg1, s32 arg2) {
    Unk1 *temp = arg0->unk_1508;
    if (temp != NULL) {
        temp->unk_40(arg0->unk_1504, arg1, arg2);
    }
}

}
