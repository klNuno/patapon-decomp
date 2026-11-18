#include "common.h"

extern "C" {

class T {
public:
    virtual void unk_08(f32);
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
    T unk_00;
    u8 pad_04[0x10];
    f32 unk_14, unk_18;
} S;

void func_08852F00(void *, s32);
extern s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088586E8(void);
void func_08878424(s32, s32, s32);
void func_08920CFC(T *, s32, f32, f32);
S *func_0897BE0C(void *, s32, s32, s32);
void func_0897C3F4(f32, void *, s32);
s32 func_089B53D8(s32);

typedef struct {
    u8 pad_00[0x14];
    u8 unk_14[4];
} O;

void func_08938344(void *arg0, void *arg1) {
    s32 h;
    s32 *a, *b, *c, *d, *e;
    s32 i, j;
    S *p;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    func_0885356C(arg1, 4, 1, 4);
    e = func_0885356C(arg1, 5, 1, 4);
    j = func_089B53D8(func_088586E8());
    func_08878424((s32)&h, j, *b);
    i = *a;
    func_0897C3F4(*(f32 *)e, ((O *)j)->unk_14, i);
    p = func_0897BE0C((u8 *)j + 0x14, i, h, 3);
    f32 z = p->unk_18;
    f32 w = 1.0f;
    if (z != w) {
        p->unk_18 = 1.0f;
        p->unk_00.unk_08(p->unk_14 * p->unk_18);
    }
    func_08920CFC(&p->unk_00, 0, *(f32 *)c, *(f32 *)e);
    p->unk_00.unk_3C(*d != 0);
    func_08852F00(arg1, 0);
}

}
