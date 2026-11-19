#include "common.h"

extern "C" {

typedef struct {
    u32 unk_00;
    u8 pad_04[0x100];
} E_088AD614;

struct Vec_088AD614 {
    E_088AD614 *unk_00;
    s32 unk_04;

    E_088AD614 *at(s32 i) { return &unk_00[i]; }
};

typedef struct {
    u8 pad_00[0x2090];
    Vec_088AD614 unk_2090;
} Obj_088AD614;

E_088AD614 *func_088AD614(Obj_088AD614 *arg0, u32 *arg1) {
    s32 n;
    s32 lo;
    s32 hi;
    s32 mid;
    E_088AD614 *e;
    Vec_088AD614 *vp;

    n = arg0->unk_2090.unk_04;
    if (n == 0) {
        return arg0->unk_2090.unk_00 + n;
    }
    lo = 0;
    hi = n;
    while (lo <= hi) {
        vp = &arg0->unk_2090;
        mid = lo + (hi - lo) / 2;
        if ((u32)mid >= (u32)n) {
            break;
        }
        e = vp->at(mid);
        if (*arg1 < e->unk_00) {
            hi = mid - 1;
        } else if (e->unk_00 < *arg1) {
            lo = mid + 1;
        } else {
            return e;
        }
    }
    return arg0->unk_2090.unk_00 + *(s32 *)&arg0->unk_2090.unk_04;
}

}
