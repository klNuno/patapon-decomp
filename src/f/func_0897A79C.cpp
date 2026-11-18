#include "common.h"

extern "C" {

typedef struct T0897A79C_N {
    struct T0897A79C_N *unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
    u8 unk_0C[0x4];
} T0897A79C_N;

struct T0897A79C_I {
    T0897A79C_N *unk_00;
    int eq(const T0897A79C_N *o) const { return o == unk_00; }
    bool ne(const T0897A79C_N *o) const { return !(bool)eq(o); }
};

class T0897A79C_O {
public:
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual void vfunc_10(s32);
};

typedef struct T0897A79C_T {
    u8 pad_00[0x18];
} T0897A79C_T;

typedef struct T0897A79C_S {
    u8 pad_00[0x4];
    T0897A79C_O *unk_04;
    u8 pad_08[0xEF0];
    T0897A79C_N unk_EF8;
} T0897A79C_S;

void func_0897A524(T0897A79C_N *);
void func_0897A848(T0897A79C_T *, s32);
void func_0897A904(T0897A79C_T *, u8 *);
void func_0897A948(T0897A79C_T *);

void func_0897A79C(T0897A79C_S *arg0) {
    T0897A79C_I e;
    T0897A79C_N *p;
    T0897A79C_T sp14;

    e.unk_00 = &arg0->unk_EF8;
    for (p = arg0->unk_EF8.unk_00; e.ne(p); p = p->unk_00) {
        arg0->unk_04->vfunc_10(p->unk_08);
        func_0897A948(&sp14);
        func_0897A904(&sp14, p->unk_0C);
        func_0897A848(&sp14, -1);
    }
    func_0897A524(&arg0->unk_EF8);
}

}
