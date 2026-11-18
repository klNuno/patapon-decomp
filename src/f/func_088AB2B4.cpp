#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0xC];
    s32 unk_20;
} S;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} R;

class T {
public:
    u8 pad_00[0x24];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual s32 unk_18();
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
    virtual void unk_5C();
    virtual void unk_60();
    virtual void unk_64();
    virtual void unk_68();
    virtual void unk_6C();
    virtual void unk_70();
    virtual void unk_74();
    virtual R *unk_78();
};

class U : public T {
public:
    u8 pad_28[0x5F8];
    u8 unk_620[1];
};

extern s16 D_089FB34C[];
extern s16 D_089FB34E[];
extern s16 D_089FB350[];
void func_08826830(u16 *, u16 *);
void func_0882687C(u16 *, void *);
u8 *func_08852BA8(void *);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
u8 *func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);
void func_0893C398(void *, s32, s32);
void func_0893C410(void *, void *, f32 *, f32);
void *func_089A8D10(s32, s32);

void func_088AB2B4(S *arg0, void *arg1) {
    u16 a[0x400];
    u16 b[3];
    union { f32 unk_00[2]; f64 unk_00_f64; } c;
    s32 *d;
    f32 *e;
    f32 *f;
    f32 *g;
    s32 i;
    void *p;
    U *q;

    d = func_0885356C(arg1, 0, 1, 4);
    e = (f32 *)func_0885356C(arg1, 1, 1, 4);
    f = (f32 *)func_0885356C(arg1, 2, 1, 4);
    g = (f32 *)func_0885356C(arg1, 3, 1, 4);
    i = *func_0885356C(arg1, 4, 0, 4);
    p = func_089A8D10(arg0->unk_20, *(s32 *)(func_08852BA8(arg1) + i));
    func_08852F00(arg1, 0);
    q = (U *)func_0888A5A0(func_088BCF58(arg0->unk_10), *d);
    if (q->unk_78()->unk_20 == 0x37) {
        b[0] = D_089FB34C[0];
        b[1] = D_089FB34E[0];
        b[2] = D_089FB350[0];
        func_0882687C(a, p);
        func_08826830(a, b);
        p = a;
    }
    if (q == NULL) {
        func_08852F00(arg1, 0);
        return;
    }
    f32 y = *f;
    f32 x = *e;
    c.unk_00[0] = x;
    c.unk_00[1] = y;
    func_0893C410(q->unk_620, p, c.unk_00, *g);
    func_0893C398(q->unk_620, 0, q->unk_18());
    func_08852F00(arg1, 0);
}

}
