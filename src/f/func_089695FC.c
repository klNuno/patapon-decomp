#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} X_089695FC;

typedef struct {
    X_089695FC *unk_00;
    s32 unk_04;
} W_089695FC;

typedef struct {
    u8 pad_00[0x1004];
    W_089695FC unk_1004;
} I_089695FC;

typedef struct {
    s32 unk_00;
    I_089695FC unk_04;
} E_089695FC;

typedef struct {
    E_089695FC *unk_00;
    s32 unk_04;
} V_089695FC;

typedef struct {
    u8 pad_00[0x20204];
    V_089695FC unk_20204;
} S_089695FC;

void func_0880416C(void *);

S_089695FC *func_089695FC(S_089695FC *arg0, s16 arg1) {
    E_089695FC *p;
    V_089695FC *v;
    s32 *sz;

    if (arg0 != NULL) {
        p = arg0->unk_20204.unk_00;
        v = &arg0->unk_20204;
        if (p != v->unk_00 + arg0->unk_20204.unk_04) {
            sz = &arg0->unk_20204.unk_04;
            do {
                if (p != NULL) {
                    if (&p->unk_04 != NULL) {
                        if (&p->unk_04 != NULL) {
                            X_089695FC *q = p->unk_04.unk_1004.unk_00;
                            s32 *n = &p->unk_04.unk_1004.unk_04;
                            W_089695FC *w = &p->unk_04.unk_1004;
                            if ((u32)q != (u32)(q + p->unk_04.unk_1004.unk_04)) {
                                do {
                                    q++;
                                } while (q != w->unk_00 + *n);
                            }
                            p->unk_04.unk_1004.unk_04 = 0;
                        }
                    }
                }
                p++;
            } while (p != v->unk_00 + *sz);
        }
        arg0->unk_20204.unk_04 = 0;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
