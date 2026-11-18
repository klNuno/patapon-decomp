#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E1_08874768;

typedef struct {
    E1_08874768 *unk_00;
    s32 unk_04;
} V1_08874768;

typedef struct {
    u8 pad_00[0x64];
    V1_08874768 unk_64;
} I1_08874768;

class B1_08874768 {
public:
    virtual void func_08();
    virtual void func_0C();
};

typedef struct {
    void *unk_00;
    I1_08874768 unk_04;
} S1_08874768;

typedef struct {
    u8 pad_00[0x40];
} E2_08874768;

typedef struct {
    E2_08874768 *unk_00;
    s32 unk_04;
} V2_08874768;

typedef struct {
    u8 pad_00[0x804];
    V2_08874768 unk_804;
} M2_08874768;

class C_08874768 {
public:
    M2_08874768 unk_00;
    u8 pad_80C[0x4];
    u8 unk_810[0x10C];
    virtual void vfunc_08();
    virtual void vfunc_0C();
};

class S_08874768 : public C_08874768 {
public:
    u8 pad_920[0x4C];
    S1_08874768 unk_96C;
};

extern u8 D_08A450E8[];
extern u8 D_08A44C14[];
extern u8 D_08A46624[];
extern u8 D_08A4664C[];
void func_0880416C(void *);
void func_088AF070(void *, s32);

inline void dtor1_08874768(S1_08874768 *arg0) {
    E1_08874768 *p;
    V1_08874768 *v;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A450E8;
        ((B1_08874768 *)arg0)->func_0C();
        if (&arg0->unk_04 != NULL) {
            p = arg0->unk_04.unk_64.unk_00;
            v = &arg0->unk_04.unk_64;
            if ((u32)p != (u32)(p + arg0->unk_04.unk_64.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_04.unk_64.unk_04);
            }
            arg0->unk_04.unk_64.unk_04 = 0;
        }
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A44C14;
        }
    }
}

inline void mdtor_08874768(M2_08874768 *m) {
    E2_08874768 *p;
    V2_08874768 *v;

    if (m != NULL) {
        v = &m->unk_804;
        p = m->unk_804.unk_00;
        if ((u32)p != (u32)(p + m->unk_804.unk_04)) {
            do {
                p++;
            } while (p != v->unk_00 + m->unk_804.unk_04);
        }
        m->unk_804.unk_04 = 0;
    }
}

S_08874768 *func_08874768(S_08874768 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)&arg0->unk_810[0x10C] = D_08A46624;
        arg0->vfunc_0C();
        dtor1_08874768(&arg0->unk_96C);
        if (arg0 != NULL) {
            *(void **)&arg0->unk_810[0x10C] = D_08A4664C;
            arg0->vfunc_0C();
            func_088AF070(arg0->unk_810, -1);
            mdtor_08874768(&arg0->unk_00);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
