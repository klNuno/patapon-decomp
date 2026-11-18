#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} VI;

typedef struct {
    u8 pad_00[0x1C];
    VI unk_1C;
} M;

typedef struct {
    u8 pad_00[0x4];
    M unk_04;
} E;

typedef struct {
    E *unk_00;
    s32 unk_04;
} VE;

typedef struct {
    u8 pad_00[0xFB0];
    VE unk_FB0;
} S;

void func_0880416C(void *);

S *func_0896B850(S *arg0, s16 arg1) {
    E *p;
    E **v;
    s32 *n;
    s32 *q;
    s32 **w;
    s32 *m;

    if (arg0 != NULL) {
        p = arg0->unk_FB0.unk_00;
        v = &arg0->unk_FB0.unk_00;
        if ((u32)p != (u32)(p + arg0->unk_FB0.unk_04)) {
            n = &arg0->unk_FB0.unk_04;
            do {
                if (p != NULL) {
                    if (&p->unk_04 != NULL) {
                        q = p->unk_04.unk_1C.unk_00;
                        m = &p->unk_04.unk_1C.unk_04;
                        w = &p->unk_04.unk_1C.unk_00;
                        if ((u32)q != (u32)(q + p->unk_04.unk_1C.unk_04)) {
                            do {
                                q++;
                            } while (q != *w + *m);
                        }
                        p->unk_04.unk_1C.unk_04 = 0;
                    }
                }
                p++;
            } while (p != *v + *n);
        }
        arg0->unk_FB0.unk_04 = 0;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
