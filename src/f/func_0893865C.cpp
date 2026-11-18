#include "common.h"

extern "C" {

class C0 {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3C(s32);
    virtual void v40();
    virtual void v44();
    virtual s32 v48();
};

typedef struct {
    u8 pad_00[0x10];
    C0 *unk_10;
} N;

struct It {
    N *unk_00;
    It(const It &o) : unk_00(o.unk_00) {}
};

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088586E8(void);
u8 *func_089B53D8(s32);
It func_0897C818(void *, s32);

struct CIt {
    N *unk_00;
    CIt(const It &i) : unk_00(i.unk_00) {}
};

inline N *endof(u8 *m) { return (N *)(m + 0xB0); }

inline bool eq(N *b, CIt a) { return a.unk_00 == b; }

inline bool ne(N *b, CIt a) { return !eq(b, a); }

void func_0893865C(void *arg0, void *arg1) {
    s32 *a;
    s32 *b;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    It it = func_0897C818(func_089B53D8(func_088586E8()) + 0x14, *a);
    *b = ne(endof(func_089B53D8(func_088586E8())), CIt(it)) && it.unk_00->unk_10->v48() != 0;
    func_08852F00(arg1, 0);
}

}
