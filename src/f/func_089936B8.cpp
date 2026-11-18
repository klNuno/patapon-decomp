#include "common.h"

extern "C" {

class A {
public:
    virtual s32 *unk_08(void *, s32);
    virtual void unk_0C(void *, s32 *, s32);
};

struct PMF {
    f32 unk_00[3];
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C;
    u8 pad_0D[3];
    void *unk_10;
    PMF unk_14;
    void *unk_20;
} O;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} T;

typedef struct {
    T *unk_00;
    s32 unk_04;
} S;

struct C {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct SP {
    s32 unk_00;
    A *unk_04;
    void *unk_08;
    C unk_0C;
};

extern u8 D_08A44A3C[];
extern u8 D_08A48598[];
extern f32 D_08A06820[];
extern f32 D_08A06828[];
extern f32 D_08A0682C[];
void *func_08827A50(s32, s32);
A *func_08827AD4(void);
s32 func_08858BB4(void);
void func_0885F7EC(void *, s32);
s32 func_0888AFAC(char *);
void func_08993614(S *);
void func_08993858(T *, char *, s32, SP *);

void func_089936B8(S *arg0, char *arg1) {
    SP sp;
    PMF m;
    O *p;
    s32 h;
    s32 a;

    if (arg0->unk_00->unk_08 == 1) {
        return;
    }
    func_08993614(arg0);
    h = func_0888AFAC(arg1);
    a = func_08858BB4();
    if ((p = (O *)func_08827A50(0x24, func_08858BB4())) != NULL) {
        m.unk_00[0] = D_08A06820[1];
        m.unk_00[1] = D_08A06828[0];
        m.unk_00[2] = D_08A0682C[0];
        p->unk_10 = D_08A44A3C;
        p->unk_0C = 1;
        p->unk_00 = 0;
        p->unk_08 = 0;
        p->unk_04 = 0;
        p->unk_10 = D_08A48598;
        p->unk_0C = 0;
        p->unk_20 = arg0;
        p->unk_14 = m;
        p->unk_08 = h;
    }
    sp.unk_00 = a;
    sp.unk_04 = func_08827AD4();
    sp.unk_08 = p;
    sp.unk_0C.unk_00 = sp.unk_04->unk_08(p, sp.unk_00);
    *sp.unk_0C.unk_00 = 1;
    func_08993858(arg0->unk_00, arg1, arg0->unk_04, &sp);
    if (sp.unk_08 != NULL) {
        if (sp.unk_0C.release() == 0) {
            sp.unk_04->unk_0C(sp.unk_08, *(s32 **)&sp.unk_0C, sp.unk_00);
            func_0885F7EC(sp.unk_08, sp.unk_00);
        }
    }
}

}
