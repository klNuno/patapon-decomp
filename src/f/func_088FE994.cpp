#include "common.h"

extern "C" {

struct A_088FE994 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_088FE994 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct SP_088FE994 {
    void *unk_00;
    C_088FE994 unk_04;
};

typedef struct {
    s32 unk_00;
    A_088FE994 *unk_04;
    SP_088FE994 unk_08;
} Obj_088FE994;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} S_088FE994;

s32 *func_0885356C(s32, s32, s32, s32);
void func_08852F00(s32, s32);
void func_088F31AC(Obj_088FE994 *, u8 *);
void func_088E1204(void *, s32);

void func_088FE994(S_088FE994 *arg0, s32 arg1) {
    s32 *a;
    Obj_088FE994 o;
    SP_088FE994 *s;
    C_088FE994 *c;

    a = func_0885356C(arg1, 0, 1, 4);
    func_088F31AC(&o, arg0->unk_10 + 0x50560);
    *a = o.unk_08.unk_00 != NULL;
    func_08852F00(arg1, 0);
    s = &o.unk_08;
    if (o.unk_08.unk_00 != NULL) {
        c = &o.unk_08.unk_04;
        if (c->release() == 0) {
            o.unk_04->v1(s->unk_00, *(s32 **)c, o.unk_00);
            func_088E1204(s->unk_00, o.unk_00);
        }
    }
}

}
