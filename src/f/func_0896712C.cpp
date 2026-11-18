#include "common.h"

extern "C" {

class Del {
public:
    virtual s32 *vf_08(s32, s32);
    virtual void vf_0C(s32, s32 *, s32);
};

class Ptr {
public:
    s32 unk_00;
    Del *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release();
};

class K {
public:
    s32 unk_00;
    u8 unk_04;
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    u8 pad_0C[0x14];
    u8 unk_20[0x1C4];
    s32 unk_1E4;
};

s32 func_08827A50(s32, s32);
Del *func_08827AD4(void);
void func_08891578(s32, s32);
void func_08941FA8(void *, Ptr *);
s32 func_089A67D8(s32, s32);

void func_0896712C(K *arg0) {
    Ptr h;
    s32 heap;
    s32 p;

    arg0->v15();
    heap = arg0->unk_00;
    if ((p = func_08827A50(0x14, heap)) != 0) {
        p = func_089A67D8(p, arg0->unk_1E4);
    }
    h.unk_00 = heap;
    h.unk_04 = func_08827AD4();
    h.unk_08 = p;
    h.unk_0C = h.unk_04->vf_08(p, h.unk_00);
    *h.unk_0C = 1;
    func_08941FA8(arg0->unk_20, &h);
    {
        s32 &q = h.unk_08;
        if (q != 0) {
            s32 *&c = h.unk_0C;
            *c -= 1;
            if (h.count() == 0) {
                h.unk_04->vf_0C(q, c, h.unk_00);
                func_08891578(q, h.unk_00);
            }
        }
    }
    arg0->unk_04 = 1;
}

}
