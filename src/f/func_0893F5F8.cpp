#include "common.h"

extern "C" {

typedef struct E_0893F5F8 {
    struct E_0893F5F8 *unk_00;
    void *unk_04;
    struct E_0893F5F8 *unk_08;
    void *unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    u8 pad_24[0x14];
} E_0893F5F8;

typedef struct {
    E_0893F5F8 *unk_00;
    s32 unk_04;
} V_0893F5F8;

extern u8 D_08A473D8[];
extern u8 D_08A473E4[];
struct M_0893F5F8;
void func_0893FE68(struct M_0893F5F8 *);
void func_0893FD70(struct M_0893F5F8 *);

typedef struct M_0893F5F8 {
    E_0893F5F8 *unk_00;
    struct M_0893F5F8 *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
    void *unk_24;
} M_0893F5F8;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} Z_0893F5F8;

typedef struct {
    u8 pad_00[0x1EB0];
    V_0893F5F8 unk_1EB0;
    M_0893F5F8 unk_1EB8;
    M_0893F5F8 unk_1EE0;
    Z_0893F5F8 unk_1F08;
} S_0893F5F8;

void func_0881F5C0(void *, s32, s32);


S_0893F5F8 *func_0893F5F8(S_0893F5F8 *arg0) {
    E_0893F5F8 *p;
    V_0893F5F8 *vp;
    s32 *sp;
    u32 i;
    M_0893F5F8 *m;

    *(u32 *)&arg0->unk_1EB0.unk_00 = ((u32)arg0 & 0xF) + (u32)arg0;
    arg0->unk_1EB0.unk_04 = 0x8C;
    p = arg0->unk_1EB0.unk_00;
    vp = &arg0->unk_1EB0;
    if ((u32)p != (u32)(p + arg0->unk_1EB0.unk_04)) {
        sp = &arg0->unk_1EB0.unk_04;
        do {
            if (p != NULL) {
                p->unk_1C = D_08A473E4;
                p->unk_00 = NULL;
                p->unk_04 = NULL;
                p->unk_08 = NULL;
                p->unk_0C = NULL;
            }
            p++;
        } while (p != vp->unk_00 + *sp);
    }
    m = &arg0->unk_1EB8;
    arg0->unk_1EB8.unk_24 = D_08A473D8;
    func_0893FE68(m);
    m->unk_04 = m;
    m->unk_00 = (E_0893F5F8 *)m;
    func_0893FD70(m);
    m = &arg0->unk_1EE0;
    arg0->unk_1EE0.unk_24 = D_08A473D8;
    func_0893FE68(m);
    m->unk_04 = m;
    m->unk_00 = (E_0893F5F8 *)m;
    func_0893FD70(m);
    arg0->unk_1F08.unk_00 = 0;
    arg0->unk_1F08.unk_04 = 0;
    arg0->unk_1F08.unk_08 = 0;
    arg0->unk_1F08.unk_0C = 0;
    for (i = 0; i < 0x8C; i++) {
        E_0893F5F8 *e = arg0->unk_1EB0.unk_00 + i;
        func_0881F5C0(e, 0, 0x38);
        e->unk_20 = i;
        e->unk_08 = e;
        if ((void *)&arg0->unk_1EE0 != (void *)e) {
            s32 r;
            if ((void *)arg0->unk_1EE0.unk_00 != (void *)&arg0->unk_1EE0) {
                e->unk_00 = arg0->unk_1EE0.unk_00;
                arg0->unk_1EE0.unk_00->unk_04 = e;
                r = 1;
                arg0->unk_1EE0.unk_00 = e;
            } else {
                arg0->unk_1EE0.unk_00 = e;
                arg0->unk_1EE0.unk_04 = (M_0893F5F8 *)e;
                e->unk_00 = (E_0893F5F8 *)&arg0->unk_1EE0;
                r = 1;
            }
            e->unk_04 = &arg0->unk_1EE0;
            if (r) {
                e->unk_0C = &arg0->unk_1EE0;
                arg0->unk_1EE0.unk_20++;
            }
        }
    }
    return arg0;
}

}
