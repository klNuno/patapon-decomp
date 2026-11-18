#include "common.h"

extern "C" {

void func_088128A4(void);

inline const u32 &max_(const u32 &a, const u32 &b) {
    return a < b ? b : a;
}

typedef struct {
    u8 pad_00[0x8];
    u32 unk_08;
} S;

u32 func_088875FC(S *arg0, u32 arg1) {
    const u32 m = 0xBA2E8B;
    u32 cap = arg0->unk_08;

    if (m - cap < arg1) {
        func_088128A4();
    }
    if (cap < m / 3) {
        return cap + max_(3 * (cap + 1) / 5, arg1);
    }
    if (cap < m / 3 * 2) {
        return cap + max_((cap + 1) / 2, arg1);
    }
    return m;
}

}
