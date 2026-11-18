#include "common.h"

extern "C" {

class C_0898E100 {
public:
    u8 pad_00[0x80];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
};

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[0x18];
} M_0898E100;

struct V_0898E100 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    V_0898E100(f32 a, f32 b, f32 c, f32 d) {
        u8 *p;
        s32 n;

        p = (u8 *)this;
        n = 0x10;
        if (p != NULL) {
            do {
                *p++ = 0;
            } while (--n);
        }
        unk_00 = a;
        unk_04 = b;
        unk_08 = c;
        unk_0C = d;
    }
};

typedef struct {
    u8 pad_00[0x60];
    u8 unk_60[0xA4 - 0x60];
    s32 unk_A4;
    u8 pad_A8[0xF0 - 0xA8];
    f32 unk_F0;
    f32 unk_F4;
    u8 pad_F8[0x100 - 0xF8];
    f32 unk_100;
} Obj_0898E100;

void func_08855354(M_0898E100 *);
s32 func_08856400(V_0898E100 *);
void func_08864E80(void *, M_0898E100 *);

void func_0898E100(Obj_0898E100 *arg0) {
    M_0898E100 m;

    func_08855354(&m);
    m.unk_30 = arg0->unk_F0;
    m.unk_34 = arg0->unk_F4;
    V_0898E100 c(1.0f, 1.0f, 1.0f, arg0->unk_100);
    arg0->unk_A4 = func_08856400(&c);
    func_08864E80(arg0->unk_60, &m);
    ((C_0898E100 *)arg0->unk_60)->v10();
}

}
