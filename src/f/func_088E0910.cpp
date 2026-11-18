#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} N_088E0910;

struct It_088E0910 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    N_088E0910 *unk_0C;
    char *unk_10;
    int eq(const It_088E0910 &o) const {
        int r = 0;
        if (unk_04 == o.unk_04 && unk_08 == o.unk_08) r = 1;
        return r;
    }
    bool ne(const It_088E0910 &o) const { return !(bool)eq(o); }
    char *name() const {
        if (unk_10 != NULL) return unk_10 + 7;
        return NULL;
    }
};

class C_088E0910 {
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
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} F_088E0910;

typedef struct {
    void *unk_00;
    void *unk_04;
    void *unk_08;
    s32 unk_0C;
} G_088E0910;

typedef struct {
    u8 pad_00[0x406C];
    C_088E0910 unk_406C;
} S_088E0910;

void func_0888B0F8(It_088E0910 *, void **);
void func_0888B104(It_088E0910 *, void **);
void func_0888B2D8(It_088E0910 *, s32);
s32 func_0888B844(It_088E0910 *);
s32 func_0888B87C(It_088E0910 *);
struct P_088E0910 {
    G_088E0910 *unk_00;
    P_088E0910(G_088E0910 *p) : unk_00(p) {}
};
void func_0888ACC8(s32 *, P_088E0910, s32, s32, s32);

typedef struct {
    f32 unk_00;
    F_088E0910 unk_04;
    F_088E0910 unk_14;
} H_088E0910;

extern F_088E0910 D_089FC4C8[];
extern H_088E0910 D_089FC4E0[];

void func_088E0910(S_088E0910 *arg0, void *arg1, void *arg2) {
    void *k2;
    void *k1;
    It_088E0910 it;
    It_088E0910 end;
    s32 a;
    G_088E0910 f1;
    G_088E0910 f2[2];

    k2 = arg2;
    k1 = arg1;
    arg0->unk_406C.v40(&k2, 0);
    func_0888B0F8(&it, &k1);
    func_0888B104(&end, &k1);
    while (it.ne(end)) {
        s32 r = func_0888B844(&it);
        func_0888B87C(&it);
        if (it.name() != NULL) {
            *(F_088E0910 *)&f1 = D_089FC4C8[0];
            f1.unk_08 = &arg0->unk_406C;
            func_0888ACC8((a = r, &a), P_088E0910(&f1), 1, 0, 0);
            *(F_088E0910 *)&f2[0] = D_089FC4E0[0].unk_04;
            *(F_088E0910 *)&f2[1] = D_089FC4E0[0].unk_14;
            f2[0].unk_08 = arg0;
            f2[1].unk_08 = arg0;
            func_0888ACC8(&a, P_088E0910(f2), 2, 0, 0);
        }
        func_0888B2D8(&it, 1);
    }
}

}
