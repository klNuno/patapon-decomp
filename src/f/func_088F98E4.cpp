#include "common.h"

extern "C" {

class B {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18(f32);
};

class O : public B {
public:
    u8 pad_04[0x8CC];
    u8 unk_8D0;
};

typedef struct {
    u8 pad_00[0x500];
    s32 unk_500;
} S0;

s32 func_088D4D94(O *);
O *func_0892E80C(void *, s32);
extern void *D_08AD8DD8[];

void func_088F98E4(S0 *arg0) {
    void *g;

    if (arg0->unk_500 >= 0) {
        g = D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL;
        if (func_088D4D94(func_0892E80C(g, arg0->unk_500)) == 0) {
            g = D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL;
            func_0892E80C(g, arg0->unk_500)->v18(0.0f);
            g = D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL;
            func_0892E80C(g, arg0->unk_500)->unk_8D0 = 0;
            arg0->unk_500 = -1;
        }
    }
}

}
