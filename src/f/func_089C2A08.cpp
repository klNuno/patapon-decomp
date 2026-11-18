#include "common.h"

extern "C" {

class C089C2A08 {
public:
    u8 pad_00[0x80];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
};

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
} L089C2A08;

typedef struct {
    u8 unk_00[0x48];
} M089C2A08;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V089C2A08;

extern s32 D_08A09178[];

void func_08864A30(L089C2A08 *);
void func_08864A68(L089C2A08 *, s32);
void func_08814BB4(s32);
void func_08815D9C(s32, s32, s32, s32, s32);
char *func_08985828(void *, s32);
void func_08866464(M089C2A08 *, char *, s32);
s32 func_08856400(V089C2A08 *);
void func_08864E80(void *, M089C2A08 *);

void func_089C2A08(u8 *arg0) {
    L089C2A08 l;
    M089C2A08 m;
    V089C2A08 c;
    u8 *p;
    s32 n;

    func_08864A30(&l);
    func_08814BB4(4);
    func_08815D9C(0, 2, 10, 0, -1);
    func_08866464(&m, func_08985828(arg0, 1), D_08A09178[0]);
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
    c.unk_0C = 1.0f;
    *(s32 *)(arg0 + 0x364) = func_08856400(&c);
    func_08864E80(arg0 + 0x320, &m);
    ((C089C2A08 *)(arg0 + 0x320))->v10();
    func_08815D9C(0, 2, 3, 0, 0);
    func_08864A68(&l, -1);
}

}
