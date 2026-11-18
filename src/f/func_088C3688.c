#include "common.h"

typedef struct N_088C3688 {
    struct N_088C3688 *unk_00;
    struct N_088C3688 *unk_04;
} N_088C3688;

typedef struct M_088C3688 {
    struct M_088C3688 *unk_00;
    struct M_088C3688 *unk_04;
    u8 pad_08[4];
    u16 unk_0C;
    u8 pad_0E[0xE];
    N_088C3688 *unk_1C;
} M_088C3688;

typedef struct {
    N_088C3688 **unk_00;
    u16 unk_04;
    u16 unk_06;
    N_088C3688 **unk_08;
    u16 unk_0C;
    u16 unk_0E;
    u8 pad_10[4];
    M_088C3688 *unk_14;
    u8 pad_18[0x14];
    N_088C3688 *unk_2C;
} T_088C3688;

void func_088C346C(T_088C3688 *, M_088C3688 *);

void func_088C3688(T_088C3688 *arg0) {
    N_088C3688 *p;
    N_088C3688 *next;
    M_088C3688 *m;
    M_088C3688 *mnext;
    N_088C3688 *r;

    p = arg0->unk_2C;
    if (p != NULL) {
        while (p != NULL) {
            next = p->unk_04;
            if (p->unk_00 != NULL) {
                p->unk_00->unk_04 = next;
            } else {
                arg0->unk_2C = next;
                if (p->unk_04 != NULL) {
                    p->unk_04->unk_00 = NULL;
                }
            }
            if (p->unk_04 != NULL) {
                p->unk_04->unk_00 = p->unk_00;
            } else if (p->unk_00 != NULL) {
                p->unk_00->unk_04 = NULL;
            }
            if (arg0->unk_06 > arg0->unk_04 && p != NULL) {
                arg0->unk_00[arg0->unk_04++] = p;
            }
            p = next;
        }
    }
    m = arg0->unk_14;
    if (m != NULL) {
        while (m != NULL) {
            mnext = m->unk_04;
            switch (m->unk_0C) {
            case 0x4A0:
            case 0x5D0:
            case 0x280:
                for (r = m->unk_1C; r != NULL; r = r->unk_04) {
                    if (arg0->unk_0E > arg0->unk_0C && r != NULL) {
                        arg0->unk_08[arg0->unk_0C++] = r;
                    }
                }
                break;
            }
            m->unk_1C = NULL;
            func_088C346C(arg0, m);
            m = mnext;
        }
    }
}
