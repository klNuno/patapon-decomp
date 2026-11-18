#include "common.h"

extern "C" {

class B_089ADE80 {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3C();
    virtual void v40(s32 *, s32);
};

class Obj_089ADE80 : public B_089ADE80 {
public:
    u8 pad_04[0xD90 - 0x4];
    s32 unk_D90;
    u8 pad_D94[0xE30 - 0xD94];
    u8 unk_E30[0x4];
};

extern void *D_08AD1E28[];
extern char D_08A082E0[];
extern char D_08A082F4[];
extern char D_08A08304[];
extern char D_08A08310[];
extern char D_08A08320[];

s32 *func_08868F6C(void *, s32, s32);
s32 func_0888B03C(s32 *, char *);
void func_089B2890(void *, void *);

void func_089ADE80(Obj_089ADE80 *arg0) {
    s32 sp1C;
    s32 h;

    h = *func_08868F6C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 4, 0);
    sp1C = h;
    sp1C = func_0888B03C(&sp1C, D_08A082E0);
    sp1C = func_0888B03C(&sp1C, D_08A082F4);
    sp1C = func_0888B03C(&sp1C, D_08A08304);
    arg0->v40(&sp1C, 0);
    arg0->unk_D90 = h;
    arg0->unk_D90 = func_0888B03C(&arg0->unk_D90, D_08A082E0);
    arg0->unk_D90 = func_0888B03C(&arg0->unk_D90, D_08A08310);
    arg0->unk_D90 = func_0888B03C(&arg0->unk_D90, D_08A08320);
    func_089B2890(arg0->unk_E30, arg0);
}

}
