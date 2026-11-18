#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x20];
    u8 unk_20[0x10];
} E_088F7164;

struct A_088F7164 {
    virtual void v0();
    virtual void v1();
    virtual void v2(E_088F7164 *);
};

typedef struct {
    E_088F7164 *unk_00;
    volatile s32 unk_04;
    A_088F7164 *unk_08;
} Obj_088F7164;

void func_0880416C(void *);
s32 func_088804C0(E_088F7164 *, s32);
void func_088F4D58(void *, s32);

Obj_088F7164 *func_088F7164(Obj_088F7164 *arg0, s16 arg1) {
    E_088F7164 *p;
    E_088F7164 *end;
    E_088F7164 *e;

    if (arg0 != NULL) {
        if (arg0->unk_04 != 0) {
            p = arg0->unk_00;
            end = p + arg0->unk_04;
            do {
                e = p++;
                if (e != NULL) {
                    func_088F4D58(e->unk_20, -1);
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
