#include "common.h"

typedef struct {
    u32 unk_00;
    u8 pad_04[0x24];
} E_0896BFF8;

typedef struct {
    E_0896BFF8 *unk_00;
    u32 unk_04;
} V_0896BFF8;

typedef struct {
    u8 pad_00[0xFB0];
    V_0896BFF8 unk_FB0;
} S_0896BFF8;

E_0896BFF8 *func_0896BFF8(S_0896BFF8 *arg0, u32 *arg1) {
    u32 n = arg0->unk_FB0.unk_04;
    s32 lo;
    s32 hi;
    s32 mid;
    E_0896BFF8 *e;
    V_0896BFF8 *v;

    if (n == 0) {
        return arg0->unk_FB0.unk_00 + n;
    }
    lo = 0;
    hi = n;
    if ((s32)n >= 0) {
        do {
            v = &arg0->unk_FB0;
            mid = lo + (hi - lo) / 2;
            if ((u32)mid >= n) {
                break;
            }
            e = &v->unk_00[mid];
            if (*arg1 < e->unk_00) {
                hi = mid - 1;
            } else if (e->unk_00 < *arg1) {
                lo = mid + 1;
            } else {
                return e;
            }
        } while (lo <= hi);
    }
    return arg0->unk_FB0.unk_00 + *(u32 *)&arg0->unk_FB0.unk_04;
}
