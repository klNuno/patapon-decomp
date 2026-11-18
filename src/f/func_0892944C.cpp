#include "common.h"

extern "C" {

class A_0892944C {
public:
    virtual s32 *v08(void *, s32);
    virtual void v0C(void *, s32 *, s32);
};

void *func_08827A50(s32, s32);
A_0892944C *func_08827AD4(void);
s32 func_0885AB7C(s32, s32, s32);
void *func_08928C9C(void *);
void func_08928E40(void *, s32, s32);
void func_08928E64(void *, void *);
void func_089290C8(s32 *, void *);
u32 func_08929444(void);
void func_0892966C(void *, s32, void *);
void *func_08929718(void *, s32);
void func_089297A8(void *, s32);

struct H_0892944C {
    s32 unk_00;
    A_0892944C *unk_04;
    void *unk_08;
    s32 *unk_0C;
    s32 cnt() { return unk_0C != NULL ? *unk_0C : 0; }
    void rel() {
        void *&p = unk_08;
        if (p != NULL) {
            s32 *&c = unk_0C;
            *c -= 1;
            if (cnt() == 0) {
                unk_04->v0C(p, c, unk_00);
                func_089297A8(p, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
    u8 pad_28[0x8];
    s32 unk_30;
} B_0892944C;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x1C];
    s32 unk_20;
    u8 pad_24[0x1814];
    u8 unk_1838[0xC];
    u32 unk_1844;
} S_0892944C;

void *func_0892944C(S_0892944C *arg0, B_0892944C *arg1) {
    s32 idx;
    void *r;

    if (arg1 == NULL) {
        return NULL;
    }
    if (arg1->unk_24 == 0) {
        return NULL;
    }
    idx = arg1->unk_30;
    if (idx < 0) {
        return NULL;
    }
    r = func_08929718(arg0, idx);
    if (r == NULL) {
        s32 temp;
        s32 a;
        void *p;
        H_0892944C h;
        s32 sp;

        temp = func_0885AB7C(arg0->unk_20, 1, 0);
        a = arg0->unk_00;
        p = func_08827A50(0x630, a);
        if (p != NULL) {
            p = func_08928C9C(p);
        }
        h.unk_00 = a;
        h.unk_04 = func_08827AD4();
        h.unk_08 = p;
        h.unk_0C = h.unk_04->v08(p, h.unk_00);
        *h.unk_0C = 1;
        r = h.unk_08;
        if (r == NULL) {
            h.rel();
            return NULL;
        }
        func_08928E40(r, idx, temp);
        if (arg0->unk_1844 < func_08929444()) {
            func_089290C8(&sp, arg0->unk_1838);
            func_0892966C(arg0->unk_1838, sp, &h);
        }
        h.rel();
    }
    func_08928E64(r, arg1);
    return r;
}

}
