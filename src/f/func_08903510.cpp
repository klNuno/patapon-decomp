#include "common.h"

extern "C" {

struct A_08903510 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_08903510 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

typedef struct {
    s32 unk_00;
    A_08903510 *unk_04;
    u8 *unk_08;
    C_08903510 unk_0C;
} H_08903510;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} P_08903510;

typedef struct {
    s32 unk_00;
    u8 unk_04[0xC];
    s32 unk_10;
    s32 unk_14;
} R_08903510;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} S_08903510;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
s32 func_088C6464(u8 *);
void func_088F8B8C(H_08903510 *, s32, s32);
R_08903510 *func_08923B30(u8 *);
s32 func_088E557C(void *, s32);
void func_08931CEC(P_08903510 *, u8 *, s32, void *, s32, s32, s32);
void func_088F5328(void *, s32);

void func_08903510(S_08903510 *arg0, void *arg1) {
    H_08903510 h;
    P_08903510 p;
    s32 *a;
    s32 *b;
    s32 *c;
    R_08903510 *r;
    C_08903510 *cc;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    func_088F8B8C(&h, func_088C6464(arg0->unk_10 + 0x506F0), *a);
    r = func_08923B30(h.unk_08 + 0x34);
    r->unk_00 = func_088E557C(h.unk_08, *b);
    func_08931CEC(&p, arg0->unk_10 + 0x1040, *c, r->unk_04, 0, 0, 0);
    r->unk_10 = p.unk_00;
    r->unk_14 = p.unk_04;
    func_08852F00(arg1, 0);
    if (h.unk_08 != NULL) {
        cc = &h.unk_0C;
        if (cc->release() == 0) {
            h.unk_04->v1(h.unk_08, *(s32 **)cc, h.unk_00);
            func_088F5328(h.unk_08, h.unk_00);
        }
    }
}

}
