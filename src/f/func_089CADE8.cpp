#include "common.h"

extern "C" {

class C_089CADE8 {
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
} M_089CADE8;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V_089CADE8;

typedef struct {
    u8 pad_00[0x60];
    C_089CADE8 unk_60;
    u8 pad_E4[0xC];
    f32 unk_F0;
    f32 unk_F4;
    u8 pad_F8[0x8];
    f32 unk_100;
} S_089CADE8;

void func_08855354(M_089CADE8 *);
s32 func_08856400(V_089CADE8 *);
void func_08864E80(void *, M_089CADE8 *);

void func_089CADE8(S_089CADE8 *arg0) {
    M_089CADE8 m;
    V_089CADE8 c;
    u8 *p;
    s32 n;
    f32 w;

    func_08855354(&m);
    m.unk_30 = arg0->unk_F0;
    m.unk_34 = arg0->unk_F4;
    w = arg0->unk_100;
    p = (u8 *)&c;
    n = 0x10;
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n);
    }
    c.unk_00 = 1.0f;
    c.unk_04 = 1.0f;
    c.unk_08 = 1.0f;
    c.unk_0C = w;
    *(s32 *)((u8 *)arg0 + 0xA4) = func_08856400(&c);
    func_08864E80(&arg0->unk_60, &m);
    arg0->unk_60.v10();
}

}
