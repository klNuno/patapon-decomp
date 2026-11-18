#include "common.h"

extern "C" {

class Base_08808214 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual s32 unk_1C();
};

class Obj_08808214 : public Base_08808214 {
public:
    u8 pad_04[0x32];
    u8 unk_36;
    u8 pad_37[1];
    u8 unk_38;
};

Obj_08808214 *func_08808214(Obj_08808214 *arg0, s32 arg1, s32 arg2) {
    if (arg0->unk_1C() < 0) {
        return NULL;
    }
    arg0->unk_36 = !(arg1 == 0 && arg2 == 0);
    if (arg0->unk_36 == 0) {
        arg0->unk_38 = 0;
    }
    return arg0;
}

}
