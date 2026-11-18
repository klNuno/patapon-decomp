#include "common.h"

extern "C" {

struct V_088EECE0 { f32 unk_00, unk_04; };
struct S1 { V_088EECE0 unk_00; s32 unk_08, unk_0C; };
struct O_08909BEC;

struct B {
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual V_088EECE0 *unk_28();
};

struct E : B {
    u8 pad_2C[0x5BC];
    f32 unk_5E8, unk_5EC;
};

struct T_08909BEC {
    u8 pad_00[0x10];
    E *unk_10;
    O_08909BEC *unk_14;
};

void func_0885A870(V_088EECE0 *, S1 *);
s32 func_088D4D94(O_08909BEC *);
void func_0892DFA0(s32, V_088EECE0 *);

void func_08909980(T_08909BEC *arg0) {
    V_088EECE0 v;
    struct { S1 unk_00; u8 pad_10[8]; } s;
    if (arg0->unk_14 != NULL && func_088D4D94(arg0->unk_14) != 0) {
        V_088EECE0 *p = arg0->unk_10->unk_28();
        f32 b = p->unk_04;
        f32 a = p->unk_00;
        s.unk_00.unk_00.unk_00 = a;
        s.unk_00.unk_00.unk_04 = b;
        s.unk_00.unk_0C = 0x3F800000;
        s.unk_00.unk_08 = 0;
        func_0885A870(&v, &s.unk_00);
        f32 y = v.unk_04 - 30.0f;
        v.unk_04 = y;
        E *e = arg0->unk_10;
        if (e != NULL) {
            f32 x = *(volatile f32 *)&v.unk_00;
            v.unk_00 = x + e->unk_5E8;
            v.unk_04 = y + e->unk_5EC;
        }
        if (v.unk_04 < 48.0f) {
            v.unk_04 = 48.0f;
        }
        func_0892DFA0((s32)arg0->unk_14, &v);
    }
}

}
