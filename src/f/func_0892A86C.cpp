#include "common.h"

extern "C" {

struct A_0892ACA8 {
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

struct H_0892ACA8 {
    s32 unk_00;
    A_0892ACA8 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
};

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    u8 pad_08[8];
} W;

typedef struct {
    u8 pad_00[0x48];
    s8 unk_48[0x28];
    f32 unk_70;
} U;

typedef struct {
    u8 pad_00[0x1640];
    u8 unk_1640[8];
    void *unk_1648;
} T;

s32 func_0892A498(T *, s32, s32, W *, s32, s32);
extern s32 func_08945908(s32, s32);
s32 func_08991310(void *, s8 *);
void func_089913A0(H_0892ACA8 *, void *, s32);
void func_0892B7AC(s32, s32);
void func_0886A45C(s32, s32);
void func_0892CAA0(s32, V *);
void func_0892C070(s32, s32, s32);

s32 func_0892A86C(T *arg0, s32 arg1, s32 arg2, s32 arg3) {
    H_0892ACA8 h;
    W w;
    V v;
    s32 temp;
    s32 i;
    U *p;

    w.unk_00 = 0.0f;
    w.unk_04 = 0.0f;
    temp = func_0892A498(arg0, 0x6F, arg2, &w, 3, arg3);
    if (temp == 0) {
        return 0;
    }
    p = (U *)func_08945908((s32)arg0->unk_1640, arg1);
    i = func_08991310(arg0->unk_1648, p->unk_48);
    if (i != -1) {
        func_089913A0(&h, arg0->unk_1648, i);
        func_0892B7AC(temp, h.unk_08);
        if (h.unk_08 != 0) {
            *h.unk_0C -= 1;
            if (h.count() == 0) {
                h.unk_04->v0C(h.unk_08, *(s32 **)&h.unk_0C, h.unk_00);
                func_0886A45C(h.unk_08, h.unk_00);
            }
        }
    }
    v.unk_04 = p->unk_70;
    v.unk_00 = 0.0f;
    func_0892CAA0(temp, &v);
    func_0892C070(temp, arg1, 0);
    return temp;
}

}
