#include "common.h"

extern "C" {

struct V0_088D24B8 {
    virtual s32 *v08(void *, s32);
    virtual void v0C(void *, s32 *, s32);
};

struct RC_088D24B8 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        } else {
            return 0;
        }
    }
};

typedef struct {
    u8 pad_00[0x78];
    s32 unk_78;
    s32 unk_7C;
} P_088D24B8;

V0_088D24B8 *func_08827AD4(void);

typedef struct H_088D24B8 {
    s32 unk_00;
    V0_088D24B8 *unk_04;
    P_088D24B8 *unk_08;
    RC_088D24B8 unk_0C;

    H_088D24B8(s32 a, P_088D24B8 *p) {
        unk_00 = a;
        unk_04 = func_08827AD4();
        unk_08 = p;
        unk_0C.unk_00 = unk_04->v08(p, *(volatile s32 *)&unk_00);
        *unk_0C.unk_00 = 1;
    }
} H_088D24B8;

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
} T_088D24B8;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x194];
    u8 unk_198[0x10];
    s32 unk_1A8;
} Obj_088D24B8;

extern const T_088D24B8 D_089E0968[];
extern s32 D_089E08A0[];

P_088D24B8 *func_08827A50(s32, s32);
P_088D24B8 *func_0887FF9C(P_088D24B8 *);
void func_088812A4(P_088D24B8 *, s32);
void func_08882530(s32, P_088D24B8 *);
void func_088D2048(s32 *, void *);
void func_088D2624(void *, s32, H_088D24B8 *);
void func_088D28F8(P_088D24B8 *, s32);

void func_088D24B8(Obj_088D24B8 *arg0) {
    u32 i;
    const T_088D24B8 *t;
    s32 a;
    P_088D24B8 *p;

    for (i = 0, t = D_089E0968; i < 10; i++, t++) {
        a = arg0->unk_00;
        p = func_08827A50(0xA0, a);
        if (p != NULL) {
            p = func_0887FF9C(p);
        }
        H_088D24B8 h(a, p);
        s32 it;
        h.unk_08->unk_78 = D_089E08A0[t->unk_00];
        h.unk_08->unk_7C = 0;
        func_088812A4(h.unk_08, 1);
        func_08882530(arg0->unk_1A8, h.unk_08);
        func_088D2048(&it, arg0->unk_198);
        func_088D2624(arg0->unk_198, it, &h);
        if (h.unk_08 != NULL) {
            *(s32 *)*(volatile s32 *)&h.unk_0C.unk_00 -= 1;
            s32 *q = h.unk_0C.unk_00;
            if ((q != NULL ? *q : 0) == 0) {
                h.unk_04->v0C(h.unk_08, h.unk_0C.unk_00, h.unk_00);
                func_088D28F8(h.unk_08, h.unk_00);
            }
        }
    }
}

}
