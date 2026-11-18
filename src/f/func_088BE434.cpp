#include "common.h"

extern "C" {

struct A_088BE434 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_088BE434 {
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

struct SP_088BE434 {
    void *unk_00;
    C_088BE434 unk_04;
};

typedef struct {
    s32 unk_00;
    A_088BE434 *unk_04;
    SP_088BE434 unk_08;
} Obj_088BE434;

typedef struct {
    u8 pad_00[0x404];
    s32 unk_404;
    u32 unk_408;
} V_088BE434;

typedef struct {
    u8 pad_00[0x7C];
    V_088BE434 unk_7C;
} S_088BE434;

void func_088BDC78(Obj_088BE434 *, V_088BE434 *, s32);
void func_0894B488(void *, s32);
void func_088BE5E8(s32, char **);

void func_088BE434(S_088BE434 *arg0, s32 arg1) {
    u32 i;
    Obj_088BE434 o;
    SP_088BE434 *s;
    C_088BE434 *c;

    i = 0;
    if (arg0->unk_7C.unk_408 != 0) {
    do {
        func_088BDC78(&o, &arg0->unk_7C, i);
        func_0894B488(o.unk_08.unk_00, arg1);
        s = &o.unk_08;
        if (o.unk_08.unk_00 != NULL) {
            c = &o.unk_08.unk_04;
            if (c->release() == 0) {
                o.unk_04->v1(s->unk_00, c->unk_00, o.unk_00);
                func_088BE5E8((s32)s->unk_00, (char **)o.unk_00);
            }
        }
        i++;
    } while (i < arg0->unk_7C.unk_408);
    }
}

}
