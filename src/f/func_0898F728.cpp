#include "common.h"

extern "C" {

class E_0898F728 {
public:
    u8 pad_00[0xE4];
    virtual void v08(s32);
    u8 pad_E8[8];
};

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} V_0898F728;

typedef struct {
    u8 pad_00[0x110];
    V_0898F728 unk_110;
    void *unk_118;
} M_0898F728;

typedef struct {
    u8 pad_00[0x3C10];
    E_0898F728 *unk_3C10;
    s32 unk_3C14;
    M_0898F728 unk_3C18;
} C_0898F728;

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
    u8 pad_2C[4];
    s32 unk_30;
    u8 unk_34[0x314];
    u8 unk_348[0x18];
    C_0898F728 unk_360;
} Obj_0898F728;

extern u8 D_08A484D0[];
extern u8 D_08A484E8[];

void func_0880416C(void *);
s32 func_088CE494(s32, void *);
void func_088CE530(void *, s32);
void func_0898EF1C(void *, s32);
void func_0898F0A8(void *, s32);

Obj_0898F728 *func_0898F728(Obj_0898F728 *arg0, s16 arg1) {
    s32 *p;
    V_0898F728 *v;
    E_0898F728 *e;
    E_0898F728 **d;
    s32 *n;

    if (arg0 != NULL) {
        arg0->unk_28 = D_08A484D0;
        func_088CE494(arg0->unk_30, arg0);
        if (&arg0->unk_360 != NULL) {
            arg0->unk_360.unk_3C18.unk_118 = D_08A484E8;
            if (&arg0->unk_360.unk_3C18 != NULL) {
                p = arg0->unk_360.unk_3C18.unk_110.unk_00;
                v = &arg0->unk_360.unk_3C18.unk_110;
                if ((u32)p != (u32)(p + arg0->unk_360.unk_3C18.unk_110.unk_04)) {
                    do {
                        p++;
                    } while (p != v->unk_00 + arg0->unk_360.unk_3C18.unk_110.unk_04);
                }
                arg0->unk_360.unk_3C18.unk_110.unk_04 = 0;
            }
            if (&arg0->unk_360 != NULL) {
                e = arg0->unk_360.unk_3C10;
                d = &arg0->unk_360.unk_3C10;
                if ((u32)e != (u32)(e + arg0->unk_360.unk_3C14)) {
                    n = &arg0->unk_360.unk_3C14;
                    do {
                        e->v08(-1);
                        e++;
                    } while (e != *d + *n);
                }
                arg0->unk_360.unk_3C14 = 0;
            }
        }
        if (arg0->unk_34 != NULL) {
            func_0898EF1C(arg0->unk_348, 0);
            func_0898F0A8(arg0->unk_34, 0);
        }
        func_088CE530(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
