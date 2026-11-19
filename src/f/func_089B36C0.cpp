#include "common.h"

class V {
public:
    u8 pad_00[0x58];
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10();
    virtual void func_14();
    virtual void func_18();
    virtual void func_1C();
    virtual void func_20();
    virtual void func_24();
};

struct G {
    V **unk_00;
    u32 unk_04;
    u8 unk_08;
};

struct T {
    u8 pad_00[0x48];
    G unk_48;
};

extern "C" {
void func_089B36C0(T *arg0) {
    G *temp;
    u32 temp1;
    u32 temp0;

    arg0->unk_48.unk_08 = 0;
    temp1 = 0;
    if (arg0->unk_48.unk_04 != 0) {
        temp0 = 0;
        temp = &arg0->unk_48;
        do {
            (*(V **)((u8 *)temp->unk_00 + temp0))->func_24();
            ++temp1;
            temp0 += sizeof(V *);
        } while (temp1 < arg0->unk_48.unk_04);
    }
}
}
