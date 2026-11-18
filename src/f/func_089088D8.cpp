#include "common.h"

extern "C" {

class A_089088D8 {
public:
    virtual s32 *v08(void *, s32);
    virtual void v0C(void *, s32 *, s32);
};

void func_088DF528(void *, s32);

struct H_089088D8 {
    s32 unk_00;
    A_089088D8 *unk_04;
    void *unk_08;
    s32 *unk_0C;
    s32 cnt() { return unk_0C != NULL ? *unk_0C : 0; }
    void rel() {
        void *&p = unk_08;
        if (p != NULL) {
            s32 *&c = unk_0C;
            *c -= 1;
            if (cnt() == 0) {
                unk_04->v0C(p, c, unk_00);
                func_088DF528(p, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} S_089088D8;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
u8 *func_08852BA8(void *);
void func_08908108(H_089088D8 *, void *);
void func_0897FE64(void *, s32, s32, u8 *, u8 *, s32, s32 *, s32 *, s32 *, s32 *, s32 *);

void func_089088D8(S_089088D8 *arg0, void *arg1) {
    s32 *p0;
    s32 *p1;
    s32 *p2;
    s32 *p3;
    s32 *p4;
    s32 *p5;
    s32 *p6;
    s32 *p7;
    s32 *p8;
    s32 *p9;
    s32 a;
    u8 *b;
    u8 *c;
    s32 d;
    H_089088D8 h;

    p0 = func_0885356C(arg1, 0, 1, 4);
    p1 = func_0885356C(arg1, 1, 1, 4);
    p2 = func_0885356C(arg1, 2, 0, 4);
    p3 = func_0885356C(arg1, 3, 0, 4);
    p4 = func_0885356C(arg1, 4, 1, 4);
    p5 = func_0885356C(arg1, 5, 1, 4);
    p6 = func_0885356C(arg1, 6, 1, 4);
    p7 = func_0885356C(arg1, 7, 1, 4);
    p8 = func_0885356C(arg1, 8, 1, 4);
    p9 = func_0885356C(arg1, 9, 0, 4);
    a = *p0;
    b = func_08852BA8(arg1) + *p2;
    c = func_08852BA8(arg1) + *p3;
    d = *p9;
    func_08908108(&h, arg0->unk_10);
    func_0897FE64(h.unk_08, a, *p1, b, c, d, p4, p5, p6, p7, p8);
    h.rel();
    func_08852F00(arg1, 0);
}

}
