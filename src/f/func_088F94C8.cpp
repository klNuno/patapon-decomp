#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x8];
} E1_088F94C8;

typedef struct {
    E1_088F94C8 *unk_00;
    s32 unk_04;
} V1_088F94C8;

typedef struct {
    u8 pad_00[0x4];
} E2_088F94C8;

typedef struct {
    E2_088F94C8 *unk_00;
    s32 unk_04;
} V2_088F94C8;

typedef struct {
    u8 pad_00[0x84];
    V1_088F94C8 unk_84;
} M1_088F94C8;

typedef struct {
    u8 pad_00[0x44];
    V2_088F94C8 unk_44;
} M2_088F94C8;

class B_088F94C8 {
public:
    u8 pad_00[0x28];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
};

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
    u8 pad_2C[0x3C4];
    u8 unk_3F0[0x114];
    M2_088F94C8 unk_504;
    M1_088F94C8 unk_550;
} O_088F94C8;

extern u8 D_08A46744[];
void func_0880416C(void *);
void func_0890A0D8(void *, s32);
void func_088E4AD0(void *, s32);

O_088F94C8 *func_088F94C8(O_088F94C8 *arg0, s16 arg1) {
    E1_088F94C8 *p;
    V1_088F94C8 *v;
    E2_088F94C8 *q;
    V2_088F94C8 *w;

    if (arg0 != NULL) {
        arg0->unk_28 = D_08A46744;
        ((B_088F94C8 *)arg0)->v10();
        if (&arg0->unk_550 != NULL) {
            p = arg0->unk_550.unk_84.unk_00;
            v = &arg0->unk_550.unk_84;
            if ((u32)p != (u32)(p + arg0->unk_550.unk_84.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_550.unk_84.unk_04);
            }
            arg0->unk_550.unk_84.unk_04 = 0;
        }
        if (&arg0->unk_504 != NULL) {
            q = arg0->unk_504.unk_44.unk_00;
            w = &arg0->unk_504.unk_44;
            if ((u32)q != (u32)(q + arg0->unk_504.unk_44.unk_04)) {
                do {
                    q++;
                } while (q != w->unk_00 + arg0->unk_504.unk_44.unk_04);
            }
            arg0->unk_504.unk_44.unk_04 = 0;
        }
        func_0890A0D8(arg0->unk_3F0, -1);
        func_088E4AD0(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
