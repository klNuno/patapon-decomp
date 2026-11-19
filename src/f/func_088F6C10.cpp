#include "common.h"

extern "C" {

class A_088F6C10 {
public:
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

struct C_088F6C10 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 release() {
        --**(s32 *volatile *)&unk_00;
        return get();
    }
};

typedef struct {
    s32 unk_00;
    A_088F6C10 *unk_04;
    s32 unk_08;
    C_088F6C10 unk_0C;
} P_088F6C10;

struct V_088F6C10 {
    P_088F6C10 *unk_00;
    u32 unk_04;
    P_088F6C10 *begin() { return unk_00; }
    P_088F6C10 *end() { return unk_00 + unk_04; }
};

typedef struct {
    u8 pad_00[0x210];
    V_088F6C10 unk_210;
} M_088F6C10;

typedef struct {
    u8 pad_00[0x8];
    M_088F6C10 unk_08;
    u8 unk_220[4];
    u8 unk_224[4];
} S_088F6C10;

void func_088F73F4(S_088F6C10 *);
void func_088F6924(void *, s32);
void func_088E5C34(void *, s32);
void func_088F935C(s32, s32);
void func_0880416C(void *);

S_088F6C10 *func_088F6C10(S_088F6C10 *arg0, s16 arg1) {
    P_088F6C10 *p;

    if (arg0 != NULL) {
        func_088F73F4(arg0);
        if (arg0->unk_224 != NULL) {
            func_088F6924(arg0->unk_224, 0);
        }
        func_088E5C34(arg0->unk_220, -1);
        if (&arg0->unk_08 != NULL) {
            p = arg0->unk_08.unk_210.unk_00;
            P_088F6C10 **b = &arg0->unk_08.unk_210.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_08.unk_210.unk_04)) {
                u32 *n = &arg0->unk_08.unk_210.unk_04;
                do {
                    if (p != NULL) {
                        if (p != NULL) {
                            s32 *o = &p->unk_08;
                            if (*o != 0) {
                                if (p->unk_0C.release() == 0) {
                                    p->unk_04->v0C(*o, p->unk_0C.unk_00, p->unk_00);
                                    func_088F935C(*o, p->unk_00);
                                }
                            }
                        }
                    }
                    p++;
                } while (p != *b + *n);
            }
            arg0->unk_08.unk_210.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
