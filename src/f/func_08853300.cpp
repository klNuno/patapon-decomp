#include "common.h"

extern "C" {

class Del_08853300 {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};

void func_08853A80(s32, s32);

class Ptr_08853300 {
public:
    s32 unk_00;
    Del_08853300 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            s32 *&c = unk_0C;
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, c, unk_00);
                func_08853A80(p, unk_00);
            }
        }
    }
};

void func_08853A20(Ptr_08853300 *, Ptr_08853300 *, Ptr_08853300 *, Ptr_08853300 *);

typedef struct {
    u8 pad_00[0x468];
    Ptr_08853300 *unk_468;
    s32 unk_46C;
} T_08853300;

void func_08853300(T_08853300 *arg0, Ptr_08853300 *arg1) {
    Ptr_08853300 *it;
    Ptr_08853300 *end;
    Ptr_08853300 *last;

    end = arg0->unk_468 + arg0->unk_46C;
    for (it = arg0->unk_468; it != end; it++) {
        if (it->unk_08 == arg1->unk_08) {
            break;
        }
    }
    if (it != end) {
        func_08853A20(it, it + 1, end, it);
        arg0->unk_46C--;
        last = arg0->unk_468 + arg0->unk_46C;
        if (last != NULL) {
            if (last != NULL) {
                last->release();
            }
        }
    }
}

}
