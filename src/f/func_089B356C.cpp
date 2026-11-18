#include "common.h"

extern "C" {

class C_089B356C {
public:
    C_089B356C *unk_00;
    u8 pad_04[0x4C];
    u8 unk_50;
    u8 pad_51[0x7];
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10();
    virtual void func_14();
    virtual void func_18();
    virtual void func_1C();
    virtual void func_20(u8);
};

void func_089B356C(C_089B356C *arg0, u8 arg1) {
    if (arg0->unk_50 == 1 && arg1 == 0) {
        if (arg0->unk_00 != NULL) {
            arg0->unk_00->unk_50 = 1;
            arg0->func_20(arg0->unk_00->unk_50);
        }
    } else if (arg0->unk_50 == 0 && arg1 == 1) {
        if (arg0->unk_00 != NULL) {
            arg0->unk_00->unk_50 = 0;
            arg0->func_20(arg0->unk_00->unk_50);
        }
    }
    arg0->unk_50 = arg1;
}

}
