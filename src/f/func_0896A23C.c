#include "common.h"

typedef struct {
    u32 unk_00;
    u8 pad_04[0x100C];
} E_0896A23C;

typedef struct {
    E_0896A23C *unk_00;
    s32 unk_04;
} V_0896A23C;

typedef struct {
    u8 pad_00[0x20204];
    V_0896A23C unk_20204;
} T_0896A23C;

E_0896A23C *func_0896A23C(T_0896A23C *arg0, u32 *arg1) {
    s32 n;
    s32 lo;
    s32 hi;
    u32 mid;
    E_0896A23C *e;
    V_0896A23C *v;

    n = arg0->unk_20204.unk_04;
    if (n == 0) {
        return arg0->unk_20204.unk_00 + n;
    }
    lo = 0;
    hi = n;
    if (lo <= hi) {
    v = &arg0->unk_20204;
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
    return arg0->unk_20204.unk_00 + *(volatile s32 *)&arg0->unk_20204.unk_04;
}
