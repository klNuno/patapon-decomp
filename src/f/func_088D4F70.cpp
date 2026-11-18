#include "common.h"

extern "C" {

class V_088D4F70 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
};

class S_088D4F70 : public V_088D4F70 {
public:
    u8 pad_04[0x70C];
    u32 unk_710;
    u32 unk_714;
    s32 unk_718;
};

void func_088D4F70(S_088D4F70 *arg0, s32 arg1) {
    arg0->unk_710 += arg1;
    if (arg0->unk_710 > arg0->unk_714) {
        switch (arg0->unk_718) {
        case 2:
        case 3:
            arg0->unk_718 = 4;
            break;
        case 5:
            arg0->unk_24();
            arg0->unk_718 = 1;
            break;
        }
        arg0->unk_710 = arg0->unk_714;
    }
}

}
