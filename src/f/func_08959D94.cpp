#include "common.h"

extern "C" {

class Del_08959D94 {
public:
    virtual s32 *vf_08(void *, s32);
    virtual void vf_0C(void *, s32 *, s32);
};

void func_0895A68C(void *, s32);
Del_08959D94 *func_08827AD4(void);

class Ptr_08959D94 {
public:
    s32 unk_00;
    Del_08959D94 *unk_04;
    void *unk_08;
    s32 *unk_0C;
    Ptr_08959D94(void *t, s32 a)
        : unk_00(a), unk_04(func_08827AD4()), unk_08(t), unk_0C(unk_04->vf_08(t, *(volatile s32 *)&unk_00)) {
        *unk_0C = 1;
    }
    void release() {
        if (unk_08 != NULL) {
            --*unk_0C;
            s32 *c = *(s32 *volatile *)&unk_0C;
            if ((c != NULL ? *c : 0) == 0) {
                unk_04->vf_0C(unk_08, unk_0C, unk_00);
                func_0895A68C(unk_08, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x1D70];
    s32 unk_1D70;
} T_08959D94;

typedef struct {
    void *unk_00;
} It_08959D94;

typedef struct {
    u8 pad_00[0x1D60];
    u8 unk_1D60[4];
} S_08959D94;

s32 func_089598B4(void);
s32 func_08858BCC(void);
void *func_08827A50(s32, s32);
T_08959D94 *func_08959040(void *);
void func_089598BC(T_08959D94 *, s32);
void func_08959394(It_08959D94 *, void *);
void func_08959FA0(void *, It_08959D94, Ptr_08959D94 *);

T_08959D94 *func_08959D94(S_08959D94 *arg0, s32 arg1) {
    s32 a;
    void *o;
    T_08959D94 *r;

    if ((u8)func_089598B4() == 0) {
        return 0;
    }
    a = func_08858BCC();
    o = func_08827A50(0x1DC0, func_08858BCC());
    if (o != NULL) {
        o = func_08959040(o);
    }
    Ptr_08959D94 h(o, a);
    It_08959D94 it;
    func_089598BC((T_08959D94 *)h.unk_08, arg1);
    ((T_08959D94 *)h.unk_08)->unk_1D70 = 0;
    func_08959394(&it, arg0->unk_1D60);
    func_08959FA0(arg0->unk_1D60, it, &h);
    r = *(T_08959D94 *volatile *)&h.unk_08;
    h.release();
    return r;
}

}
