#include "common.h"

extern "C" {

struct A_0895F5A4 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_0895F5A4 {
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

struct SP_0895F5A4 {
    void *unk_00;
    C_0895F5A4 unk_04;
};

typedef struct {
    s32 unk_00;
    A_0895F5A4 *unk_04;
    SP_0895F5A4 unk_08;
} Obj_0895F5A4;

void func_0880416C(void *);
void func_089618C8(void *, s32);

Obj_0895F5A4 *func_0895F5A4(Obj_0895F5A4 *arg0, s16 arg1) {
    SP_0895F5A4 *s;
    C_0895F5A4 *c;

    if (arg0 != NULL) {
        if (arg0 != NULL) {
            s = &arg0->unk_08;
            if (arg0->unk_08.unk_00 != NULL) {
                c = &arg0->unk_08.unk_04;
                if (c->release() == 0) {
                    arg0->unk_04->v1(s->unk_00, *(s32 **)c, arg0->unk_00);
                    func_089618C8(s->unk_00, arg0->unk_00);
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
