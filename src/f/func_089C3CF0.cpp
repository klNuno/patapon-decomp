#include "common.h"

extern "C" {

class C089C3CF0 {
public:
    u8 pad_00[0x80];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
};

typedef struct {
    u8 unk_00[0x30];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[0x50 - 0x38];
} M089C3CF0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V089C3CF0;

void func_08855354(M089C3CF0 *);
s32 func_08856400(V089C3CF0 *);
void func_08864E80(void *, M089C3CF0 *);

void func_089C3CF0(u8 *arg0) {
    M089C3CF0 m;
    V089C3CF0 c;
    u8 *p;
    s32 n;
    f32 a;

    func_08855354(&m);
    m.unk_30 = *(f32 *)(arg0 + 0xF0);
    m.unk_34 = *(f32 *)(arg0 + 0xF4);
    a = *(f32 *)(arg0 + 0x100);
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
    c.unk_0C = a;
    *(s32 *)(arg0 + 0xA4) = func_08856400(&c);
    func_08864E80(arg0 + 0x60, &m);
    ((C089C3CF0 *)(arg0 + 0x60))->v10();
}

}
