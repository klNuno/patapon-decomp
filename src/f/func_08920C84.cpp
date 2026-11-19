#include "common.h"

extern "C" {
extern s32 func_08924114(s32, s32);
void func_08920CFC(void *, s32, f32, f32);

class S {
public:
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
    virtual s32 unk_48();
};

struct T {
    u8 pad_00[0x10];
    f32 unk_10;
    u8 pad_14[0x40];
    s32 unk_54;
    u8 pad_58[0x24];
    u8 unk_7C;
};

void func_08920C84(T *arg0, s32 arg1) {
    u8 flag = arg0->unk_7C;
    s32 temp = arg1;
    T *obj = arg0;
    if (flag != 0) {
        if (obj->unk_54 >= 0 && ((S *)obj)->unk_48() == 0) {
            func_08920CFC(obj, 0, obj->unk_10, 0.0f);
        }
    }
    func_08924114((s32)obj, temp);
}
}
