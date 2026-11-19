#include "common.h"

extern "C" {

struct O {
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
    virtual void v11();
    virtual void v12(f32);
};

struct E {};
struct T {
    T *unk_00;
    T *volatile unk_04;
    u8 pad_08[8];
    O *unk_10;
};
union I {
    f32 unk_00_F;
    T *unk_00;
    s32 eq(const I &arg0) const { return unk_00 == arg0.unk_00; }
    bool ne(const I &arg0, const E &arg1 = E()) const { return !(bool)eq(arg0); }
};
struct V {
    T *unk_00;
    u8 pad_04[4];
    T *unk_08;
    s32 unk_0C;
};
struct Obj;
struct S {
    u8 pad_00[0x9C];
    V unk_9C;
};

void func_0897BB74(s32 *, s32 *);
void func_0897BB7C(s32 *, s32 *);
void func_0897BB88(I *, V *, I, I);
void func_0897C818(I *, S *, s32);
void func_0897C8E0(Obj *);

struct U { I unk_00; I unk_04; I unk_08; u8 pad_0C[12]; I unk_18; u8 pad_1C[4]; };

void func_0897C3F4(S *arg0, s32 arg2, f32 arg1) {
    U u;
    I it;
    I end;
    I end2;
    T *p;
    T *q;
    T *r;
    T *t;
    s32 n;

    if (arg2 == 0) {
        it.unk_00 = arg0->unk_9C.unk_00;
        end.unk_00 = (T *)&arg0->unk_9C;
        while (it.ne(end)) {
            it.unk_00->unk_10->v12(arg1);
            it.unk_00 = it.unk_00->unk_00;
        }
        if (0.0f != arg1) {
            return;
        }
        func_0897BB7C((s32 *)&u.unk_04, (s32 *)&arg0->unk_9C);
        func_0897BB74((s32 *)&u.unk_00, (s32 *)&arg0->unk_9C);
        func_0897BB88(&u.unk_08, &arg0->unk_9C, u.unk_04, u.unk_00);
    } else {
        func_0897C818(&u.unk_18, arg0, arg2);
        end2.unk_00 = (T *)&arg0->unk_9C;
        if (u.unk_18.eq(end2) ^ 1) {
            u.unk_18.unk_00->unk_10->v12(arg1);
            if (0.0f == arg1) {
                n = arg0->unk_9C.unk_0C;
                p = u.unk_18.unk_00;
                --n;
                Obj *o = (Obj *)p->pad_08;
                arg0->unk_9C.unk_0C = n;
                func_0897C8E0(o);
                q = arg0->unk_9C.unk_08;
                r = p->unk_00;
                p->unk_04->unk_00 = r;
                t = r->unk_04;
                r->unk_04 = p->unk_04;
                p->unk_04 = q->unk_04;
                q->unk_04->unk_00 = p;
                q->unk_04 = t;
                t->unk_00 = q;
            }
        }
    }
}

}
