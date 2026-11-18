#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} N_088BC764;

struct It_088BC764 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    N_088BC764 *unk_0C;
    char *unk_10;
    int eq(const It_088BC764 &o) const {
        int r = 0;
        if (unk_04 == o.unk_04 && unk_08 == o.unk_08) r = 1;
        return r;
    }
    bool ne(const It_088BC764 &o) const { return !(bool)eq(o); }
    char *name() const {
        if (unk_10 != NULL) return unk_10 + 7;
        return NULL;
    }
};

class C_088BC764 {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3C();
    virtual void v40(void **, s32);
};

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x150 - 0xC];
    u8 unk_150[0x3990 - 0x150];
    u8 unk_3990[0x3DD0 - 0x3990];
    u8 unk_3DD0[0x4B70 - 0x3DD0];
    C_088BC764 unk_4B70;
} S_088BC764;

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[0xC];
    s32 unk_40;
    u8 pad_44[0xC];
    s32 unk_50;
    u8 pad_54[0xC];
    s32 unk_60;
} A_088BC764;

typedef struct {
    u8 pad_00[0x20];
} B_088BC764;

void func_0888B0F8(It_088BC764 *, void **);
void func_0888B104(It_088BC764 *, void **);
void func_0888B2D8(It_088BC764 *, s32);
s32 func_0888B844(It_088BC764 *);
s32 func_0888B87C(It_088BC764 *);
char *func_0893D8A8(B_088BC764 *, char *);
void func_08990F28(void *, char *, s32, s32, C_088BC764 *);
void func_08889FF8(void *, void *, void *);
void func_088D3304(void *, s32);

void func_088BC764(S_088BC764 *arg0, A_088BC764 *arg1, s32 arg2) {
    struct { A_088BC764 *unk_00; } h;
    void *c1;
    void *c2;
    It_088BC764 it;
    It_088BC764 end;
    B_088BC764 buf;
    s32 b;
    s32 a;

    h.unk_00 = arg1;
    c1 = h.unk_00->unk_60 == 0 ? NULL : (u8 *)h.unk_00 + h.unk_00->unk_60;
    arg0->unk_4B70.v40(&c1, 1);
    c2 = h.unk_00->unk_50 == 0 ? NULL : (u8 *)h.unk_00 + h.unk_00->unk_50;
    func_0888B0F8(&it, &c2);
    func_0888B104(&end, &c2);
    while (it.ne(end)) {
        a = func_0888B844(&it);
        b = func_0888B87C(&it);
        if (it.name() != NULL) {
            func_08990F28(arg0->unk_150, func_0893D8A8(&buf, it.unk_10 != NULL ? it.unk_10 + 7 : NULL), a, b, &arg0->unk_4B70);
        }
        func_0888B2D8(&it, 1);
    }
    func_08889FF8(arg0->unk_3DD0, arg0->unk_150, h.unk_00->unk_40 == 0 ? NULL : (u8 *)h.unk_00 + h.unk_00->unk_40);
    arg0->unk_08 = h.unk_00->unk_30 == 0 ? NULL : (u8 *)h.unk_00 + h.unk_00->unk_30;
    func_088D3304(arg0->unk_3990, arg2);
}

}
