#include "common.h"
extern "C" {
class V {
public:
    u8 pad_00[0x18];
    virtual void unk_08();
    virtual s32 unk_0C();
};
extern u32 D_089DDF2C[];
struct T {
    u32 unk_00;
    u32 unk_04;
    s32 unk_08() {
        s32 x = unk_00 == D_089DDF2C[0];
        if (x != 0)
            x = (unk_04 & 1U) != 0;
        return x;
    }
};
struct S {
    T *unk_00;
    u8 pad_04[0x5C];
    s32 unk_60;
};
struct E {
    u8 pad_00[8];
    s32 unk_08;
    s32 unk_0C;
};
struct I {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    E *unk_0C;
    char *unk_10;
    s32 unk_18(const I &arg0) const {
        s32 r = 0;
        if (unk_04 == arg0.unk_04 && unk_08 == arg0.unk_08)
            r = 1;
        return r;
    }
    bool unk_1C(const I &arg0) const {
        return !(bool)unk_18(arg0);
    }
    s32 unk_14() const {
        s32 r = 0;
        if (unk_0C != NULL && unk_0C->unk_0C != 0)
            r = 1;
        return r;
    }
};

extern u32 D_089DDF2C[];
extern char D_089F9BE0[];
extern char D_089F9BE4[];
extern void *D_08AD1E28[];
s32 func_08822AD0(char *, char *);
void func_088698FC(void *, void *, void *, s32, s32, s32, s32, s32, s32);
void func_088836EC(s32 *, s32, s32, s32);
E *func_0888B0E4(T **, s32);
void func_0888B0F8(s32, char *);
void func_0888B104(s32, char *);
void func_0888B2D8(I *, s32);

static inline void *temp_00() {
    void *p = D_08AD1E28[0];
    if (p != NULL)
        return p;
    return NULL;
}

s32 func_08883470(S *arg0, void *arg1, s32 arg2)
{
    T *p;
    I it;
    I end;
    void *d;
    s32 a2;
    d = temp_00();
    a2 = arg2;
    s32 n = 0;

    if (((V *)arg0)->unk_0C() == 1)
        n = arg0->unk_60;
    T *q = arg0->unk_00;
    if (q == NULL)
        return 0;
    if (q->unk_00 != D_089DDF2C[0])
        return 0;
    if (q->unk_08() == 0)
        return 0;
    p = q;
    func_0888B0F8((s32)&it, (char *)&p);
    func_0888B104((s32)&end, (char *)&p);
    while (it.unk_1C(end)) {
        if (it.unk_14()) {
            E *e = func_0888B0E4(&p, it.unk_10 != NULL ? (s32)(it.unk_10 + 7) : 0);
            if (e != NULL) {
                s32 b;
                s32 a;
                char *s;
                char *t;
                s32 j;
                s32 i;
                a = e->unk_08;
                b = e->unk_0C;
                a += n;
                if (it.unk_10 != NULL)
                    s = it.unk_10 + 7;
                else
                    s = NULL;
                j = -1;
                i = 0;
                if (s[0] != 0) {
                    do {
                        if (s[i] == '.') {
                            j = i;
                            ++i;
                        } else {
                            ++i;
                        }
                    } while (s[i] != 0);
                }
                t = s + (j + 1);
                if (func_08822AD0(t, D_089F9BE0) == 0) {
                    func_088698FC(d, arg1, (void *)func_088836EC, a2, b, a, 0, 0, 0);
                } else if (func_08822AD0(t, D_089F9BE4) == 0) {
                    func_088698FC(d, arg1, (void *)func_08883470, a2, 0x800, a, 0, 0, 0);
                }
            }
        }
        func_0888B2D8(&it, 1);
    }
    return 1;
}
}
