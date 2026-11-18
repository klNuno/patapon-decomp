#include "common.h"

extern "C" {

class Del_089159E8 {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};

void func_08916DE8(s32, s32);

class Ptr_089159E8 {
public:
    s32 unk_00;
    Del_089159E8 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() {
        if (unk_0C != NULL) {
            return *unk_0C;
        }
        return 0;
    }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, unk_0C, unk_00);
                func_08916DE8(p, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x60];
} E_089159E8;

typedef struct {
    E_089159E8 *unk_00;
    s32 unk_04;
} V_089159E8;

typedef struct {
    u8 pad_00[0x64];
    V_089159E8 unk_64;
} I_089159E8;

class B_089159E8 {
public:
    virtual void func_08();
    virtual void func_0C();
};

typedef struct {
    void *unk_00;
    I_089159E8 unk_04;
} S_089159E8;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    void *unk_18;
} K_089159E8;

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
} M_089159E8;

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0xC];
    M_089159E8 unk_60;
    u8 pad_AC[4];
    u8 unk_B0[0x1510 - 0xB0];
    Ptr_089159E8 unk_1510;
    u8 pad_1520[8];
    u8 unk_1528[0x2438 - 0x1528];
    S_089159E8 unk_2438;
    K_089159E8 unk_24A8;
    u8 pad_24C4[0x24E0 - 0x24C4];
    u8 unk_24E0[0x90];
    u8 unk_2570[0x90];
} T_089159E8;

extern u8 D_08A46A6C[];
extern u8 D_08A44AD8[];
extern u8 D_08A44C14[];
extern u8 D_08A44F44[];
extern u8 D_08A450E8[];
extern T_089159E8 *D_08AD8844[];
void func_0886F32C(void);
void func_089169B8(T_089159E8 *);
void func_08865F78(void *, s32);
void func_0885DE4C(void *);
void func_0897A728(void *, s32);
void func_0885C534(void *, s32);
void func_0886F084(T_089159E8 *, s32);
void func_0880416C(void *);

inline void dtor1_089159E8(S_089159E8 *arg0) {
    E_089159E8 *p;
    V_089159E8 *v;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A450E8;
        ((B_089159E8 *)arg0)->func_0C();
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

inline void pdtor_089159E8(Ptr_089159E8 *p) {
    if (p != NULL) {
        if (p != NULL) {
            s32 &q = p->unk_08;
            if (q != 0) {
                s32 *&c = p->unk_0C;
                *p->unk_0C -= 1;
                if (p->count() == 0) {
                    p->unk_04->vf_0C(q, c, p->unk_00);
                    func_08916DE8(q, p->unk_00);
                }
            }
        }
    }
}

T_089159E8 *func_089159E8(T_089159E8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_50 = D_08A46A6C;
        D_08AD8844[0] = NULL;
        func_0886F32C();
        func_089169B8(arg0);
        func_08865F78(arg0->unk_2570, -1);
        func_08865F78(arg0->unk_24E0, -1);
        if (&arg0->unk_24A8 != NULL) {
            arg0->unk_24A8.unk_18 = D_08A44AD8;
            func_0885DE4C(&arg0->unk_24A8);
            arg0->unk_24A8.unk_0C = 0;
            arg0->unk_24A8.unk_14 = 0;
        }
        dtor1_089159E8(&arg0->unk_2438);
        func_0897A728(arg0->unk_1528, -1);
        pdtor_089159E8(&arg0->unk_1510);
        if (arg0 != NULL) {
            arg0->unk_50 = D_08A44F44;
            func_0885C534(arg0->unk_B0, -1);
            if (&arg0->unk_60 != NULL) {
                arg0->unk_60.unk_48 = 0;
            }
            func_0886F084(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
