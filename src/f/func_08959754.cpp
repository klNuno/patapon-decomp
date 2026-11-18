#include "common.h"

extern "C" {

class E_08959754 {
public:
    u8 pad_00[0x18];
    virtual void v08(s32);
};

class V_08959754 {
public:
    virtual void v08();
    virtual void v0C();
};

struct Vec_08959754 {
    E_08959754 *unk_00;
    u32 unk_04;

    void clear() {
        E_08959754 *p = unk_00;
        if ((u32)p != (u32)(p + unk_04)) {
            u32 *n = &unk_04;
            do {
                p->v08(-1);
                p++;
            } while (p != unk_00 + *n);
        }
        unk_04 = 0;
    }
};

typedef struct {
    void *unk_00;
} It_08959754;

typedef struct {
    u8 pad_00[0x90];
    s32 unk_90;
    V_08959754 unk_94;
    u8 pad_98[0x149C];
    Vec_08959754 unk_1534;
    u8 pad_153C[0x824];
    u8 unk_1D60[0x4];
} S_08959754;

void func_08959880(S_08959754 *);
void func_08866028(S_08959754 *);
void func_0895939C(It_08959754 *, void *);
void func_08959394(It_08959754 *, void *);
void func_08959440(It_08959754 *, void *, It_08959754, It_08959754);
s32 func_08858BCC(void);
void func_0886A45C(s32, s32);
void func_0885DE4C(void *);

void func_08959754(S_08959754 *arg0) {
    It_08959754 r;
    It_08959754 a;
    It_08959754 b;
    u32 i;
    s32 off;
    E_08959754 *p;
    Vec_08959754 *v;

    func_08959880(arg0);
    func_08866028(arg0);
    func_0895939C(&a, arg0->unk_1D60);
    func_08959394(&b, arg0->unk_1D60);
    func_08959440(&r, arg0->unk_1D60, a, b);
    func_0886A45C(arg0->unk_90, func_08858BCC());
    arg0->unk_90 = 0;
    arg0->unk_94.v0C();
    i = 0;
    if (arg0->unk_1534.unk_04 != 0) {
        off = 0;
        E_08959754 *&data = arg0->unk_1534.unk_00;
        do {
            func_0885DE4C((u8 *)data + off);
            i++;
            off += sizeof(E_08959754);
        } while (i < arg0->unk_1534.unk_04);
    }
    p = arg0->unk_1534.unk_00;
    v = &arg0->unk_1534;
    if ((u32)p != (u32)(p + *(u32 *)&arg0->unk_1534.unk_04)) {
        u32 *n = &arg0->unk_1534.unk_04;
        do {
            p->v08(-1);
            p++;
        } while (p != v->unk_00 + *n);
    }
    arg0->unk_1534.unk_04 = 0;
}

}
