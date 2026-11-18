#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x20];
} K_08932138;

typedef struct E_08932138 {
    struct E_08932138 *unk_00;
    struct E_08932138 *unk_04;
    struct E_08932138 *unk_08;
    void *unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    u8 pad_20[0x4];
    K_08932138 unk_24;
} E_08932138;

typedef struct {
    E_08932138 *unk_00;
    u32 unk_04;
} V_08932138;

typedef struct L_08932138 {
    struct L_08932138 *unk_00;
    struct L_08932138 *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
    void *unk_24;
} L_08932138;

typedef struct {
    u8 pad_00[0x114];
    V_08932138 unk_114;
    L_08932138 unk_11C;
    L_08932138 unk_144;
    void *unk_16C;
} S_08932138;

extern u8 D_08A47060[];
extern u8 D_08A4535C[];
extern u8 D_08A45350[];

void func_088BFFB8(K_08932138 *);
void func_08880754(L_08932138 *);
void func_0888065C(L_08932138 *);
void func_0881F5C0(void *, s32, s32);

inline int link_08932138(L_08932138 *l, E_08932138 *e) {
    int r;
    if (l->unk_00 != l) {
        e->unk_00 = (E_08932138 *)l->unk_00;
        l->unk_00->unk_04 = (L_08932138 *)e;
        l->unk_00 = (L_08932138 *)e;
        r = 1;
    } else {
        l->unk_00 = (L_08932138 *)e;
        l->unk_04 = (L_08932138 *)e;
        e->unk_00 = (E_08932138 *)l;
        r = 1;
    }
    return r;
}

S_08932138 *func_08932138(S_08932138 *arg0) {
    E_08932138 *p;
    V_08932138 *v;
    u32 *n;
    L_08932138 *l;
    E_08932138 *e;
    u32 i;
    int r;

    arg0->unk_16C = D_08A47060;
    arg0->unk_114.unk_00 = (E_08932138 *)((u32)arg0 + ((u32)arg0 & 3));
    arg0->unk_114.unk_04 = 4;
    p = arg0->unk_114.unk_00;
    v = &arg0->unk_114;
    if ((u32)p != (u32)(p + arg0->unk_114.unk_04)) {
        n = &arg0->unk_114.unk_04;
        do {
            if (p != NULL) {
                p->unk_1C = D_08A4535C;
                p->unk_00 = NULL;
                p->unk_04 = NULL;
                p->unk_08 = NULL;
                p->unk_0C = NULL;
                func_088BFFB8(&p->unk_24);
            }
            p++;
        } while (p != v->unk_00 + *n);
    }
    l = &arg0->unk_11C;
    arg0->unk_11C.unk_24 = D_08A45350;
    func_08880754(l);
    l->unk_04 = l;
    l->unk_00 = l;
    func_0888065C(l);
    l = &arg0->unk_144;
    arg0->unk_144.unk_24 = D_08A45350;
    func_08880754(l);
    l->unk_04 = l;
    l->unk_00 = l;
    func_0888065C(l);
    i = 0;
    if (i < arg0->unk_114.unk_04) {
        do {
            e = &arg0->unk_114.unk_00[i];
            func_0881F5C0(e, 0, sizeof(E_08932138));
            e->unk_08 = e;
            if ((void *)&arg0->unk_144 != (void *)e) {
                r = link_08932138(&arg0->unk_144, e);
                e->unk_04 = (E_08932138 *)&arg0->unk_144;
                if (r) {
                    e->unk_0C = &arg0->unk_144;
                    arg0->unk_144.unk_20++;
                }
            }
        } while (++i < arg0->unk_114.unk_04);
    }
    return arg0;
}

}
