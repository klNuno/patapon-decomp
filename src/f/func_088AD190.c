#include "common.h"

typedef struct {
    u32 unk_00;
    u8 pad_04[0x4C];
} E_088AD190;

typedef struct {
    E_088AD190 *unk_00;
    s32 unk_04;
} V_088AD190;

typedef struct {
    u8 pad_00[0xA10];
    V_088AD190 unk_A10;
} T088AD190;

E_088AD190 *func_088AD190(T088AD190 *arg0, u32 *arg1) {
    s32 n;
    s32 lo;
    s32 hi;
    u32 mid;
    V_088AD190 *v;
    E_088AD190 *e;

    n = arg0->unk_A10.unk_04;
    if (n == 0) {
        return arg0->unk_A10.unk_00 + n;
    }
    lo = 0;
    hi = n;
    if (lo <= hi) {
        v = &arg0->unk_A10;
        do {
            mid = lo + (hi - lo) / 2;
            if (mid >= (u32)n) {
                break;
            }
            e = v->unk_00 + mid;
            if (*arg1 < e->unk_00) {
                hi = mid - 1;
            } else if (e->unk_00 < *arg1) {
                lo = mid + 1;
            } else {
                return e;
            }
        } while (lo <= hi);
    }
    return arg0->unk_A10.unk_00 + *(s32 *)&arg0->unk_A10.unk_04;
}
