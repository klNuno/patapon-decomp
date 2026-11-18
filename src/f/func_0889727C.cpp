#include "common.h"

extern "C" {

struct L_0889727C;

struct N_0889727C {
    N_0889727C *unk_00;
    N_0889727C *unk_04;
    s32 unk_08;
    L_0889727C *unk_0C;
};

struct L_0889727C {
    N_0889727C *unk_00;
    N_0889727C *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;

    void push(N_0889727C *n) {
        s32 r;
        if ((N_0889727C *)this != n) {
            if (unk_00 != (N_0889727C *)this) {
                n->unk_00 = unk_00;
                unk_00->unk_04 = n;
                r = 1;
                unk_00 = n;
            } else {
                unk_00 = n;
                unk_04 = n;
                n->unk_00 = (N_0889727C *)this;
                r = 1;
            }
            n->unk_04 = (N_0889727C *)this;
            if (r) {
                n->unk_0C = this;
                unk_20++;
            }
        }
    }
};

struct O_0889727C {
    u8 pad_00[0x8];
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
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39(void *, s32);
};

struct P_0889727C : O_0889727C {
    u8 pad_0C[0x1A4];
    N_0889727C unk_1B0;
};

struct F_0889727C {
    u8 pad_00[0x8];
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual P_0889727C *v07(s32);
};

typedef struct {
    u8 pad_00[0x34];
    F_0889727C *unk_34;
} G_0889727C;

typedef struct {
    u8 pad_00[0x10];
    G_0889727C *unk_10;
} H_0889727C;

typedef struct {
    u8 pad_00[0x108];
    s32 unk_108;
} R_0889727C;

typedef struct {
    u8 pad_00[0x378];
    u8 unk_378[0x2A8];
    L_0889727C unk_620;
    u8 pad_644[0x3D0];
    s32 unk_A14;
} S_0889727C;

extern char D_089FA490[];
s32 func_08976100(s32);
H_0889727C *func_0893D430(void *);
R_0889727C *func_0896CE18(s32, char *, s32, s32);
void func_089D3EA4(P_0889727C *, s32);
void func_08977120(s32, s32);

void func_0889727C(S_0889727C *arg0) {
    s32 h;
    P_0889727C *p;
    s32 r;

    h = func_08976100(0x1B);
    if (h != 0) {
        p = func_0893D430(arg0->unk_378)->unk_10->unk_34->v07(0x1E);
        if (p != NULL) {
            arg0->unk_620.push(&p->unk_1B0);
            p->v39(arg0, h);
            r = func_0896CE18(h, D_089FA490, 0, 1)->unk_108;
            func_089D3EA4(p, r);
            func_08977120(arg0->unk_A14, r + 0x60);
        }
    }
}

}
