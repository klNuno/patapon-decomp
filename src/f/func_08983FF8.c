#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s8 unk_08[0x1C];
} E_08983FF8;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} R_08983FF8;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} H_08983FF8;

typedef struct {
    R_08983FF8 *unk_000[0x88];
    s32 unk_220;
    s32 unk_224;
    s32 unk_228;
} A_08983FF8;

extern s8 D_08A05D58[];
void func_08822B3C(s8 *, s8 *);
void func_08822918(s8 *, s8 *);
s32 func_0891C5E0(s8 *);

void func_08983FF8(A_08983FF8 *arg0, H_08983FF8 *arg1) {
    s8 buf[0x100];
    R_08983FF8 *r;
    E_08983FF8 *e;
    R_08983FF8 *q;
    s8 *p;
    s32 idx;

    arg1->unk_00 += (s32)arg1;
    arg1->unk_04 += (s32)arg1;
    arg1->unk_08 += (s32)arg1;
    arg1->unk_0C += (s32)arg1;
    for (e = (E_08983FF8 *)arg1->unk_00; e[1].unk_04 != 0 && e->unk_08[0] != 0; e++) {
        r = (R_08983FF8 *)(e[1].unk_04 + (s32)arg1);
        func_08822B3C(buf, e->unk_08);
        p = buf;
        while (*p != ' ') {
            p++;
        }
        *p = 0;
        func_08822918(buf, D_08A05D58);
        idx = func_0891C5E0(buf);
        if (r->unk_04 != 0) {
            q = r;
            do {
                q->unk_04 += (s32)arg1;
                q++;
            } while (q->unk_04 != 0);
        }
        arg0->unk_000[idx] = r;
    }
    arg0->unk_220 = arg1->unk_04 + 8;
    arg0->unk_224 = arg1->unk_08 + 8;
    arg0->unk_228 = arg1->unk_0C + 8;
}
