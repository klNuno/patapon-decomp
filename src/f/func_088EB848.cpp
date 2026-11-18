#include "common.h"

extern "C" {

class B_088EB848 {
public:
    s32 unk_00;
    u8 pad_04[0x24];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32);
};

struct P_088EB848 {
    u8 pad_00[0x30];
};

class Q_088EB848 : public P_088EB848, public B_088EB848 {
};

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
    u8 pad_36B14[0xC];
    u8 unk_36B20[4];
} W_088EB848;

typedef struct {
    u8 pad_00[0x14];
    W_088EB848 *unk_14;
} A_088EB848;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
Q_088EB848 *func_08890D90(s32, s32);
s32 func_08894FBC(s32, s32, s32);
s32 func_08899E18(s32, s32);
void func_088CE1EC(void *, B_088EB848 *);
void func_088CE494(void *, B_088EB848 *);

void func_088EB848(A_088EB848 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    s32 *e;
    W_088EB848 *w;
    s32 r;
    Q_088EB848 *q;
    u8 *t;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    e = func_0885356C(arg1, 4, 1, 4);
    w = arg0->unk_14;
    if (w != NULL && !(*a != 0 && *a != 1)) {
        r = func_08894FBC(func_08899E18(w->unk_36B10, *a), *b, 1);
        if (r != 0) {
            q = func_08890D90(r, *c);
            if (q != NULL) {
                t = arg0->unk_14->unk_36B20;
                if (*d != 0) {
                    if (q->unk_00 == 0) {
                        func_088CE1EC(t, q);
                    }
                    q->unk_14(*e);
                } else {
                    func_088CE494(t, q);
                }
            }
        }
    }
    func_08852F00(arg1, 0);
}

}
