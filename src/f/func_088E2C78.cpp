#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x20];
    u8 unk_20[0x10];
} E_088E2C78;

struct A_088E2C78 {
    virtual void v0();
    virtual void v1();
    virtual void v2(E_088E2C78 *);
};

struct Obj_088E2C78 {
    E_088E2C78 *unk_00;
    volatile s32 unk_04;
    A_088E2C78 *unk_08;
    s32 size() { return unk_04; }
};

void func_0880416C(void *);
s32 func_088804C0(E_088E2C78 *, s32);
void func_088E2BBC(void *, s32);

Obj_088E2C78 *func_088E2C78(Obj_088E2C78 *arg0, s16 arg1) {
    E_088E2C78 *p;
    E_088E2C78 *end;
    E_088E2C78 *e;

    if (arg0 != NULL) {
        if (arg0->size() != 0) {
            p = arg0->unk_00;
            end = p + arg0->size();
            do {
                e = p++;
                if (e != NULL) {
                    func_088E2BBC(e->unk_20, -1);
                    func_088804C0(e, -1);
                }
            } while (p != end);
            arg0->unk_08->v2(arg0->unk_00);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
