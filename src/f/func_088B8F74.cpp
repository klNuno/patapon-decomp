#include "common.h"

extern "C" {

struct A_088B8B30 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_088B8B30 {
    s32 *unk_00;

};

struct SP_088B8B30 {
    void *unk_00;
    C_088B8B30 unk_04;
};

typedef struct {
    s32 unk_00;
    A_088B8B30 *unk_04;
    SP_088B8B30 unk_08;
} Obj_088B8B30;

typedef struct {
    u8 pad_00[0x404];
    s32 unk_404;
    u32 unk_408;
    u8 pad_40C[4];
} V_088B8B30;

typedef struct {
    u8 pad_00[0x50];
    s32 unk_50;
    u8 pad_54[4];
    V_088B8B30 unk_58;
    s32 unk_468;
    s32 unk_46C;
    u8 unk_470;
    u8 pad_471[3];
    s32 unk_474;
} T;

void func_088B8BFC(Obj_088B8B30 *, V_088B8B30 *, s32);
void func_088B5A98(s32, char **);
s32 func_088B8758(char *);
s32 func_08822AD0(s32, s32);

void func_088B8F74(T *arg0, s32 arg1) {
    Obj_088B8B30 a, b, c, d;
    s32 x, y, i;
    SP_088B8B30 *p;
    s32 *r;

    func_088B8BFC(&a, &arg0->unk_58, *(volatile s32 *)&arg0->unk_468);
    func_088B8BFC(&b, &arg0->unk_58, arg1);
    func_088B8BFC(&c, &arg0->unk_58, arg0->unk_468);
    x = func_088B8758((char *)c.unk_08.unk_00);
    p = &c.unk_08;
    if (c.unk_08.unk_00 != NULL) {
        --**(s32 *volatile *)&c.unk_08.unk_04.unk_00;
        r = *(s32 *volatile *)&c.unk_08.unk_04.unk_00;
        if ((r != NULL ? *r : 0) == 0) {
            c.unk_04->v1(p->unk_00, c.unk_08.unk_04.unk_00, c.unk_00);
            func_088B5A98((s32)p->unk_00, *(char **volatile *)&c.unk_00);
        }
    }
    func_088B8BFC(&d, &arg0->unk_58, arg1);
    y = func_088B8758((char *)d.unk_08.unk_00);
    p = &d.unk_08;
    if (d.unk_08.unk_00 != NULL) {
        --**(s32 *volatile *)&d.unk_08.unk_04.unk_00;
        r = *(s32 *volatile *)&d.unk_08.unk_04.unk_00;
        if ((r != NULL ? *r : 0) == 0) {
            d.unk_04->v1(p->unk_00, d.unk_08.unk_04.unk_00, d.unk_00);
            func_088B5A98((s32)p->unk_00, *(char **volatile *)&d.unk_00);
        }
    }
    i = arg0->unk_50 << 5;
    if (func_08822AD0(x + i + 0x20, y + i + 0x20) == 0) {
        arg0->unk_470 = 0;
    } else {
        arg0->unk_470 = 1;
    }
    arg0->unk_474 = 0;
    arg0->unk_46C = arg1;
    p = &b.unk_08;
    if (b.unk_08.unk_00 != NULL) {
        --**(s32 *volatile *)&b.unk_08.unk_04.unk_00;
        r = *(s32 *volatile *)&b.unk_08.unk_04.unk_00;
        if ((r != NULL ? *r : 0) == 0) {
            b.unk_04->v1(p->unk_00, b.unk_08.unk_04.unk_00, b.unk_00);
            func_088B5A98((s32)p->unk_00, *(char **volatile *)&b.unk_00);
        }
    }
    p = &a.unk_08;
    if (a.unk_08.unk_00 != NULL) {
        --**(s32 *volatile *)&a.unk_08.unk_04.unk_00;
        r = *(s32 *volatile *)&a.unk_08.unk_04.unk_00;
        if ((r != NULL ? *r : 0) == 0) {
            a.unk_04->v1(p->unk_00, a.unk_08.unk_04.unk_00, a.unk_00);
            func_088B5A98((s32)p->unk_00, *(char **volatile *)&a.unk_00);
        }
    }
}

}
