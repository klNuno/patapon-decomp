#include "common.h"

extern "C" {

struct A_0899985C {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_0899985C {
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

struct SP_0899985C {
    void *unk_00;
    C_0899985C unk_04;
};

typedef struct {
    s32 unk_00;
    A_0899985C *unk_04;
    SP_0899985C unk_08;
} Obj_0899985C;

void func_0880416C(void *);
void func_0899B34C(void *, s32);

Obj_0899985C *func_0899985C(Obj_0899985C *arg0, s16 arg1) {
    SP_0899985C *s;
    C_0899985C *c;

    if (arg0 != NULL) {
        if (arg0 != NULL) {
            s = &arg0->unk_08;
            if (arg0->unk_08.unk_00 != NULL) {
                c = &arg0->unk_08.unk_04;
                if (c->release() == 0) {
                    arg0->unk_04->v1(s->unk_00, *(s32 **)c, arg0->unk_00);
                    func_0899B34C(s->unk_00, arg0->unk_00);
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
