#include "common.h"

extern "C" {

struct A_08944270 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_08944270 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct SP_08944270 {
    void *unk_00;
    C_08944270 unk_04;
};

typedef struct {
    s32 unk_00;
    A_08944270 *unk_04;
    SP_08944270 unk_08;
} M_08944270;

struct V_08944270 {
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
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
};

typedef struct {
    u8 pad_00[0x30];
} E_08944270;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x8];
    void *unk_18;
    u8 pad_1C[0x18];
    E_08944270 *unk_34;
    s32 unk_38;
    u8 unk_3C[4];
    u8 unk_40[0x24];
    void *unk_64;
    u8 pad_68[4];
    u8 unk_6C[0x314];
    u8 unk_380[0x10];
    M_08944270 unk_390;
} Obj_08944270;

extern u8 D_08A475BC[];
extern u8 D_08A475D4[];
extern u8 D_08A4762C[];
extern u8 D_08A47648[];

void func_0880416C(void *);
void func_08853A80(void *, s32);
void func_089404D0(void *, s32);
void func_08943A18(void *, s32);
void func_0894409C(void *, s32);
void func_08944154(void *);
void func_08944434(void *, E_08944270 *, s32);
s32 func_08944448(void *);
void func_08944450(E_08944270 *, s32);
E_08944270 *func_08944534(void *);
E_08944270 *func_08944550(void *);
void func_0895EFE4(void *, s32);

Obj_08944270 *func_08944270(Obj_08944270 *arg0, s16 arg1) {
    SP_08944270 *s;
    C_08944270 *c;
    E_08944270 *p;
    E_08944270 *end;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A475BC;
        arg0->unk_18 = D_08A475D4;
        ((V_08944270 *)arg0)->v14();
        if (&arg0->unk_390 != NULL) {
            if (&arg0->unk_390 != NULL) {
                s = &arg0->unk_390.unk_08;
                if (arg0->unk_390.unk_08.unk_00 != NULL) {
                    c = &arg0->unk_390.unk_08.unk_04;
                    if (c->release() == 0) {
                        arg0->unk_390.unk_04->v1(s->unk_00, *(s32 **)c, arg0->unk_390.unk_00);
                        func_08853A80(s->unk_00, arg0->unk_390.unk_00);
                    }
                }
            }
        }
        if (arg0->unk_6C != NULL) {
            func_089404D0(arg0->unk_380, 0);
            func_08943A18(arg0->unk_6C, 0);
        }
        if (arg0->unk_40 != NULL) {
            arg0->unk_64 = D_08A4762C;
            func_08944154(arg0->unk_40);
            func_0894409C(arg0->unk_40, -1);
        }
        if (&arg0->unk_34 != NULL) {
            if (arg0->unk_38 != 0) {
                p = func_08944550(&arg0->unk_34);
                end = func_08944534(&arg0->unk_34);
                do {
                    func_08944450(p++, -1);
                } while (p != end);
                func_08944434(arg0->unk_3C, arg0->unk_34, func_08944448(&arg0->unk_34));
            }
        }
        func_0895EFE4(arg0->unk_10, 0);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A47648;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
