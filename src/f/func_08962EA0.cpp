#include "common.h"

extern "C" {

struct A08962EA0 {
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, s32 *, s32);
};

void func_08963010(void);
void func_08963018(s32, s32);
void func_0895EFE4(void *, s32);
void func_0880416C(void *);

extern u8 D_08A47974[];
extern u8 D_08A47B5C[];

struct H08962EA0 {
    s32 unk_00;
    A08962EA0 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
};

typedef struct V08962EA0 {
    u8 pad_00[0x404];
    H08962EA0 *unk_404;
    s32 unk_408;
} V08962EA0;

typedef struct S08962EA0 {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x34 - 0xC];
    V08962EA0 unk_34;
} S08962EA0;

S08962EA0 *func_08962EA0(S08962EA0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A47B5C;
        func_08963010();
        if (&arg0->unk_34 != NULL) {
            H08962EA0 *p = arg0->unk_34.unk_404;
            H08962EA0 **dp = &arg0->unk_34.unk_404;
            if ((u32)p != (u32)(p + arg0->unk_34.unk_408)) {
                s32 *sp = &arg0->unk_34.unk_408;
                do {
                    if (p != NULL) {
                        if (p != NULL) {
                            s32 *v = &p->unk_08;
                            if (*v != 0) {
                                s32 *c;
                                s32 n;
                                --*p->unk_0C;
                                c = p->unk_0C;
                                if (c != NULL) {
                                    n = *c;
                                } else {
                                    n = 0;
                                }
                                if (n == 0) {
                                    p->unk_04->vfunc_0C(*v, c, p->unk_00);
                                    func_08963018(*v, p->unk_00);
                                }
                            }
                        }
                    }
                    p++;
                } while (p != *dp + *sp);
            }
            arg0->unk_34.unk_408 = 0;
        }
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A47974;
            func_0895EFE4(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
