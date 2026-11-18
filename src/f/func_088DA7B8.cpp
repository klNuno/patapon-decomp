#include "common.h"

extern "C" {

class Del_088DA7B8 {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};

void func_08853A80(s32, s32);

class Ptr_088DA7B8 {
public:
    s32 unk_00;
    Del_088DA7B8 *unk_04;
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
    Ptr_088DA7B8 *unk_00;
    s32 unk_04;
} V_088DA7B8;

typedef struct {
    u8 pad_00[0x4CC];
    u8 unk_4CC[0x510 - 0x4CC];
    u8 unk_510[0x624 - 0x510];
    V_088DA7B8 unk_624;
    s32 unk_62C;
    u8 unk_630;
} Obj_088DA7B8;

void func_088D8CC0(s32 *, void *, s32, s32);
void func_088D8DD8(s32 *, void *);
void func_088D8DE0(s32 *, void *);
s32 func_088DA8F4(Obj_088DA7B8 *, s32);
void func_088DA90C(void *, s32 *);
void func_088DA93C(void *);

void func_088DA7B8(Obj_088DA7B8 *arg0) {
    s32 c;
    s32 a;
    s32 b;
    s32 tmp;
    Ptr_088DA7B8 *p;
    Ptr_088DA7B8 **d;
    s32 *n;

    func_088D8DE0(&a, arg0->unk_510);
    func_088D8DD8(&b, arg0->unk_510);
    func_088D8CC0(&c, arg0->unk_510, a, b);
    func_088DA93C(arg0->unk_4CC);
    tmp = func_088DA8F4(arg0, 0);
    func_088DA90C(arg0->unk_4CC, &tmp);
    p = arg0->unk_624.unk_00;
    d = &arg0->unk_624.unk_00;
    if ((u32)p != (u32)(p + arg0->unk_624.unk_04)) {
        n = &arg0->unk_624.unk_04;
        do {
            if (p != NULL) {
                if (p != NULL) {
                    p->release();
                }
            }
            p++;
        } while (p != *d + *n);
    }
    arg0->unk_624.unk_04 = 0;
    arg0->unk_62C = 0;
    arg0->unk_630 = 0;
}

}
