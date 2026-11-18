#include "common.h"

extern "C" {

class Del_0889667C {
public:
    virtual s32 *vf_08(s32, s32);
    virtual void vf_0C(s32, s32 *, s32);
};

class Ptr_0889667C {
public:
    s32 unk_00;
    Del_0889667C *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release();
};

class K_0889667C {
public:
    s32 unk_00;
    u8 pad_04[4];
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27(s32);
    u8 pad_0C[0x1B0 - 0xC];
    u8 unk_1B0[0x374 - 0x1B0];
    s32 unk_374;
    u8 pad_378[8];
    u8 unk_380;
};

extern char D_089FA46C[];
s32 func_08976100(s32, char *);
s32 func_08827A50(s32, s32);
Del_0889667C *func_08827AD4(void);
void func_08891578(s32, s32);
void func_08941FA8(void *, Ptr_0889667C *);
s32 func_08935BF8(s32, s32, K_0889667C *);
s32 func_089A67D8(s32, K_0889667C *);
void func_08896878(K_0889667C *);

void func_0889667C(K_0889667C *arg0) {
    Ptr_0889667C h;
    Ptr_0889667C h2;
    s32 heap;
    s32 p;

    arg0->v27(func_08976100(0, D_089FA46C));
    heap = arg0->unk_00;
    if ((p = func_08827A50(0x18, heap)) != 0) {
        p = func_08935BF8(p, arg0->unk_374, arg0);
    }
    h.unk_00 = heap;
    h.unk_04 = func_08827AD4();
    h.unk_08 = p;
    h.unk_0C = h.unk_04->vf_08(p, h.unk_00);
    *h.unk_0C = 1;
    func_08941FA8(arg0->unk_1B0, &h);
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
    heap = arg0->unk_00;
    p = func_08827A50(0x14, heap);
    if (p != 0) {
        p = func_089A67D8(p, arg0);
    }
    h2.unk_00 = heap;
    h2.unk_04 = func_08827AD4();
    h2.unk_08 = p;
    h2.unk_0C = h2.unk_04->vf_08(p, h2.unk_00);
    *h2.unk_0C = 1;
    func_08941FA8(arg0->unk_1B0, &h2);
    {
        s32 &q = h2.unk_08;
        if (q != 0) {
            s32 *&c = h2.unk_0C;
            *c -= 1;
            if (h2.count() == 0) {
                h2.unk_04->vf_0C(q, c, h2.unk_00);
                func_08891578(q, h2.unk_00);
            }
        }
    }
    func_08896878(arg0);
    arg0->unk_380 = 1;
}

}
