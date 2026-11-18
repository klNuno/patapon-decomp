#include "common.h"

extern "C" {

class Del_088D9864 {
public:
    virtual s32 *vf_08(void *, s32);
    virtual void vf_0C(void *, s32 *, s32);
};

void func_08874714(void *, s32);
Del_088D9864 *func_08827AD4(void);

class Ptr_088D9864 {
public:
    s32 unk_00;
    Del_088D9864 *unk_04;
    void *unk_08;
    s32 *unk_0C;
    Ptr_088D9864(void *t, s32 a)
        : unk_00(a), unk_04(func_08827AD4()), unk_08(t), unk_0C(unk_04->vf_08(t, *(volatile s32 *)&unk_00)) {
        *unk_0C = 1;
    }
    void release() {
        if (unk_08 != NULL) {
            --*unk_0C;
            s32 *c = *(s32 *volatile *)&unk_0C;
            if ((c != NULL ? *c : 0) == 0) {
                unk_04->vf_0C(unk_08, c, unk_00);
                func_08874714(unk_08, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x109B0];
} E_088D9864;

typedef struct {
    u8 pad_00[0x84D90];
    E_088D9864 *unk_84D90;
    s32 unk_84D94;
    u8 pad_84D98[0xDC];
    u8 unk_84E74[4];
} T_088D9864;

void func_088D8908(void *);
void func_088D9AB8(T_088D9864 *, s32);
void *func_08827A50(s32, s32);
void *func_0897CF28(void *, s32);
void func_088D99E8(E_088D9864 *, Ptr_088D9864 *);

void func_088D9864(T_088D9864 *arg0, s32 arg1, s32 arg2) {
    E_088D9864 *p;
    E_088D9864 *e;
    void *o;

    func_088D8908(arg0->unk_84E74);
    func_088D9AB8(arg0, 0);
    p = arg0->unk_84D90;
    e = p + arg0->unk_84D94;
    for (; p != e; p++) {
        o = func_08827A50(0xA20, arg1);
        if (o != NULL) {
            o = func_0897CF28(o, arg2);
        }
        Ptr_088D9864 h(o, arg1);
        func_088D99E8(p, &h);
        h.release();
    }
}

}
