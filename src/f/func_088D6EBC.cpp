#include "common.h"

extern "C" {

typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
    u8 unk_08[1];
} N;

struct I {
    N *unk_00;

    I() {}
    I(N *n) { unk_00 = n; }
};

typedef struct {
    u8 pad_00[0xA4];
} O;

void func_0889B278(O *, s32);
void func_0889B528(O *, s32);
void func_0889B5D4(u8 *, u8 *);
void func_088D6BA8(I *, void *);
void func_088D6F94(void *, I, const O *);
void func_088D7330(void *);

union J {
    N *unk_00;
    f32 temp;
};

struct E {
};

inline void destroy(void *p, const E &) { func_088D7330(p); }

struct L {
    N *unk_00;
    N *unk_04;
    N *unk_08;
    u32 unk_0C;

    void erase(volatile J &it, volatile J &it2) {
        N *f;
        N *n;
        N *next;
        N *last;

        N *temp3 = unk_00;
        u32 temp = *(volatile u32 *)&unk_0C;
        it2.unk_00 = temp3;
        f32 temp2 = it2.temp;
        *(volatile u32 *)&unk_0C = temp - 1;
        it.temp = temp2;
        destroy(it.unk_00->unk_08, E());
        f = unk_08;
        n = it.unk_00;
        next = n->unk_00;
        n->unk_04->unk_00 = next;
        last = next->unk_04;
        next->unk_04 = n->unk_04;
        n->unk_04 = f->unk_04;
        f->unk_04->unk_00 = n;
        f->unk_04 = last;
        last->unk_00 = f;
    }
    I end() { I r; func_088D6BA8(&r, this); return r; }
    void push_back(const O &v) { func_088D6F94(this, end(), &v); }
};

typedef struct {
    u8 pad_00[0x2C4];
    L unk_2C4;
    u8 unk_2D4[0x10];
    s32 unk_2E4;
} T;

u8 *func_088D6EBC(T *arg0) {
    volatile J it;
    O o;
    volatile J temp;

    if (arg0->unk_2C4.unk_0C >= 4) {
        arg0->unk_2C4.erase(temp, it);
    }
    func_0889B278(&o, arg0->unk_2E4);
    arg0->unk_2C4.push_back(o);
    func_0889B528(&o, -1);
    func_0889B5D4(arg0->unk_2C4.unk_04->unk_08, arg0->unk_2D4);
    return arg0->unk_2C4.unk_04->unk_08;
}

}
