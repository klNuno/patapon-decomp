#include "common.h"

extern "C" {

struct A_088F3084 {
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

struct H_088F3084 {
    s32 unk_00;
    A_088F3084 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
};

class C_088F3084 {
public:
    u8 pad_00[0x80];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14(s32, s32);
    u8 pad_84[0xC];
};

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x4];
} E_088F3084;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x28];
    C_088F3084 unk_30[2];
    E_088F3084 unk_150[2];
} S_088F3084;

extern s32 D_089E2C44[];

s32 func_088E0EF8(s32);
void func_088E21D0(H_088F3084 *, s32, s32);
void func_088E20F4(H_088F3084 *, H_088F3084 *);
void func_088F2FE4(H_088F3084 *, E_088F3084 *);
void func_0887432C(H_088F3084 *, s32);
void func_0886A45C(s32, s32);
void func_08865FE4(C_088F3084 *, s32);

void func_088F3084(S_088F3084 *arg0, s32 arg1) {
    H_088F3084 h;
    H_088F3084 t;
    u32 i;
    s32 *q;

    arg0->unk_04 = arg1;
    for (i = 0; i < 2; i++) {
        func_088E21D0(&h, func_088E0EF8(arg0->unk_04), D_089E2C44[i]);
        func_088E20F4(&t, &h);
        func_088F2FE4(&t, &arg0->unk_150[i]);
        func_0887432C(&t, -1);
        if (h.unk_08 != 0) {
            *(s32 *)*(volatile s32 *)&h.unk_0C -= 1;
            q = h.unk_0C;
            if ((q != NULL ? *q : 0) == 0) {
                h.unk_04->v0C(h.unk_08, q, h.unk_00);
                func_0886A45C(h.unk_08, h.unk_00);
            }
        }
        func_08865FE4(&arg0->unk_30[i], arg0->unk_150[i].unk_08);
        arg0->unk_30[i].v14(1, 1);
    }
}

}
