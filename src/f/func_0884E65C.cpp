#include "common.h"

extern "C" {

struct A_0884E65C {
    virtual void v08();
    virtual void v0C(void *, s32 *, s32);
    virtual void v10(s32);
};

struct H_0884E65C {
    s32 unk_00;
    A_0884E65C *unk_04;
    A_0884E65C *unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
};

typedef struct N_0884E65C {
    struct N_0884E65C *unk_00;
    u8 pad_04[0x4];
    u8 unk_08[0x4];
} N_0884E65C;

struct It_0884E65C {
    N_0884E65C *unk_00;
    int eq(N_0884E65C *o) const { return unk_00 == o; }
    bool ne(N_0884E65C *o) const { return !(bool)eq(o); }
};

typedef struct {
    u8 pad_00[0x198];
    N_0884E65C unk_198;
} S_0884E65C;

typedef struct {
    u8 pad_00[0x1C];
} T_0884E65C;

void func_0884E868(T_0884E65C *, void *);
void func_0884E824(T_0884E65C *, H_0884E65C *);
void func_0884E768(T_0884E65C *, s32);
void func_0884E8C0(void *, s32);

void func_0884E65C(S_0884E65C *arg0, s32 arg1) {
    H_0884E65C h;
    T_0884E65C t;
    It_0884E65C it;
    N_0884E65C *end;

    h.unk_00 = 0;
    h.unk_04 = NULL;
    h.unk_08 = NULL;
    h.unk_0C = NULL;
    it.unk_00 = arg0->unk_198.unk_00;
    end = &arg0->unk_198;
    while (it.ne(end)) {
        func_0884E868(&t, it.unk_00->unk_08);
        func_0884E824(&t, &h);
        func_0884E768(&t, -1);
        h.unk_08->v10(arg1);
        it.unk_00 = it.unk_00->unk_00;
    }
    if (h.unk_08 != NULL) {
        *h.unk_0C -= 1;
        if (h.count() == 0) {
            h.unk_04->v0C(h.unk_08, *(s32 **)&h.unk_0C, h.unk_00);
            func_0884E8C0(h.unk_08, h.unk_00);
        }
    }
}

}
