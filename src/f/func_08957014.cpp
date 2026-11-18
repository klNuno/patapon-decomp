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
    virtual void v54();
    virtual void v58();
    virtual void v5C(s32);
};

typedef struct {
    u8 pad_00[0x10];
    C0 *unk_10;
} N;

struct It {
    N *unk_00;
    It(const It &o) : unk_00(o.unk_00) {}
};

struct CIt {
    N *unk_00;
    CIt(const It &i) : unk_00(i.unk_00) {}
};

typedef struct {
    u8 pad_00[0x8];
    u8 unk_08[0x28];
    s32 unk_30;
    u8 pad_34[0xAA4 - 0x34];
    u8 *unk_AA4;
} S0;

void func_0887B2F8(void *);
It func_0897C818(void *, s32);

inline N *endof(u8 *m) { return (N *)(m + 0x9C); }

inline bool ne(N *b, CIt a) { return a.unk_00 != b; }

void func_08957014(S0 *arg0, s32 arg1) {
    arg0->unk_30 = arg1;
    func_0887B2F8(arg0->unk_08);
    It it = func_0897C818(arg0->unk_AA4, 1);
    if (ne(endof(arg0->unk_AA4), CIt(it))) {
        it.unk_00->unk_10->v5C(arg1);
    }
    it = func_0897C818(arg0->unk_AA4, 2);
    if (ne(endof(arg0->unk_AA4), CIt(it))) {
        it.unk_00->unk_10->v5C(arg1);
    }
}

}
