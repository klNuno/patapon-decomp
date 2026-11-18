#include "common.h"

extern "C" {

struct A_089D1CA4 {
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

typedef struct {
    u8 pad_00[0x890];
    f32 unk_890;
    f32 unk_894;
} O_089D1CA4;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} F_089D1CA4;

struct H_089D1CA4 {
    s32 unk_00;
    A_089D1CA4 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
};

void func_08874714(s32, s32);
void func_089D0A5C(H_089D1CA4 *, void *);

void func_089D1CA4(void *arg0, F_089D1CA4 *arg1) {
    H_089D1CA4 h;
    s32 *q;
    O_089D1CA4 *o;

    func_089D0A5C(&h, arg0);
    o = (O_089D1CA4 *)h.unk_08;
    o->unk_890 = arg1->unk_00;
    o->unk_894 = arg1->unk_04;
    if (h.unk_08 != 0) {
        *(s32 *)*(s32 *volatile *)&h.unk_0C -= 1;
        q = *(s32 *volatile *)&h.unk_0C;
        if ((q != NULL ? *q : 0) == 0) {
            h.unk_04->v0C(h.unk_08, h.unk_0C, h.unk_00);
            func_08874714(h.unk_08, h.unk_00);
        }
    }
}

}
