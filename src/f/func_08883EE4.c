#include "common.h"

typedef struct {
    s8 unk_00[0x80];
} S_08883EE4;

typedef struct {
    s32 unk_00;
    S_08883EE4 unk_04;
    S_08883EE4 unk_84;
    s32 unk_104;
    void *unk_108;
    s32 unk_10C;
} T_08883EE4;

typedef struct {
    u8 pad_00[0x108];
    s32 unk_108;
} N_08883EE4;

s32 func_08858BC0(void);
s32 func_0891C5E0(s8 *);
s32 func_088586E8(void);
u8 *func_089B53D8(s32);
s32 func_089D590C(void *, s32);
void func_089D58FC(void *, s32, s32);
void func_08883DC0(char *, s32, s32, T_08883EE4 *);
N_08883EE4 *func_0896CE18(void *, s32, s32, s32);

void func_08883EE4(char *arg0, s32 arg1, s32 arg2, T_08883EE4 *arg3) {
    T_08883EE4 copy;
    s32 idx;
    N_08883EE4 *n;
    s32 v;
    u8 *m;

    copy.unk_00 = arg3->unk_00;
    copy.unk_04 = arg3->unk_04;
    copy.unk_84 = arg3->unk_84;
    copy.unk_104 = arg3->unk_104;
    copy.unk_108 = arg3->unk_108;
    copy.unk_10C = arg3->unk_10C;
    copy.unk_104 = func_08858BC0();
    idx = func_0891C5E0((s8 *)arg0);
    if (func_089D590C(func_089B53D8(func_088586E8()) + 0x2E78, idx) != 0) {
        return;
    }
    func_08883DC0(arg0, arg1, arg2, &copy);
    n = func_0896CE18(copy.unk_108, (s32)arg0, 0, 0);
    if (n != NULL) {
        v = n->unk_108;
        m = func_089B53D8(func_088586E8());
        func_089D58FC(m + 0x2E78, v, idx);
    }
}
