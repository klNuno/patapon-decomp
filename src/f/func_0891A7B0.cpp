#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

class Del_0891A7B0 {
public:
    virtual s32 *vf_08(s32, s32);
    virtual void vf_0C(s32, s32 *, s32);
};

class Ptr_0891A7B0 {
public:
    s32 unk_00;
    Del_0891A7B0 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    Ptr_0891A7B0() {}
    Ptr_0891A7B0(const Ptr_0891A7B0 &o) : unk_00(o.unk_00), unk_04(o.unk_04), unk_08(*(volatile s32 *)&o.unk_08), unk_0C(o.unk_0C) {
        if (unk_08 != 0) {
            *unk_0C += 1;
        }
    }
    s32 count() {
        if (unk_0C != NULL) {
            return *unk_0C;
        }
        return 0;
    }
};

typedef struct {
    s32 unk_00;
    u8 pad_04[0x64C];
    Ptr_0891A7B0 *unk_650;
    s32 unk_654;
} Obj_0891A7B0;

s32 func_08827A50(s32, s32);
Del_0891A7B0 *func_08827AD4(void);
s32 func_08945438(s32, s32);
void func_0891A900(s32, s32);

s32 func_0891A7B0(Obj_0891A7B0 *arg0) {
    Ptr_0891A7B0 h;
    s32 p;

    p = func_08827A50(0x730, arg0->unk_00);
    if (p != 0) {
        p = func_08945438(p, arg0->unk_00);
    }
    h.unk_00 = arg0->unk_00;
    h.unk_04 = func_08827AD4();
    h.unk_08 = p;
    h.unk_0C = h.unk_04->vf_08(p, h.unk_00);
    *h.unk_0C = 1;
    new (arg0->unk_650 + arg0->unk_654) Ptr_0891A7B0(h);
    arg0->unk_654++;
    {
        s32 &q = h.unk_08;
        if (q != 0) {
            s32 *&c = h.unk_0C;
            *c -= 1;
            if (h.count() == 0) {
                h.unk_04->vf_0C(q, c, h.unk_00);
                func_0891A900(q, h.unk_00);
            }
        }
    }
    return p;
}

}
