#include "common.h"

extern "C" {

struct O_088E22C8 {
    u8 pad_00[0x10];
    virtual void v0(s32);
};

struct W_088E22C8 {
    virtual void v0();
    virtual void v1();
    virtual void v2(O_088E22C8 *);
    void del(O_088E22C8 *o) {
        if (o != NULL) {
            o->v0(-1);
            v2(o);
        }
    }
};

struct A_088E22C8 {
    virtual void v0();
    virtual void v1(O_088E22C8 *, void *, W_088E22C8 *);
};

struct H_088E22C8 {
    W_088E22C8 *unk_00;
    A_088E22C8 *unk_04;
    O_088E22C8 *unk_08;
    s32 *unk_0C;
    s32 count() {
        if (unk_0C != NULL) {
            return *unk_0C;
        } else {
            return 0;
        }
    }
    bool ok() { return this != NULL; }
};

void func_088E22C8(H_088E22C8 *arg0) {
    if (arg0 != NULL) {
        if (arg0->ok() && arg0->ok()) {
            O_088E22C8 *&o = arg0->unk_08;
            if (arg0->unk_08 == NULL) {
                return;
            }
            s32 *&c = arg0->unk_0C;
            *arg0->unk_0C -= 1;
            if (arg0->count() == 0) {
                arg0->unk_04->v1(o, *(void **)&c, arg0->unk_00);
                arg0->unk_00->del(o);
            }
        }
    }
}

}
