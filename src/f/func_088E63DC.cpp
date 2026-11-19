#include "common.h"

extern "C" {

class Del {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};

void func_08852A08(void *);
void func_08891578(s32, s32);

struct PD {
    s32 unk_00;
    Del *unk_04;
    s32 unk_08;
    s32 *unk_0C;
};

struct Ptr {
    s32 unk_00;
    Del *unk_04;
    volatile s32 unk_08;
    s32 *volatile unk_0C;
    s32 count() { s32 *temp = unk_0C; return temp != NULL ? *temp : 0; }
    void addref() {
        if (unk_08 != 0) {
            *unk_0C += 1;
        }
    }
    void release() {
        volatile s32 &p = unk_08;
        if (p != 0) {
            s32 *volatile &c = unk_0C;
            *c -= 1;
            if (count() == 0) {
                Del *temp1 = unk_04;
                s32 *temp2 = c;
                s32 temp3 = p;
                temp1->vf_0C(temp3, temp2, unk_00);
                func_08891578(p, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x4A0];
    PD unk_4A0;
    u8 unk_4B0;
} Obj;

void func_088E61FC(Obj *, Ptr *);

void func_088E63DC(Obj *arg0) {
    func_08852A08(arg0);
    arg0->unk_4B0 = 0;
    s32 copy = arg0->unk_4A0.unk_08;
    if (copy != 0) {
        Ptr h;
        volatile u32 *dst = (volatile u32 *)&h;
        u32 *src = (u32 *)&arg0->unk_4A0;
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = copy;
        dst[3] = src[3];
        h.addref();
        func_088E61FC(arg0, &h);
        h.release();
    }
}

}
