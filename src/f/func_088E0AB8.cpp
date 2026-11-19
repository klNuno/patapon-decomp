#include "common.h"

extern "C" {

u32 func_08822BC4(char *);
void func_0881F120(void *, void *, s32);
extern s8 D_089FC468[];
extern s8 D_089FC504[];

struct Buf_088E0AB8 {
    u32 unk_00;
    s8 unk_04[0x44];
    s8 *c_str() { return unk_04; }
    s8 *c_str2() { return (s8 *)this + 4; }
};

struct E_088E0AB8 {
    u8 pad_00[0x2C];
    u32 unk_2C;
    s8 unk_30[0x30];

    int in(s8 *p) {
        if (p < unk_30 || (s8 *)(unk_2C + (u32)this + 0x30) <= p) return 0; return 1;
    }
    E_088E0AB8 *assign(s8 *p, u32 len) {
        switch (in(p)) {
        case 0:
        func_0881F120(unk_30, p, len);
        unk_2C = len;
        ((s8 *)(len + (u32)this))[0x30] = D_089FC468[0];
            break;
        }
        return this;
    }
    E_088E0AB8 *assign2(s8 *p) {
        return assign(p, func_08822BC4((char *)p));
    }
};

typedef struct {
    u8 pad_00[0x7FF8];
    E_088E0AB8 *unk_7FF8;
    u32 unk_7FFC;
} V_088E0AB8;

struct Ent_088E0AB8 {
    s32 unk_00;
    u32 unk_04;
    u8 pad_08[0x8];
};

struct Hdr_088E0AB8 {
    u8 pad_00[0x4];
    u32 unk_04;
    u8 pad_08[0x1C];
    s32 unk_24;
    u8 pad_28[0x8];
    Ent_088E0AB8 unk_30[1];

    u32 len(u32 i) {
        if (unk_30[i].unk_00 == 0) {
            return 0;
        }
        return (unk_30[i].unk_04 << 8) >> 8;
    }
    u8 *ptr(u32 i) {
        return unk_30[i].unk_00 == 0 ? NULL : (u8 *)this + unk_30[i].unk_00;
    }
};

typedef struct {
    V_088E0AB8 unk_00;
} I_088E0AB8;

typedef struct {
    u8 pad_00[0x4010];
    I_088E0AB8 unk_4010;
} O_088E0AB8;

class C_088E0AB8 {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v0A();
    virtual void v0B();
    virtual void v0C();
    virtual void v0D(void *, u32, s32);
};

void func_0888B0A4(Hdr_088E0AB8 **, s32, Buf_088E0AB8 *);

void func_088E0AB8(O_088E0AB8 *arg0, Hdr_088E0AB8 **arg1, s32 arg2) {
    s32 n;
    s32 i;
    Buf_088E0AB8 b;


    n = (*arg1)->unk_24;
    i = 0;
    if (i < n) {
    u32 &size = arg0->unk_4010.unk_00.unk_7FFC;
    E_088E0AB8 *&data = arg0->unk_4010.unk_00.unk_7FF8;
        do {
        if ((*arg1)->len(i) != 0) {
            ((C_088E0AB8 *)arg0)->v0D((*arg1)->ptr(i), (*arg1)->len(i), arg2);
            if ((*arg1)->unk_04 & 1) {
                b.unk_00 = 0;
                b.unk_04[b.unk_00] = D_089FC504[0];
                func_0888B0A4(arg1, i, &b);
                E_088E0AB8 *last = data + size - 1;
                last->assign2(b.c_str());
            }
        }
        i++;
        } while (i < n);
    }
}

}
