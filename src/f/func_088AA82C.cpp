#include "common.h"

extern "C" {

struct V_088AA82C {
    f32 unk_00;
    f32 unk_04;
    V_088AA82C(f32 a, f32 b) : unk_00(a), unk_04(b) {}
};

struct C_088AA82C {
    u8 pad_00[0xC0];
    virtual void v08();
    virtual void v0C();
    virtual void v10(f32, f32, V_088AA82C *, s32);
};

typedef struct {
    u8 pad_00[0x28];
    C_088AA82C unk_28;
} O_088AA82C;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} T_088AA82C;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
O_088AA82C *func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);

void func_088AA82C(T_088AA82C *arg0, void *arg1) {
    s32 *p0;
    f32 *p1;
    f32 *p2;
    f32 *p3;
    f32 *p4;
    s32 *p5;
    O_088AA82C *o;

    p0 = func_0885356C(arg1, 0, 1, 4);
    p1 = (f32 *)func_0885356C(arg1, 1, 1, 4);
    p2 = (f32 *)func_0885356C(arg1, 2, 1, 4);
    p3 = (f32 *)func_0885356C(arg1, 3, 1, 4);
    p4 = (f32 *)func_0885356C(arg1, 4, 1, 4);
    p5 = func_0885356C(arg1, 5, 1, 4);
    o = func_0888A5A0(func_088BCF58(arg0->unk_10), *p0);
    if (o == NULL) {
        func_08852F00(arg1, 0);
    } else {
        V_088AA82C v(*p1, *p2);
        o->unk_28.v10(*p3, *p4, &v, *p5 == 1);
        func_08852F00(arg1, 0);
    }
}

}
