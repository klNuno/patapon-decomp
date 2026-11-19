#include "common.h"

extern "C" {

class O_088BBC18;

class D_088BBC18 {
public:
    virtual void unk_08();
    virtual void unk_0C(O_088BBC18 *, s32 *, s32);
};

class O_088BBC18 {
public:
    u8 pad_00[0x30];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C(s32);
};

void func_088BBDF0(O_088BBC18 *, s32);

struct E_088BBC18 {
    s32 unk_00;
    D_088BBC18 *unk_04;
    O_088BBC18 *unk_08;
    s32 *unk_0C;

    void addref() {
        s32 *&c = unk_0C;
        if (unk_08 != NULL) {
            ++*c;
        }
    }
    void rel() {
        if (unk_08 != NULL) {
            --**(s32 * volatile *)&unk_0C;
            if ((unk_0C != NULL ? *unk_0C : 0) == 0) {
                unk_04->unk_0C(unk_08, unk_0C, unk_00);
                func_088BBDF0(unk_08, unk_00);
            }
        }
    }
};

typedef struct {
    E_088BBC18 *unk_00;
    u32 unk_04;
    E_088BBC18 &at(u32 i) { return unk_00[i]; }
} V_088BBC18;

typedef struct {
    u8 pad_00[0x108];
    V_088BBC18 unk_108;
    s32 unk_110;
    s32 unk_114;
    u8 pad_118[0x18];
    u8 unk_130;
} A_088BBC18;

void func_088BBC18(A_088BBC18 *arg0) {
    E_088BBC18 local;
    E_088BBC18 *lp;
    u32 i;
    u32 off;
    V_088BBC18 *v;

    arg0->unk_130 = 0;
    arg0->unk_110 = arg0->unk_114;
    u32 n = arg0->unk_108.unk_04;
    i = 0;
    if (i < n) {
        lp = &local;
        if (i < n) {
            off = 0;
            v = &arg0->unk_108;
            do {
                    local = *(E_088BBC18 *)((u8 *)v->unk_00 + off);
                    lp->addref();
                    local.unk_08->unk_2C(arg0->unk_110);
                    local.rel();
                    off += sizeof(E_088BBC18);
                } while (++i < arg0->unk_108.unk_04);
        }
    }
}

}
