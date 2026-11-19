#include "common.h"

extern "C" {

class T {
public:
    virtual void unk_08();
    virtual s32 unk_0C();
    virtual s32 unk_10();
};

struct N {
    N *unk_00, *unk_04;
    void **unk_08;
    N *unk_0C;
};

struct L {
    N unk_00;
    u8 pad_10[0x10];
    s32 unk_20;
    u8 pad_24[4];

    s32 unk_28(N *p) {
        if (p == NULL) return 0;
        {
            if (&unk_00 != p) {
                s32 r;
                if (unk_00.unk_00 != &unk_00) {
                    p->unk_00 = unk_00.unk_00;
                    unk_00.unk_00->unk_04 = p;
                    unk_00.unk_00 = p;
                    r = 1;
                } else {
                    unk_00.unk_00 = p;
                    unk_00.unk_04 = p;
                    p->unk_00 = &unk_00;
                    r = 1;
                }
                p->unk_04 = &unk_00;
                if (r) {
                    p->unk_0C = &unk_00;
                    ++unk_20;
                }
            }
            return 1;
        }
    }
};

typedef struct {
    T unk_00;
    u8 pad_04[0xC];
    s32 unk_10, unk_14;
    u8 pad_18[0x98];
    L unk_B0;
    L unk_D8;
    u8 unk_100;
    u8 pad_101[3];
    f32 unk_104;
} S;

void func_08965590(L *);
s32 func_089655F0(char *arg0);
s32 func_089655F8(char *arg0);



void **func_089653E0(S *arg0) {
    s32 i = arg0->unk_00.unk_0C();
    if (i >= arg0->unk_00.unk_10()) {
        return NULL;
    }
    if (arg0->unk_D8.unk_00.unk_04 == &arg0->unk_D8.unk_00) {
        return NULL;
    }
    N *p;
    if (func_089655F8((char *)&arg0->unk_D8) != 0) {
        p = NULL;
    } else {
        p = (N *)func_089655F0((char *)&arg0->unk_D8);
        func_08965590(&arg0->unk_D8);
    }
    if (p == NULL) {
        return NULL;
    }
    if (!arg0->unk_B0.unk_28(p)) {
        return NULL;
    }
    arg0->unk_14 = arg0->unk_B0.unk_20;
    f32 temp = (f32)*(volatile s32 *)&arg0->unk_14 / (f32)arg0->unk_10;
    if (arg0->unk_100 != 0) {
        f32 x = arg0->unk_104;
        if (temp > x) {
            f32 y = 0.05f;
            y += x;
            arg0->unk_104 = y > 1.0f ? 1.0f : (y < 0.0f ? 0.0f : y);
            arg0->unk_100 = 1;
        }
    }
    return p->unk_08;
}

}
