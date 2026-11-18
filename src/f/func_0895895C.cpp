#include "common.h"

extern "C" {

class Del {
public:
    virtual s32 *vf_08(void *, s32);
    virtual void vf_0C(void *, s32 *, s32);
};

void func_08958A88(void *, s32);
Del *func_08827AD4(void);

class Ptr {
public:
    s32 unk_00;
    Del *unk_04;
    void *unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        void *&p = unk_08;
        if (p != 0) {
            s32 *&c = unk_0C;
            *c -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, c, unk_00);
                func_08958A88(p, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0xA88];
    Ptr unk_A88;
    s32 unk_A98;
    u8 pad_A9C[0xC];
    s32 unk_AA8;
} S_0895895C;

void *func_08827A50(s32, s32);
s32 func_08858BC0(void);
void func_08955304(Ptr *, s32);
Ptr *func_089582D0(Ptr *, Ptr *);
void func_08958318(Ptr *, Ptr *);
void *func_08981CCC(void *, S_0895895C *, s32, s32);

void func_0895895C(S_0895895C *arg0, s32 arg1) {
    Ptr h;
    Ptr tmp;
    void *p;

    arg0->unk_A98 = arg1;
    p = func_08827A50(0x56A0, func_08858BC0());
    if (p != NULL) {
        p = func_08981CCC(p, arg0, arg0->unk_AA8, arg0->unk_A98);
    }
    h.unk_00 = func_08858BC0();
    h.unk_04 = func_08827AD4();
    h.unk_08 = p;
    h.unk_0C = h.unk_04->vf_08(p, h.unk_00);
    *h.unk_0C = 1;
    func_089582D0(&tmp, &h);
    func_08958318(&tmp, &arg0->unk_A88);
    func_08955304(&tmp, -1);
    h.release();
}

}
