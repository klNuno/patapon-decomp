#include "common.h"

extern "C" {

class V_088CE14C {
public:
    u8 pad_00[0x28];
    virtual void vfunc_08();
    virtual void vfunc_0C();
};

typedef struct N_088CE14C {
    s32 unk_00;
    struct N_088CE14C *unk_04;
    V_088CE14C *unk_08;
} N_088CE14C;

inline s32 eq2_088CE14C(N_088CE14C *a, N_088CE14C *b) {
    s32 r = 0;
    if (*(u32 *)&a->unk_08 == *(u32 *)&b->unk_08 && a->unk_04 == b->unk_04) {
        r = 1;
    }
    return r;
}

inline s32 eq_088CE14C(N_088CE14C *a, N_088CE14C *b) {
    s32 r = 0;
    if (eq2_088CE14C(a, b) && a->unk_00 == b->unk_00) {
        r = 1;
    }
    return r;
}

inline bool ne_088CE14C(N_088CE14C *a, N_088CE14C *b) {
    return !(bool)eq_088CE14C(a, b);
}

void func_088CE14C(N_088CE14C *arg0) {
    struct {
        N_088CE14C *unk_00;
    } it;

    it.unk_00 = arg0->unk_04;
    while (ne_088CE14C(it.unk_00, arg0)) {
        it.unk_00->unk_08->vfunc_0C();
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
}

}
