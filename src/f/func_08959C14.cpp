#include "common.h"

extern "C" {

typedef struct {
    u32 unk_00;
    char unk_04[1];
} S_08959C14;

void func_0881F120(void *, void *, u32);
extern s8 D_08A04C30[];

inline const u32 &min_08959C14(const u32 &a, const u32 &b) {
    return (b < a) ? b : a;
}

void func_08959C14(S_08959C14 *arg0, S_08959C14 *arg1, u32 arg2, u32 arg3) {
    u32 n;
    u32 m;

    n = min_08959C14(arg3, arg1->unk_00 - arg2);
    arg0->unk_00 = 0;
    m = arg1->unk_00 - arg2;
    if (n < m) {
        m = n;
    }
    if (arg0 != arg1) {
        func_0881F120(arg0->unk_04, (char *)(arg2 + (u32)arg1) + 4, m);
        arg0->unk_00 = m;
        arg0->unk_04[m] = D_08A04C30[0];
    }
}

}
