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
    virtual void v3C();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4C();
    virtual void v50();
    virtual s32 v54();
};

typedef struct {
    u8 pad_00[0x10];
    C0 *unk_10;
} N;

struct It {
    N *unk_00;
    It(const It &o) : unk_00(o.unk_00) {}
};

typedef struct {
    u8 pad_00[0x8];
    u8 unk_08[4];
} S0;

s32 func_088586E8(void);
u8 *func_089B53D8(s32);
It func_0897C818(void *, s32);
void func_0887A910(void *, s32, s32);

struct CIt {
    N *unk_00;
    CIt(const It &i) : unk_00(i.unk_00) {}
};

inline N *endof(u8 *m) { return (N *)(m + 0xB0); }

inline bool ne(N *b, CIt a) { return a.unk_00 != b; }

void func_08956ABC(S0 *arg0) {
    It it = func_0897C818(func_089B53D8(func_088586E8()) + 0x14, 1);
    if (ne(endof(func_089B53D8(func_088586E8())), CIt(it))) {
        func_0887A910(arg0->unk_08, 0, it.unk_00->unk_10->v54());
    }
}

}
