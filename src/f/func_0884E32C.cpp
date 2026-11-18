#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) {
    return p;
}

typedef struct N N;
struct N {
    N *unk_00;
    N *unk_04;
    u8 pad_08[0x10];
};

class PB {
public:
    u8 pad_00[8];
    virtual N *v08();
    virtual u32 v0C();
};

class A {
public:
    virtual u8 *v08(u32, s32);
};

typedef struct {
    N *unk_00;
    N *unk_04;
    void *unk_08;
    u8 unk_0C[0x184];
    u8 *unk_190;
    N *unk_194;
    N *unk_198;
    void *unk_19C;
    s32 unk_1A0;
} Pool;

typedef struct {
    u8 *unk_00;
    u32 unk_04;
    A *unk_08;
} V8;

typedef struct {
    A *unk_00;
    V8 unk_04;
} M1A8;

typedef struct {
    s32 *unk_00;
    u32 unk_04;
} V32;

typedef struct {
    u8 pad_00[0x404];
    V32 unk_404;
} M1D8;

typedef struct {
    u8 pad_00[0x20];
} M1B8;

typedef struct {
    void *unk_00;
    Pool unk_04;
    M1A8 unk_1A8;
    M1B8 unk_1B8;
    M1D8 unk_1D8;
} Obj;

extern u8 D_08A44838[];
extern u8 D_08A44848[];
extern u8 D_08A44858[];
extern s32 D_089F81BC[];

void func_0884E9D4(M1B8 *, A *, u32, u32);

Obj *func_0884E32C(Obj *arg0, u32 arg1, u32 arg2, A *arg3) {
    Pool *p;
    N *n;
    u32 i;

    arg0->unk_00 = D_08A44838;
    arg0->unk_04.unk_08 = D_08A44858;
    p = &arg0->unk_04;
    arg0->unk_04.unk_08 = D_08A44848;
    arg0->unk_04.unk_190 = (u8 *)(((u32)p->unk_0C + 3) & ~3);
    n = ((PB *)p)->v08();
    p->unk_00 = n;
    p->unk_04 = n + (((PB *)p)->v0C() - 1);
    n->unk_04 = (N *)p;
    p->unk_04->unk_00 = (N *)p;
    for (i = 1; i < ((PB *)p)->v0C(); i++) {
        N *prev = n;
        n++;
        prev->unk_00 = n;
        n->unk_04 = prev;
    }
    p->unk_19C = p;
    p->unk_1A0 = 0;
    {
        N *h = (N *)&p->unk_194;
        p->unk_194 = h;
        p->unk_198 = h;
    }

    arg0->unk_1A8.unk_00 = arg3;
    arg0->unk_1A8.unk_04.unk_00 = NULL;
    arg0->unk_1A8.unk_04.unk_04 = 0x200;
    arg0->unk_1A8.unk_04.unk_08 = arg0->unk_1A8.unk_00;
    M1A8 *m = &arg0->unk_1A8;
    if (m->unk_04.unk_04 != 0) {
        u8 *q;
        u8 *end;
        q = m->unk_04.unk_00 = m->unk_04.unk_08->v08(m->unk_04.unk_04, 0x20);
        end = q + m->unk_04.unk_04;
        do {
            new (q++) u8();
        } while (q != end);
    }
    func_0884E9D4(&arg0->unk_1B8, arg3, arg1, arg2);
    arg0->unk_1D8.unk_404.unk_00 = (s32 *)(((u32)&arg0->unk_1D8 & 3) + (u32)arg0 + 0x1D8);
    arg0->unk_1D8.unk_404.unk_04 = 0x100;
    {
        s32 *q = arg0->unk_1D8.unk_404.unk_00;
        s32 *&data = arg0->unk_1D8.unk_404.unk_00;
        if ((u32)q != (u32)(q + arg0->unk_1D8.unk_404.unk_04)) {
            u32 &cnt = arg0->unk_1D8.unk_404.unk_04;
            do {
                new (q) s32(*(volatile s32 *)D_089F81BC);
                q++;
            } while (q != data + cnt);
        }
    }
    return arg0;
}

}
