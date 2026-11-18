#include "common.h"

extern "C" {

struct A_088D309C {
    virtual void v08();
    virtual void v0C(s32 *, s32 *, s32);
};

s32 func_088D1EE8(s32 *arg0);
void func_088D3204(s32 *, s32);

struct H_088D309C {
    s32 unk_00;
    A_088D309C *unk_04;
    s32 *unk_08;
    s32 *unk_0C;
    void addref() {
        if (unk_08 != 0) {
            ++*unk_0C;
        }
    }
    s32 cnt() {
        if (unk_0C != NULL) {
            return *unk_0C;
        } else {
            return 0;
        }
    }
    void release2() {
        if (*(s32 *volatile *)&unk_08 != 0) {
            *(s32 *)*(s32 *volatile *)&unk_0C -= 1;
            s32 *q = *(s32 *volatile *)&unk_0C;
            if ((q != NULL ? *q : 0) == 0) {
                unk_04->v0C(unk_08, unk_0C, unk_00);
                func_088D3204(unk_08, unk_00);
            }
        }
    }
    void release() {
        if (unk_08 != 0) {
            *(s32 *)*(s32 *volatile *)&unk_0C -= 1;
            s32 *q = unk_0C;
            if ((q != NULL ? *q : 0) == 0) {
                unk_04->v0C(unk_08, q, unk_00);
                func_088D3204(unk_08, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x408];
    H_088D309C *unk_408;
    s32 unk_40C;
} Obj_088D309C;

s32 *func_088D309C(Obj_088D309C *arg0, s32 arg1) {
    H_088D309C *p;
    H_088D309C *end;
    H_088D309C h;
    H_088D309C *lp;

    lp = &h;
    p = arg0->unk_408;
    end = p + arg0->unk_40C;
    for (; p != end; p++) {
        h = *p;
        lp->addref();
        if (func_088D1EE8(h.unk_08) == arg1) {
            s32 *ret = h.unk_08;
            h.release2();
            return ret;
        }
        h.release();
    }
    return 0;
}

}
