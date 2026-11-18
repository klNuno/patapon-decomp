#include "common.h"

extern "C" {

class Alloc_0885F564 {
public:
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, s32);
};

struct RC_0885F564 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        } else {
            return 0;
        }
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct M_0885F564 {
    s32 unk_00;
    Alloc_0885F564 *unk_04;
    s32 unk_08;
    RC_0885F564 unk_0C;
};

typedef struct Obj_0885F564 {
    M_0885F564 unk_00;
} Obj_0885F564;

void func_0880416C(void *);
void func_0885F7EC(s32, s32);

Obj_0885F564 *func_0885F564(Obj_0885F564 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (&arg0->unk_00 != NULL) {
            M_0885F564 *m = &arg0->unk_00;
            s32 *h = &m->unk_08;
            if (m->unk_08 != 0) {
                RC_0885F564 *rc = &m->unk_0C;
                if (m->unk_0C.release() == 0) {
                    m->unk_04->unk_0C(*h, rc->unk_00, m->unk_00);
                    func_0885F7EC(*h, m->unk_00);
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
