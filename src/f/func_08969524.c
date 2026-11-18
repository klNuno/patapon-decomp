#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} X_08969524;

typedef struct {
    X_08969524 *unk_00;
    s32 unk_04;
} W_08969524;

typedef struct {
    u8 pad_00[0x1004];
    W_08969524 unk_1004;
} I_08969524;

typedef struct {
    s32 unk_00;
    I_08969524 unk_04;
} E_08969524;

typedef struct {
    E_08969524 *unk_00;
    s32 unk_04;
} V_08969524;

typedef struct {
    u8 pad_00[0x20204];
    V_08969524 unk_20204;
} S_08969524;

void func_08969524(S_08969524 *arg0) {
    E_08969524 *p;
    V_08969524 *v;
    s32 *sz;

    p = arg0->unk_20204.unk_00;
    v = &arg0->unk_20204;
    if (p != v->unk_00 + arg0->unk_20204.unk_04) {
        sz = &arg0->unk_20204.unk_04;
        do {
            if (p != NULL) {
                if (&p->unk_04 != NULL) {
                    if (&p->unk_04 != NULL) {
                        X_08969524 *q = p->unk_04.unk_1004.unk_00;
                        s32 *n = &p->unk_04.unk_1004.unk_04;
                        W_08969524 *w = &p->unk_04.unk_1004;
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
}
