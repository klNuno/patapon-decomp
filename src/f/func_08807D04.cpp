#include "common.h"

extern "C" {

class Base_08807D04 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual s32 unk_1C();
};

class Obj_08807D04 : public Base_08807D04 {
public:
    u8 pad_04[0x35];
    u8 unk_39;
    u8 pad_3A[1];
    u8 unk_3B;
};

Obj_08807D04 *func_08807D04(Obj_08807D04 *arg0, s32 arg1, s32 arg2) {
    if (arg0->unk_1C() < 0) {
        return NULL;
    }
    arg0->unk_39 = !(arg1 == 0 && arg2 == 0);
    if (arg0->unk_39 == 0) {
        arg0->unk_3B = 0;
    }
    return arg0;
}

}
