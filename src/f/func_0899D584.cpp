#include "common.h"

extern "C" {

struct V {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;

    V(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
        u8 *p = (u8 *)this;
        s32 n = 16;
        if (p != NULL) {
            do {
                *p++ = 0;
            } while (--n != 0);
        }
        unk_00 = arg0;
        unk_04 = arg1;
        unk_08 = arg2;
        unk_0C = arg3;
    }
};

struct A {
    u8 pad_00[0x34];
    s32 unk_34;
    u8 pad_38[0x68];
    char unk_A0[0x20];
    u8 unk_C0[1];
};

struct B {
    u8 pad_00[0x10];
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
    virtual void unk_40();
    virtual void unk_44();
    virtual s32 unk_48(u8 *);
};

struct C {
    u8 pad_00[0x48];
    u8 unk_48[4];
    u8 pad_4C[0x28];
    char unk_74[0x20];
    s32 unk_94;
    s32 unk_98;
    s32 unk_9C;
};

struct E {
    u8 pad_00[0x40];
    B *unk_40;
    s32 unk_44;
    u8 pad_48[0x38];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

struct S_0899D880 {
    u8 pad_00[0xA0];
    s32 unk_A0;
    u8 pad_A4[0x17C];
    s32 unk_220;
    u8 pad_224[0x44C];
    C *unk_670;
    u8 pad_674[0xC];
    E unk_680;
    u8 pad_704[0xE8];
    u8 unk_7EC;
};

s32 func_08856400(s32);
extern void func_08865FEC(s32, s32, s32);
void func_08866028(void *);
void func_0899D880(S_0899D880 *, s32, char *);
s32 func_0899DF2C(S_0899D880 *, char *);
void func_0899E1FC(void *);
s32 func_089A1240(char *);
s32 func_089A1258(s32, s32);
s32 func_089A1268(s32, s32);

void func_0899D584(S_0899D880 *arg0, char *arg1, C *arg2) {
    C *p;
    C *q;
    A *a;
    s32 k;
    s32 r;
    S_0899D880 *s;
    s32 *v;
    u32 i;
    u32 j;

    arg0->unk_670 = arg2;
    arg0->unk_7EC = 0;
    func_08866028(&arg0->unk_680);
    func_08865FEC((s32)&arg0->unk_680, func_089A1240(arg1), 1);
    arg0->unk_680.unk_14(2, 1);
    p = arg0->unk_670;
    if (p != NULL) {
        V c((f32)(u32)p->unk_48[0] / 255.0f, (f32)(u32)p->unk_48[1] / 255.0f,
            (f32)(u32)p->unk_48[2] / 255.0f, (f32)(u32)p->unk_48[3] / 255.0f);
        arg0->unk_680.unk_44 = func_08856400((s32)&c);
    } else {
        V c(1.0f, 1.0f, 1.0f, 1.0f);
        arg0->unk_680.unk_44 = func_08856400((s32)&c);
    }
    func_0899E1FC(arg0);
    i = 0;
    do {
        a = (A *)func_089A1258((s32)arg1, i);
        if (a != NULL) {
            k = a->unk_34;
            r = arg0->unk_680.unk_40->unk_48(a->unk_C0);
            s = (S_0899D880 *)((u8 *)arg0 + k * 0x220);
            s->unk_A0 = r;
            v = &s->unk_A0;
            p = arg0->unk_670;
            if (p != NULL) {
                q = (C *)((u8 *)p + k * 0x30);
                s->unk_220 = q->unk_98;
                ((C *)((u8 *)arg0->unk_670 + k * 0x30))->unk_9C = *v;
                if (arg2->unk_94 == 0 || !(u8)func_0899DF2C(arg0, arg2->unk_74)) {
                    j = 0;
                    do {
                        a = (A *)func_089A1268((s32)arg1, j);
                        if (a != NULL) {
                            k = a->unk_34;
                            if (k == i) {
                                func_0899D880(arg0, k, a->unk_A0);
                            }
                        }
                    } while (++j < 3);
                } else if (arg2->unk_94 != 0) {
                    func_0899D880(arg0, i, arg2->unk_74);
                }
            }
        }
        ++i;
        arg2 = (C *)((u8 *)arg2 + 0x30);
    } while (i < 3);
}

}
