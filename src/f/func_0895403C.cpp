#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

typedef struct {
    s32 unk_00;
} H_0895403C;

typedef struct {
    H_0895403C unk_00[8];
} A_0895403C;

struct E_0895403C {
    s32 unk_00;
    s32 unk_04;
    A_0895403C unk_08;
    s32 unk_28;
    E_0895403C() {
        u32 k = 0;
        do {
            unk_08.unk_00[k].unk_00 = -1;
        } while (++k < 8);
    }
    E_0895403C(const E_0895403C &o) : unk_00(0), unk_04(o.unk_04), unk_08(o.unk_08), unk_28(0) {}
};

struct V_0895403C {
    E_0895403C *data;
    s32 size;
    void clear() {
        E_0895403C *p = data;
        E_0895403C **d = &data;
        if ((u32)p != (u32)(p + size)) {
            do {
                p++;
            } while (p != *d + size);
        }
        size = 0;
    }
    void push(const E_0895403C &e) {
        new (data + size) E_0895403C(e);
        size++;
    }
};

typedef struct {
    u8 pad_00[0x740];
    s32 unk_740;
    s32 unk_744;
    s32 unk_748;
    u8 pad_74C[0x8DC - 0x74C];
    V_0895403C unk_8DC;
    u8 unk_8E4;
    u8 unk_8E5;
    u8 unk_8E6;
    u8 unk_8E7;
    s32 unk_8E8;
    s32 unk_8EC;
    u8 pad_8F0[4];
    s32 unk_8F4;
} S_0895403C;

extern void *D_08AD1E28[];
extern char D_08A04A80[];
extern char D_08A04A94[];

s32 func_08954034(void);
s32 func_08868D9C(void *, s32, char *, s32);
s32 *func_08868E8C(void *, s32, char *);
void func_08954200(S_0895403C *);

void func_0895403C(S_0895403C *arg0, s32 arg1, s32 arg2) {
    void *g;
    u32 i;

    arg0->unk_8DC.clear();
    for (i = 0; i < func_08954034(); i++) {
        E_0895403C e;
        arg0->unk_8DC.push(e);
    }
    g = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    arg0->unk_744 = func_08868D9C(g, 2, D_08A04A80, 1);
    arg0->unk_740 = arg2;
    arg0->unk_8E8 = 1;
    arg0->unk_8EC = 1;
    arg0->unk_8E4 = 1;
    arg0->unk_8E5 = 1;
    arg0->unk_8E6 = 1;
    arg0->unk_8E7 = 0;
    arg0->unk_748 = arg1;
    arg0->unk_8F4 = *func_08868E8C(g, 2, D_08A04A94);
    func_08954200(arg0);
}

}
