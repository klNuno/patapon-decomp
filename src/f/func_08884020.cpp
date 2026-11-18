#include "common.h"

extern "C" {

typedef struct B {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[3];
    s32 unk_0C;
    s32 unk_10;
} B;

class V {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3C(s32, u32, s32);
};

typedef struct H {
    u8 pad_00[0xE8];
    V *unk_E8;
} H;

typedef struct T2 {
    u8 pad_00[0x108];
    B unk_108;
} T2;

typedef struct T {
    s32 unk_00;
    u8 pad_04[0x100];
    s32 unk_104;
    void *unk_108;
} T;

extern s32 D_089F9BB8[];
extern u8 D_08AD22A1[];
extern char D_089DDF1C[];
H *func_0896CE18(void *, s32, s32, s32);
T2 *func_0896CFE0(H *, s32, s32);
void func_0885DE4C(B *);
s32 func_0885DD94(B *, s32, char *, s32);
void func_0881F120(s32, s32, s32);

void func_08884020(s32 arg0, s32 arg1, s32 arg2, T *arg3) {
    s32 a = arg3->unk_104;
    H *h = func_0896CE18(arg3->unk_108, D_089F9BB8[0], 0, 1);
    V *v;
    T2 *t;
    B *b;

    if (h != NULL) {
        t = func_0896CFE0(h, arg0, arg3->unk_00);
        v = h->unk_E8;
        if (v != NULL) {
            if (D_08AD22A1[0] == 0) {
                b = &t->unk_108;
                if (a != 0) {
                    b->unk_0C = a;
                }
                if (b->unk_00 == 0) {
                    func_0885DD94(b, arg2, D_089DDF1C, 0x81);
                }
                if (arg2 <= b->unk_04) {
                    func_0881F120(b->unk_00, arg1, arg2);
                }
            } else {
                b = &t->unk_108;
                func_0885DE4C(b);
                b->unk_00 = arg1;
                b->unk_04 = arg2;
                b->unk_08 = 0;
                b->unk_10 = 0;
            }
            v->v3C(t->unk_108.unk_00, t->unk_108.unk_04, 1);
        }
    }
}

}
