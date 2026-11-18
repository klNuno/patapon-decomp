#include "common.h"

extern "C" {

class V_088AB540 {
public:
    f32 unk_00;
    f32 unk_04;
    V_088AB540(f32 x, f32 y) { unk_00 = x; unk_04 = y; }
};

class C_088AB540 {
public:
    u8 pad_00[0x24];
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23(V_088AB540 *);
};

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
C_088AB540 *func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);

void func_088AB540(void *arg0, void *arg1) {
    s32 *a;
    f32 *b;
    f32 *c;
    C_088AB540 *obj;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    obj = func_0888A5A0(func_088BCF58(*(s32 *)((u8 *)arg0 + 0x10)), *a);
    if (obj == NULL) {
        func_08852F00(arg1, 0);
        return;
    }
    V_088AB540 v(*b, *c);
    obj->v23(&v);
    func_08852F00(arg1, 0);
}

}
