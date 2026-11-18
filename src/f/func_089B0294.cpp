#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) {
    return p;
}

class B_089B0294 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2(void *);
};

class C_089B0294 {
public:
    virtual void v0();
    virtual void v1(void *, s32 *, B_089B0294 *);
};

void func_088FCE34(void *);
void func_089B0B00(void *, B_089B0294 *);

class E_089B0294 {
public:
    B_089B0294 *unk_00;
    C_089B0294 *unk_04;
    void *unk_08;
    s32 *unk_0C;

    E_089B0294(const E_089B0294 &o) {
        unk_00 = o.unk_00;
        unk_04 = o.unk_04;
        unk_08 = o.unk_08;
        unk_0C = o.unk_0C;
        if (unk_08 != 0) {
            ++*unk_0C;
        }
    }

    void destroy() {
        void **temp;
        s32 temp3;

        if (this != NULL && (temp = &unk_08, *temp != NULL)) {
            --*unk_0C;
            if (unk_0C != NULL) {
                temp3 = *unk_0C;
            } else {
                temp3 = 0;
            }
            if (temp3 == 0) {
                unk_04->v1(*temp, unk_0C, unk_00);
                func_089B0B00(*temp, unk_00);
            }
        }
    }
};

struct V_089B0294 {
    E_089B0294 *unk_00;
    u32 unk_04;

    E_089B0294 &back() { return unk_00[unk_04 - 1]; }
    void push_back(const E_089B0294 &x) {
        new (unk_00 + unk_04) E_089B0294(x);
        unk_04++;
    }
};

typedef struct {
    u8 pad_00[0xE8];
    V_089B0294 unk_E8;
    u8 pad_F0[0x174 - 0xF0];
    V_089B0294 unk_174;
} S_089B0294;

void func_089B0294(S_089B0294 *arg0) {
    u32 i;
    u32 n;
    E_089B0294 *p;

    n = arg0->unk_174.unk_04;
    i = 0;
    if (i < n) do {
        u32 &s = arg0->unk_174.unk_04;
        E_089B0294 *&d = arg0->unk_174.unk_00;
        func_088FCE34((d + s - 1)->unk_08);
        arg0->unk_E8.push_back(*(d + s - 1));
        arg0->unk_174.unk_04--;
        p = arg0->unk_174.unk_00 + arg0->unk_174.unk_04;
        if (p != NULL) {
            p->destroy();
        }
    } while (++i < n);
}

}
