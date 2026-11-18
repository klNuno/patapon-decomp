#include "common.h"

extern "C" {

struct A_089CDB2C {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_089CDB2C {
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

struct SP_089CDB2C {
    void *unk_00;
    C_089CDB2C unk_04;
};

typedef struct {
    s32 unk_00;
    A_089CDB2C *unk_04;
    SP_089CDB2C unk_08;
} Obj_089CDB2C;

void func_0880416C(void *);
void func_089CDF48(void *, s32);

Obj_089CDB2C *func_089CDB2C(Obj_089CDB2C *arg0, s16 arg1) {
    SP_089CDB2C *s;
    C_089CDB2C *c;

    if (arg0 != NULL) {
        if (arg0 != NULL) {
            s = &arg0->unk_08;
            if (arg0->unk_08.unk_00 != NULL) {
                c = &arg0->unk_08.unk_04;
                if (c->release() == 0) {
                    arg0->unk_04->v1(s->unk_00, *(s32 **)c, arg0->unk_00);
                    func_089CDF48(s->unk_00, arg0->unk_00);
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
