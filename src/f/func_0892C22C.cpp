#include "common.h"

extern "C" {
class T {
    u8 pad_00[0x16C];
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
    virtual void unk_48();
    virtual void unk_4C();
    virtual void unk_50();
    virtual void unk_54();
    virtual void unk_58();
    virtual void unk_5C();
    virtual void unk_60();
    virtual void unk_64();
    virtual void unk_68();
};
class U : public T {
public:
    u8 pad_170[0x268];
    u8 unk_3D8;
};
extern s32 func_08932CD8(U *);
extern void func_0892CA70(U *);

void func_0892C22C(U *arg0) {
    if ((u8)func_08932CD8(arg0) != 1) {
        func_0892CA70(arg0);
        arg0->unk_3D8 = 0;
        arg0->unk_68();
    }
}
}
