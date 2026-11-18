#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} P_088849A0;

typedef struct {
    u8 pad_00[0x108];
    void *unk_108;
} T_088849A0;

extern u8 D_08AD22A1[];
extern char D_089F9C7C[];
void func_08883DC0(char *, s32, s32, T_088849A0 *);
s32 func_0896CE18(void *, s32, s32, s32);
void func_08822918(char *, char *);
void func_08884A74(char *, s32, u32, T_088849A0 *);

void func_088849A0(char *arg0, s32 arg1, s32 arg2, T_088849A0 *arg3) {
    char buf[0x100];
    P_088849A0 *p;
    u8 save;
    char *q;
    s32 n;

    func_08883DC0(arg0, arg1, arg2, arg3);
    p = (P_088849A0 *)(func_0896CE18(arg3->unk_108, (s32)arg0, 0, 1) + 0x108);
    if (p != NULL && p->unk_00 != 0) {
        save = D_08AD22A1[0];
        D_08AD22A1[0] = 1;
        q = buf;
        n = 0x100;
        if (q != NULL) {
            do {
                *q++ = 0;
            } while (--n);
        }
        func_08822918(buf, arg0);
        func_08822918(buf, D_089F9C7C);
        func_08884A74(buf, p->unk_00, p->unk_04, arg3);
        D_08AD22A1[0] = save;
    }
}
