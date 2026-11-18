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
    virtual s32 v50();
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
    u8 pad_00[0x38];
    u32 unk_38;
} S_08955EFC_B;

typedef struct {
    u8 pad_00[0xAA4];
    u8 *unk_AA4;
    u8 pad_AA8[0x216DC];
    s32 unk_22184;
} S0;

s32 func_0888AA98(void *);
S_08955EFC_B *func_0888AAA0(void *);
It func_0897C818(void *, s32);

struct CIt {
    N *unk_00;
    CIt(const It &i) : unk_00(i.unk_00) {}
};

inline N *endof(u8 *m) { return (N *)(m + 0x9C); }

inline bool ne(N *b, CIt a) { return a.unk_00 != b; }

void func_08955EFC(S0 *arg0, void *arg1) {
    if (func_0888AA98(arg1) == 1) {
        return;
    }
    if (func_0888AA98(arg1) == 2) {
        return;
    }
    if (func_0888AAA0(arg1) == NULL) {
        return;
    }
    if (func_0888AAA0(arg1)->unk_38 & 2) {
        return;
    }
    It it = func_0897C818(arg0->unk_AA4, 1);
    if (ne(endof(arg0->unk_AA4), CIt(it))) {
        if (it.unk_00->unk_10->v50()) {
            arg0->unk_22184 = 1;
        }
    }
}

}
