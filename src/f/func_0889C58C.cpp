#include "common.h"

extern "C" {

class E {
public:
    virtual void v00();
    virtual void v01(s32);
    virtual void v02(s32, s32);
    virtual void v03();
    virtual void v04();
    virtual void v05();
};

typedef struct {
    u8 pad_00[0x28];
    E **unk_28;
    u32 unk_2C;
    u32 unk_30;
    u32 unk_34;
} S;

struct A {};

inline void func_0889C58C_00(E *arg0, const A &) {
    arg0->v05();
}

void func_0889C58C(S *arg0, s32 arg1, u32 arg2) {
    u32 n = (arg2 >> 16) & 0xF;
    u32 m = arg2 & 0xFF;

    switch ((arg2 >> 8) & 0xFF) {
    case 0x6E:
        arg0->unk_30 = m;
        break;
    case 0x6F: {
        arg0->unk_34 = m;
        u32 t = *(volatile u32 *)&arg0->unk_30;
        n = (u32)arg0->unk_28;
        m = (t << 7) | (s32)m;
        E **&q = arg0->unk_28;
        if (n != (u32)(q + arg0->unk_2C)) {
            u32 &k = arg0->unk_2C;
            do {
                (*(E **)n)->v01(m);
                n += 4;
            } while (n != (u32)(q + k));
        }
        break;
    }
    case 0x70: {
        E **p = arg0->unk_28;
        E **&q = arg0->unk_28;
        if ((u32)p != (u32)(q + arg0->unk_2C)) {
            u32 &k = arg0->unk_2C;
            do {
                (*p)->v02(n, m);
            } while (++p != q + k);
        }
        break;
    }
    case 0x71: {
        E **p = arg0->unk_28;
        E **&q = arg0->unk_28;
        if ((u32)p != (u32)(q + arg0->unk_2C)) {
            u32 &k = arg0->unk_2C;
            do {
                (*p)->v03();
            } while (++p != q + k);
        }
        break;
    }
    case 0x73: {
        E **p = arg0->unk_28;
        E **&q = arg0->unk_28;
        if ((u32)p != (u32)(q + arg0->unk_2C)) {
            u32 &k = arg0->unk_2C;
            do {
                (*p)->v04();
            } while (++p != q + k);
        }
        break;
    }
    case 0x72: {
        E **p = arg0->unk_28;
        E **&q = arg0->unk_28;
        if ((u32)p != (u32)(q + arg0->unk_2C)) {
            u32 &k = arg0->unk_2C;
            do {
                func_0889C58C_00(*p, A());
            } while (++p != q + k);
        }
        break;
    }
    }
}

}
