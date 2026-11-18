#include "common.h"

extern "C" {

struct E_08989274 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C;
    u8 pad_0D[3];
    bool valid() { return unk_00 >= 0 && unk_0C != 0; }
};

class B_08989274 {
public:
    u8 pad_00[8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
};

class Obj_08989274 : public B_08989274 {
public:
    u8 pad_0C[0x24];
    E_08989274 unk_30[2];
    s32 unk_50;
};

void func_08988008(Obj_08989274 *, s32, s32, s32, s32, s32);
void func_08989458(Obj_08989274 *);
void func_089894C8(Obj_08989274 *);

void func_08989274(Obj_08989274 *arg0, s32 arg1) {
    if (!arg0->unk_30[arg0->unk_50].valid() || arg1 != arg0->unk_30[arg0->unk_50].unk_00) {
        func_08989458(arg0);
        func_08988008(arg0, arg0->unk_50, arg1, arg0->unk_30[arg0->unk_50].unk_08, 1, 0);
        func_089894C8(arg0);
        arg0->v10();
    }
}

}
