#include "common.h"

extern "C" {

class QB_0899D9BC {
public:
    u8 pad_00[0x80];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(s32, s32);
};

class Q_0899D9BC : public QB_0899D9BC {
public:
    u8 pad_84[0x10];
    s32 unk_94;
    u8 pad_98[0x8];
};

class R_0899D9BC {
public:
    u8 pad_00[0x10];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual s32 v16(s32);
};

typedef struct {
    Q_0899D9BC unk_00[3];
    s32 unk_1E0;
    s32 unk_1E4;
    char *unk_1E8;
    u8 unk_1EC[0x20];
    void *unk_20C;
    u8 pad_210[0x10];
} E_0899D9BC;

typedef struct {
    char unk_00[0x20];
    s32 unk_20;
    u8 pad_24[0xC];
} F_0899D9BC;

typedef struct {
    u8 pad_00[0x28];
    s32 unk_28;
    u8 pad_2C[0x48];
    F_0899D9BC unk_74[1];
} G_0899D9BC;

typedef struct {
    u8 pad_00[0x10];
    E_0899D9BC unk_10[3];
    G_0899D9BC *unk_670;
    u8 pad_674[0x4C];
    R_0899D9BC *unk_6C0;
} S_0899D9BC;

s32 func_08993F08(void *);
s32 func_08993F70(void *, s32);
s32 func_08993F18(void *, s32);
s32 func_08993F30(void *, s32);
char *func_08993F90(void *);
void func_08865FE4(void *, s32);
s32 func_0893D94C(void *, char *);
s32 func_0888AFAC(char *);
void func_08822B3C(char *, char *);

void func_0899D9BC(S_0899D9BC *arg0, s32 arg1) {
    E_0899D9BC *e;
    void *src;
    u32 i;
    Q_0899D9BC *q;
    s32 v;
    F_0899D9BC *f;
    char *s;

    e = &arg0->unk_10[arg1];
    src = e->unk_20C;
    if (src == NULL) {
        return;
    }
    if ((u8)func_08993F08(src) == 0) {
        return;
    }
    for (i = 0, q = e->unk_00; i < 3; i++, q++) {
        if ((u8)func_08993F70(src, i) != 0) {
            func_08865FE4(q, func_08993F18(src, i));
            q->v3(0, 1);
            v = func_08993F30(src, i);
            if (v != 0) {
                q->unk_94 = arg0->unk_6C0->v16(v);
            } else {
                q->unk_94 = -1;
            }
        }
    }
    e->unk_1E8 = func_08993F90(src);
    func_0893D94C(e->unk_1EC, e->unk_1E8);
    e->unk_1E0 = 1;
    e->unk_1E4 = 0;
    f = &arg0->unk_670->unk_74[arg1];
    s = e->unk_1E8;
    f->unk_20 = func_0888AFAC(s);
    func_08822B3C(f->unk_00, s);
    arg0->unk_670->unk_28 = 0;
}

}
