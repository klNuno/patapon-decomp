#include "common.h"

extern "C" {

struct E {
    f32 unk_00;
    f32 unk_04;
};

struct V {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40(s32 *, s32);
};

struct T : V {
    u8 pad_04[0xE80];
    E *unk_E84;
    u32 unk_E88;
};

extern f32 D_08A000C0[];
s32 func_0890D24C(void);

void func_0890D254(T *arg0, s32 arg1) {
    s32 a;
    volatile E e;
    E *p;
    E *q;
    u32 m;
    u32 i;

    a = arg1;
    arg0->unk_40(&a, 0);
    p = arg0->unk_E84;
    u32 &n = arg0->unk_E88;
    E *&b = arg0->unk_E84;
    m = arg0->unk_E88;
    if ((u32)p != (u32)(p + m)) {
        do {
            p++;
            m = n;
        } while (p != b + m);
    }
    arg0->unk_E88 = 0;
    i = 0;
    if (func_0890D24C() != 0) {
        do {
            q = arg0->unk_E84 + arg0->unk_E88;
            if (q != NULL) {
                e.unk_00 = D_08A000C0[0];
                e.unk_04 = D_08A000C0[1];
                q->unk_00 = e.unk_00;
                q->unk_04 = e.unk_04;
            }
            i++;
            arg0->unk_E88++;
        } while (i < (u32)func_0890D24C());
    }
    *(s32 *)&b[0].unk_00 = 3;
    *(s32 *)&(b + n)[-1].unk_00 = 5;
}
}
