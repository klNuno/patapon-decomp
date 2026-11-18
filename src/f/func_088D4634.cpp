#include "common.h"

extern "C" {

class B_088D4634 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(s32);
};

class A_088D4634 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(f32);
};

class S_088D4634 : public A_088D4634 {
public:
    u8 pad_04[0x6DC];
    B_088D4634 *unk_6E0;
    u8 pad_6E4[0x34];
    s32 unk_718;
    u8 pad_71C[0x1C0];
    f32 unk_8DC;
    u32 unk_8E0;
    u32 unk_8E4;
};

void func_0892D030(S_088D4634 *, s32);

void func_088D4634(S_088D4634 *arg0, s32 arg1) {
    s32 s;

    if (arg0->unk_8E0 != 0) {
        s = arg0->unk_718;
        if (s != 5 && s != 1 && arg0->unk_8E0 < arg0->unk_8E4 && (s == 4 || s == 2)) {
            arg0->v4(arg0->unk_8DC);
        }
        arg0->unk_8E4 += arg1;
    }
    func_0892D030(arg0, arg1);
    if (arg0->unk_718 == 4) {
        arg0->unk_6E0->v4(arg1);
    }
}

}
