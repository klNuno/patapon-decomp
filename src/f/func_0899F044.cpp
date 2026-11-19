#include "common.h"

extern "C" {

class Alloc_0899F044 {
public:
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, s32);
};

struct RC_0899F044 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        } else {
            return 0;
        }
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

extern u8 D_08A44A3C[];

typedef struct {
    s32 unk_00;
    Alloc_0899F044 *unk_04;
    s32 unk_08;
    RC_0899F044 unk_0C;
} M_0899F044;

struct S_0899F044 {
    u8 unk_00;
    u8 pad_01[0x3];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 unk_10;
    u8 pad_11[0x3];
    void *unk_14;
    s32 unk_18;
    M_0899F044 unk_1C;
    void init() {
        unk_14 = D_08A44A3C;
        unk_10 = 1;
        unk_04 = 0;
        unk_0C = 0;
        unk_08 = 0;
        unk_18 = 0;
        M_0899F044 *m = &unk_1C;
        m->unk_00 = 0;
        m->unk_04 = 0;
        m->unk_08 = 0;
        m->unk_0C.unk_00 = 0;
        unk_00 = 0;
    }
};

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C[1];
} A_0899F044;

struct B_0899F044 {
    s32 unk_00;
};

struct D_0899F044 : B_0899F044 {
};

extern void *D_08A8812C[];

void func_08860490(B_0899F044 *, void *, s32, s32, s32, S_0899F044 *, s32, s32, s32);
void func_0885F7EC(s32, s32);

void func_0899F044(void *arg0, A_0899F044 *arg1, s32 arg2) {
    S_0899F044 s;
    B_0899F044 *p;

    if (arg1->unk_08 == 1) {
        return;
    }
    arg1->unk_08 = 1;
    arg1->unk_04 = 0;
    p = D_08A8812C[0] != NULL ? (B_0899F044 *)(D_0899F044 *)D_08A8812C[0] : NULL;
    s.init();
    func_08860490(p, arg1->unk_0C, arg2, 0, 0, &s, 0, 0, 0);
    if (s.unk_1C.unk_08 != 0) {
        RC_0899F044 *rc = &s.unk_1C.unk_0C;
        if (s.unk_1C.unk_0C.release() == 0) {
            s.unk_1C.unk_04->unk_0C(s.unk_1C.unk_08, rc->unk_00, s.unk_1C.unk_00);
            func_0885F7EC(s.unk_1C.unk_08, s.unk_1C.unk_00);
        }
    }
    s.unk_14 = D_08A44A3C;
}

}
