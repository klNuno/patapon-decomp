#include "common.h"

extern "C" {

class Del_088DAB8C {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};

void func_08853A80(s32, s32);

class Ptr_088DAB8C {
public:
    s32 unk_00;
    Del_088DAB8C *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, unk_0C, unk_00);
                func_08853A80(p, unk_00);
            }
        }
    }
};

typedef struct {
    Ptr_088DAB8C *unk_00;
    s32 unk_04;
} V_088DAB8C;

typedef struct {
    u8 pad_00[0x25ECC];
    u8 unk_25ECC[0x26710 - 0x25ECC];
    u8 unk_26710[0x26824 - 0x26710];
    V_088DAB8C unk_26824;
    s32 unk_2682C;
    u8 unk_26830;
} Obj_088DAB8C;

void func_088D8CC0(s32 *, void *, s32, s32);
void func_088D8DD8(s32 *, void *);
void func_088D8DE0(s32 *, void *);
s32 func_088DAD48(Obj_088DAB8C *, u32);
void func_088DAD68(void *, s32 *);
void func_088DAD98(void *);

void func_088DAB8C(Obj_088DAB8C *arg0) {
    s32 c;
    s32 a;
    s32 b;
    s32 tmp;
    Ptr_088DAB8C *p;
    Ptr_088DAB8C **d;
    s32 *n;
    u32 i;

    func_088D8DE0(&a, arg0->unk_26710);
    func_088D8DD8(&b, arg0->unk_26710);
    func_088D8CC0(&c, arg0->unk_26710, a, b);
    func_088DAD98(arg0->unk_25ECC);
    for (i = 0; i < 0x81; i++) {
        tmp = func_088DAD48(arg0, 0x80 - i);
        func_088DAD68(arg0->unk_25ECC, &tmp);
    }
    p = arg0->unk_26824.unk_00;
    d = &arg0->unk_26824.unk_00;
    if (p != *d + arg0->unk_26824.unk_04) {
        n = &arg0->unk_26824.unk_04;
        do {
            if (p != NULL) {
                if (p != NULL) {
                    p->release();
                }
            }
            p++;
        } while (p != *d + *n);
    }
    arg0->unk_26824.unk_04 = 0;
    arg0->unk_2682C = 0;
    arg0->unk_26830 = 0;
}

}
