#include "common.h"

extern "C" {

class C {
public:
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

void func_088DF528(void *, s32);

class P {
public:
    s32 unk_00;
    C *unk_04;
    void *unk_08;
    s32 *unk_0C;

    void release() {
        if (unk_08 != NULL) {
            --*unk_0C;
            s32 *c = *(s32 *volatile *)&unk_0C;
            if ((c != NULL ? *c : 0) == 0) {
                unk_04->v1(unk_08, unk_0C, unk_00);
                func_088DF528(unk_08, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} A;

s32 func_08852BA8(void *);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08908108(P *, s32);
void func_0897FBBC(void *, s32, s32, s32, s32, s32, s32 *, s32 *, s32 *);

void func_089084E0(A *arg0, void *arg1) {
    P h;
    s32 *p0;
    s32 *p1;
    s32 *p2;
    s32 *p3;
    s32 *p4;
    s32 *p5;
    s32 *p6;
    s32 *p7;
    s32 a;
    s32 x;
    s32 y;
    s32 z;

    p0 = func_0885356C(arg1, 0, 1, 4);
    p1 = func_0885356C(arg1, 1, 1, 4);
    p2 = func_0885356C(arg1, 2, 0, 4);
    p3 = func_0885356C(arg1, 3, 0, 4);
    p4 = func_0885356C(arg1, 4, 1, 4);
    p5 = func_0885356C(arg1, 5, 1, 4);
    p6 = func_0885356C(arg1, 6, 1, 4);
    p7 = func_0885356C(arg1, 7, 0, 4);
    a = *p0;
    x = func_08852BA8(arg1);
    x += *p2;
    y = func_08852BA8(arg1);
    y += *p3;
    z = *p7;
    func_08908108(&h, arg0->unk_10);
    func_0897FBBC(h.unk_08, a, *p1, x, y, z, p4, p5, p6);
    h.release();
    func_08852F00(arg1, 0);
}

}
