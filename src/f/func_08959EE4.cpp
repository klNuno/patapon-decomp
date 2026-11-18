#include "common.h"

extern "C" {

struct A_08959EE4 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_08959EE4 {
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

struct SP_08959EE4 {
    void *unk_00;
    C_08959EE4 unk_04;
};

typedef struct {
    s32 unk_00;
    A_08959EE4 *unk_04;
    SP_08959EE4 unk_08;
} Obj_08959EE4;

void func_0880416C(void *);
extern s32 func_0895A68C(s32, s32);

Obj_08959EE4 *func_08959EE4(Obj_08959EE4 *arg0, s16 arg1) {
    SP_08959EE4 *s;
    C_08959EE4 *c;

    if (arg0 != NULL) {
        if (arg0 != NULL) {
            s = &arg0->unk_08;
            if (arg0->unk_08.unk_00 != NULL) {
                c = &arg0->unk_08.unk_04;
                if (c->release() == 0) {
                    arg0->unk_04->v1(s->unk_00, *(s32 **)c, arg0->unk_00);
                    func_0895A68C((s32)s->unk_00, arg0->unk_00);
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
