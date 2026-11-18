#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) {
    return p;
}

class Del_089AFBE0 {
public:
    virtual s32 *vf_08(s32, s32);
    virtual void vf_0C(s32, s32 *, s32);
};

void func_089B0B00(s32, s32);
Del_089AFBE0 *func_08827AD4(void);

class Ptr_089AFBE0 {
public:
    s32 unk_00;
    Del_089AFBE0 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    Ptr_089AFBE0(s32 t, s32 a)
        : unk_00(a), unk_04(func_08827AD4()), unk_08(t), unk_0C(unk_04->vf_08(t, *(volatile s32 *)&unk_00)) {
        *unk_0C = 1;
    }
    Ptr_089AFBE0(const Ptr_089AFBE0 &o) {
        unk_00 = *(volatile s32 *)&o.unk_00;
        unk_04 = o.unk_04;
        unk_08 = *(volatile s32 *)&o.unk_08;
        unk_0C = o.unk_0C;
        if (unk_08 != 0) {
            ++*unk_0C;
        }
    }
    void release() {
        if (unk_08 != 0) {
            --*unk_0C;
            s32 *c = *(s32 *volatile *)&unk_0C;
            if ((c != NULL ? *c : 0) == 0) {
                unk_04->vf_0C(unk_08, c, unk_00);
                func_089B0B00(unk_08, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x5C];
    s32 unk_5C;
    u8 pad_60[0x88];
    Ptr_089AFBE0 *unk_E8;
    s32 unk_EC;
    u8 pad_F0[0x8C];
    u8 unk_17C[0x14];
    u8 unk_190[4];
} A_089AFBE0;

extern s32 func_089B3448(s32, s32);
s32 func_08827A50(s32, s32);
s32 func_088FCDC0(s32, void *, void *);

void func_089AFBE0(A_089AFBE0 *arg0, s32 arg1) {
    u32 i;
    s32 a;
    s32 t;

    func_089B3448((s32)arg0, arg1);
    for (i = 0; i < 5; i++) {
        a = arg0->unk_5C;
        t = func_08827A50(0x20, a);
        if (t != 0) {
            t = func_088FCDC0(t, arg0->unk_17C, arg0->unk_190);
        }
        Ptr_089AFBE0 h(t, a);
        new (&arg0->unk_E8[arg0->unk_EC]) Ptr_089AFBE0(h);
        arg0->unk_EC++;
        h.release();
    }
}

}
