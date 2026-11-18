#include "common.h"

extern "C" {

class T;

typedef bool (T::*P)(u32, bool);

typedef struct {
    f32 unk_00;
    P unk_04;
} E;

typedef struct {
    E *unk_00;
    s32 unk_04;
} N;

typedef struct {
    N *unk_00;
} I;

typedef struct {
    u8 pad_00[0x10];
} L;

typedef struct {
    T *unk_00;
    u8 pad_04[0x220];
    L unk_224;
    f32 unk_234;
} S;

void func_0891D330(I *, L *);
void func_0891D338(I *, L *);
s32 func_0891D918(I *, I *);
void func_0891D930(I *);
void func_0891D944(I *, I *);
void func_0891D954(I *, L *, N *);
N *func_0891D9E4(I *);

void func_0891D7D8(S *arg0, u32 arg1) {
    I a;
    I b;
    I c;
    N *p;
    bool t;

    func_0891D338(&a, &arg0->unk_224);
    func_0891D330(&b, &arg0->unk_224);
    if (func_0891D918(&a, &b) != 0) {
        do {
            p = func_0891D9E4(&a);
            t = false;
            if (p->unk_00->unk_00 < arg0->unk_234) {
                t = (arg0->unk_00->*p->unk_00->unk_04)(arg1, p->unk_04 == 0);
                p->unk_04 = 1;
            }
            if (t == true) {
                func_0891D954(&c, &arg0->unk_224, a.unk_00);
                func_0891D944(&a, &c);
            } else {
                func_0891D930(&a);
            }
        } while (func_0891D918(&a, &b) != 0);
    }
    arg0->unk_234 += (f32)arg1 / 4800.0f;
}

}
