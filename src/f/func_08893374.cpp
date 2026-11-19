#include "common.h"

extern "C" {

class V {
public:
    u8 pad_00[8];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44();
    virtual void unk_48();
    virtual void unk_4C();
    virtual void unk_50();
    virtual void unk_54();
    virtual void unk_58();
};

class W {
public:
    virtual void unk_08();
    virtual s32 unk_0C();
    virtual s32 unk_10();
    virtual s32 unk_14();
};

struct Node {
    Node *unk_00;
    Node *unk_04;
    V **volatile unk_08;

    s32 unk_0C(const Node &arg0) const {
        V **a = unk_08;
        V **b = arg0.unk_08;
        const Node *q = &arg0;
        s32 temp2 = 0;
        s32 temp = 0;
        if (a == b && unk_04 == ((const Node *&)q)->unk_04)
            temp = 1;
        if (temp != 0 && unk_00 == ((const Node *&)q)->unk_00)
            temp2 = 1;
        return temp2;
    }
};

struct L088919A4 {
    u8 pad_00[0x24];
    void *unk_24;
};

struct E088919A4 {
    u8 pad_00[0x20];
};

struct F088919A4 {
    u8 pad_00[0x188];
};

struct S_08976744 {
    u8 pad_00[0x2B0];
    void *unk_2B0;
};

struct T : W {
    u8 pad_04[0xC];
    s32 unk_10_data;
    s32 unk_14_data;
    u8 pad_18[0x208];
    u8 unk_220[0x28];
    u8 unk_248[0x28];
    u8 unk_270;
    u8 pad_271[3];
    f32 unk_274;
};

struct U {
    u8 pad_00[8];
    s32 unk_08;
};

struct R {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 unk_18[8];
    u8 unk_20[0x9240];
    Node unk_9260;
    u8 pad_926C[0x1C];
    Node unk_9288;
};

struct A {
    u8 pad_00[0x30];
    u8 unk_30[0xA4];
    u8 unk_D4;
    u8 pad_D5[0x2A3];
    u8 unk_378[9];
    u8 unk_381;
    u8 pad_382[0x1E];
    u8 unk_3A0[0x10];
    u8 unk_3B0[0x90C];
    Node unk_CBC;
    u8 pad_CC8[0x1C];
    u8 unk_CE4[0x5C];
    u8 unk_D40[0x10];
    u8 unk_D50[0x10];
    F088919A4 unk_D60[0x40];
    E088919A4 unk_6F60[0x40];
    L088919A4 unk_7760;
    L088919A4 unk_7788;
    u8 pad_77B0[0x30];
    u8 unk_77E0[0x30];
    V unk_7810;
    u8 pad_781C[0x1AC4];
    s32 unk_92E0;
    s32 unk_92E4;
    s32 unk_92E8;
    u8 unk_92EC;
    u8 unk_92ED;
    u8 unk_92EE;
    u8 unk_92EF;
    s32 unk_92F0;
    s32 unk_92F4;
    s32 unk_92F8;
    u8 pad_92FC[4];
    volatile f32 unk_9300;
    volatile f32 unk_9304;
    volatile f32 unk_9308;
    volatile f32 unk_930C;
    f32 unk_9310;
    f32 unk_9314;
    f32 unk_9318;
    f32 unk_931C;
    s32 unk_9320;
    s32 unk_9324;
    s32 unk_9328;
    s32 unk_932C;
    u8 pad_9330[0x14];
    s32 unk_9344;
    u8 pad_9348[8];
    u8 *unk_9350;
    u8 pad_9354[0x29C];
    S_08976744 unk_95F0;
    u8 pad_98A4[0xC];
    u8 *volatile unk_98B0;
    u8 unk_98B4;
};

void func_0886FDE4(void *, void *);
void func_0886FF60(Node *, Node *);
s32 func_08870308(char *);
void func_08870F9C(void *);
void func_08870FC4(void *);
void func_08870FE8(void *);
void func_0887100C(void *);
void func_08871034(void *);
void func_08871058(void *);
void func_08871080(void *);
void func_0888D554(f32, void *);
s32 func_0888D59C(char *);
u8 func_0888D5A4(void *, U *);
U *func_0888D610(void *);
s32 func_0888DA74(void *);
Node *func_0888DA9C(void *, void *);
s32 func_0888DB64(void *, void *);
void func_08891B08(L088919A4 *, E088919A4 *);
void func_08891B60(E088919A4 *, F088919A4 *);
void func_08891B68(E088919A4 *);
void func_08891EFC(L088919A4 *);
void func_0889201C(void *);
void func_0889202C(L088919A4 *);
void func_08892340(void *, void *);
void func_08892398(void *, void *);
void func_088923A0(void *);
void func_08892734(void *);
void func_08892854(void *);
void func_08892864(void *);
void func_0889C85C(void *);
s32 func_088CE494(s32, void *);
s32 func_0893D3D8(void *);
extern s32 func_08969374(s32);
void func_0897664C(s32, s32);
void func_08977074(S_08976744 *);

struct E {};

static inline s32 func_08893374_00(T *arg0, const E &arg1) {
    s32 temp = arg0->unk_0C();
    if (!(temp < arg0->unk_10())) {
        return 0;
    }
    if (func_0888DA74(arg0->unk_248) != 0) {
        return 0;
    }
    U *ptr = func_0888D610(arg0->unk_248);
    if (ptr == NULL) {
        return 0;
    }
    if ((u8)func_0888D5A4(arg0->unk_220, ptr) == 0) {
        return 0;
    }
    arg0->unk_14_data = func_0888D59C((char *)arg0->unk_220);
    f32 x = (f32)arg0->unk_14_data / (f32)arg0->unk_10_data;
    if (arg0->unk_270 != 0) {
        f32 y = arg0->unk_274;
        if (x > y) {
            func_0888D554(0.05f + y, arg0);
        }
    }
    return ptr->unk_08;
}

void func_08893374(A *arg0) {
    Node *n = arg0->unk_CBC.unk_04;
    while (1 ^ (n->unk_0C(arg0->unk_CBC) != 0)) {
        (*n->unk_08)->unk_58();
        if (n != NULL)
            n = n->unk_04;
    }
    func_08969374((s32)arg0);
    arg0->unk_D4 = 1;
    func_08892864(arg0->unk_CE4);
    func_08892864(&arg0->unk_CBC);
    func_08892854(arg0->unk_3B0);
    func_08892734(&arg0->unk_CBC);
    func_08892734(arg0->unk_CE4);
    {
        s32 i;
        u8 *t;
        u8 *p;
        u8 *q;
        p = arg0->unk_3A0;
        i = 0;
        q = p;
        do {
            t = p + 0x11C;
            func_088923A0(t);
            func_08892398(t, q + 0x1C);
            func_08892340(arg0->unk_CE4, t);
            ++i;
            p += 0x20;
            q += 4;
        } while (i < 0x40);
    }
    func_08892864(arg0->unk_CE4);
    func_0889202C(&arg0->unk_7788);
    func_0889202C(&arg0->unk_7760);
    func_0889201C(arg0->unk_D50);
    func_08891EFC(&arg0->unk_7760);
    func_08891EFC(&arg0->unk_7788);
    {
        s32 i;
        E088919A4 *t;
        u8 *p;
        u8 *q;
        p = arg0->unk_D40;
        i = 0;
        q = p;
        do {
            t = (E088919A4 *)(p + 0x6220);
            func_08891B68(t);
            func_08891B60(t, (F088919A4 *)(q + 0x20));
            func_08891B08(&arg0->unk_7788, t);
            ++i;
            p += 0x20;
            q += 0x188;
        } while (i < 0x40);
    }
    func_0889202C(&arg0->unk_7788);
    func_0889C85C(arg0->unk_77E0);
    V *v = &arg0->unk_7810;
    v->unk_58();
    arg0->unk_92E0 = 0;
    arg0->unk_92E4 = 0;
    arg0->unk_92E8 = 0;
    arg0->unk_92EC = 1;
    arg0->unk_92ED = 0;
    arg0->unk_92EE = 0;
    arg0->unk_92EF = 0;
    arg0->unk_92F0 = 0;
    arg0->unk_92F4 = 0;
    arg0->unk_92F8 = 0;
    arg0->unk_9300 = 0.0f;
    arg0->unk_9304 = 0.0f;
    arg0->unk_9308 = 0.0f;
    arg0->unk_930C = 1.0f;
    arg0->unk_9310 = arg0->unk_9300;
    arg0->unk_9314 = arg0->unk_9304;
    arg0->unk_9318 = arg0->unk_9308;
    arg0->unk_931C = arg0->unk_930C;
    arg0->unk_9320 = 0;
    arg0->unk_9324 = 0;
    arg0->unk_9328 = 0;
    arg0->unk_932C = 0;
    arg0->unk_9344 = 0;
    arg0->unk_98B4 = 1;
    u8 *p = arg0->unk_98B0;
    if (p != NULL) {
        R *r = (R *)(arg0->unk_9350 + 0x66AC0);
        func_08871080(p);
        func_08871058(p + 0x20);
        func_08871034(p + 0x40);
        func_0887100C(p + 0x80);
        func_08870FE8(p + 0xA0);
        func_08870FC4(p + 0xC0);
        func_08870F9C(p + 0xE0);
        s32 i = func_0888DB64(r, arg0->unk_98B0);
        if (i != -1) {
            Node *n = func_0888DA9C(&r->unk_9260, (u8 *)r + (i << 8) + 0x20);
            if (n != NULL) {
                func_0886FF60(&r->unk_9260, n);
                func_0886FDE4(&r->unk_9288, n);
                r->unk_14 = func_08870308((char *)&r->unk_9260);
            }
        }
        arg0->unk_98B0 = NULL;
    }
    func_08977074(&arg0->unk_95F0);
    T *t = (T *)((u8 *)arg0 + 0x1608 + 0x7FF8);
    s32 i = t->unk_10();
    if (i >= t->unk_0C()) {
        i = t->unk_10();
        if (i <= t->unk_14())
            t->unk_10_data = 2;
    }
    T *t2 = (T *)((u8 *)&arg0->unk_95F0 + 0x10);
    s32 temp;
    temp = t2->unk_0C();
    if (temp < t2->unk_10()) {
        do {
            func_0897664C(func_08893374_00(t2, E()), 0);
            temp = t2->unk_0C();
        } while (temp < t2->unk_10());
    }
    s32 result = func_0893D3D8(arg0->unk_378);
    void *q = arg0;
    if (arg0 != NULL)
        q = arg0->unk_30;
    func_088CE494(result, q);
    arg0->unk_381 = 0;
}

}
