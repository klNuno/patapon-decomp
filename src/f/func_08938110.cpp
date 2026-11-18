#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} S;

class T {
public:
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
    virtual void unk_3C(s32);
};

typedef struct {
    u8 pad_00[0x10];
} V;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088586E8(void);
u8 *func_089B53D8(s32);
void func_088784C4(V *, void *, s32);
s32 func_08878520(void *, s32);
T *func_0897C16C(void *, s32, V *, s32, s32);
void func_0893B20C(T *, s32, f32);
void func_08956A04(void *, s32, s32, f32);
void func_08956ABC(void *);

void func_08938110(S *arg0, void *arg1) {
    V v;
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    f32 *e;
    s32 x;
    s32 y;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    e = (f32 *)func_0885356C(arg1, 4, 1, 4);
    x = *a;
    y = *b;
    if (x == 0 && y == 1 && *c != 0) {
        s32 z = *(volatile s32 *)d;
        func_08956A04(arg0->unk_10, 0, z, *e);
    } else {
        u8 *p = func_089B53D8(func_088586E8());
        func_088784C4(&v, p, x);
        T *q = func_0897C16C(p + 0x14, y, &v, func_08878520(p, x), *d);
        q->unk_3C(1);
        func_0893B20C(q, 0, *e);
        if (*c != 0) {
            func_08956ABC(arg0->unk_10);
        }
    }
    func_08852F00(arg1, 0);
}

}
