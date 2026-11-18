#include "common.h"

extern "C" {

struct A_088BC03C {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_088BC03C {
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

struct SP_088BC03C {
    void *unk_00;
    C_088BC03C unk_04;
};

typedef struct {
    s32 unk_00;
    A_088BC03C *unk_04;
    SP_088BC03C unk_08;
} Obj_088BC03C;

typedef struct {
    u8 pad_00[0x54];
    u8 unk_54[0x408];
    u32 unk_45C;
} T088BC03C;

void func_088B8BFC(Obj_088BC03C *, void *, u32);
void func_088B84E8(void *, s32);
void func_088B5A98(void *, s32);

void func_088BC03C(T088BC03C *arg0, s32 arg1) {
    u32 i;

    i = 0;
    if (arg0->unk_45C != 0) do {
        Obj_088BC03C o;
        SP_088BC03C *s;
        C_088BC03C *c;

        func_088B8BFC(&o, arg0->unk_54, i);
        func_088B84E8(o.unk_08.unk_00, arg1);
        s = &o.unk_08;
        if (o.unk_08.unk_00 != NULL) {
            c = &o.unk_08.unk_04;
            if (c->release() == 0) {
                o.unk_04->v1(s->unk_00, c->unk_00, o.unk_00);
                func_088B5A98(s->unk_00, o.unk_00);
            }
        }
        i++;
    } while (i < arg0->unk_45C);
}

}
