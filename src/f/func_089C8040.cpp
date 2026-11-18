#include "common.h"

extern "C" {

class C089C8040 {
public:
    u8 pad_00[0x28];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14(s32);
};

typedef struct {
    u8 unk_00[0x40];
} M089C8040;

typedef struct {
    u8 pad_00[0x54];
    f32 unk_54;
    u8 pad_58[4];
    f32 unk_5C;
} F089C8040;

extern s32 D_08A097B0[];

char *func_08985828(void *, s32);
void func_08866464(M089C8040 *, char *, s32);
void func_08864E80(void *, M089C8040 *);

void func_089C8040(u8 *arg0) {
    M089C8040 m;
    F089C8040 *f;
    bool b;

    func_08866464(&m, func_08985828(arg0, 0), D_08A097B0[0]);
    func_08864E80(func_08985828(arg0, 3), &m);
    f = (F089C8040 *)func_08985828(arg0, 0);
    b = f->unk_5C <= f->unk_54;
    if (b == 1) {
        ((C089C8040 *)(func_08985828(arg0, 1) + 0x90))->v14(10000);
        ((C089C8040 *)(func_08985828(arg0, 3) + 0x90))->v14(0x66);
        ((C089C8040 *)(func_08985828(arg0, 6) + 0x90))->v14(-0x1E);
        *(s32 *)(arg0 + 0x160) = 4;
    }
}

}
