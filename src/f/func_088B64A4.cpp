#include "common.h"

extern "C" {

class O_088B64A4;

class D_088B64A4 {
public:
    virtual void unk_08();
    virtual void unk_0C(O_088B64A4 *, s32 *, s32);
};

class O_088B64A4 {
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

void func_088899D8(O_088B64A4 *, s32);
void func_088B7734(O_088B64A4 *, s32);

struct E_088B64A4 {
    s32 unk_00;
    D_088B64A4 *unk_04;
    O_088B64A4 *unk_08;
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
                func_088899D8(unk_08, unk_00);
            }
        }
    }
};

typedef struct {
    E_088B64A4 *unk_00;
    u32 unk_04;
    E_088B64A4 &at(u32 i) { return unk_00[i]; }
} V_088B64A4;

typedef struct {
    u8 pad_00[0x24];
    V_088B64A4 unk_24;
} A_088B64A4;

void func_088B64A4(A_088B64A4 *arg0, s32 arg1) {
    E_088B64A4 local;
    E_088B64A4 *lp;
    u32 i;
    u32 off;
    V_088B64A4 *v;
    u32 n = arg0->unk_24.unk_04;
    i = 0;
    if (i < n) {
        lp = &local;
        if (i < n) {
            off = 0;
            v = &arg0->unk_24;
            do {
                local = *(E_088B64A4 *)((u8 *)v->unk_00 + off);
                lp->addref();
                func_088B7734(local.unk_08, arg1);
                local.rel();
                off += 0x10;
            } while (++i < arg0->unk_24.unk_04);
        }
    }
}

}
