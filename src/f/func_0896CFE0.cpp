#include "common.h"

extern "C" {

typedef struct {
    char unk_00[0x80];
    s32 unk_80;
} S0896C904;

typedef struct S_0896CAB8 {
    u8 pad_00[0x24];
    u8 unk_24[0xE0];
    s32 unk_104;
} S_0896CAB8;

typedef struct {
    u8 pad_00[0x50];
    S0896C904 unk_50;
} R;

typedef struct {
    u8 pad_00[8];
    R *unk_08;
} P;

class T {
public:
    virtual void unk_08();
    virtual s32 unk_0C();
    virtual s32 unk_10();
};

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10, unk_14;
    u8 pad_18[0xA8008];
    u8 unk_A8020[0x28];
    u8 unk_A8048[0x28];
    u8 unk_A8070;
    u8 pad_A8071[3];
    f32 unk_A8074;
} U;

typedef struct {
    u8 pad_00[0x42830];
    T unk_42830;
} G;

extern void *D_08AD1E28[];
extern char D_089DD078[];
void func_08822B3C(char *, char *);
u32 func_08822BC4(char *);
void func_08822D5C(char *, char *, s32);
void func_08867AA0(R *, S_0896CAB8 *);
void func_08867AB8(S_0896CAB8 *);
s32 func_08867B14(R *);
void func_08867B1C(U *, f32);
s32 func_08867B74(void *, P *);
P *func_08867BE0(void *);
s32 func_08867C3C(void *);
void func_08867C5C(void *, void *);
s32 func_0886800C(char *);
s32 func_0888AFAC(S0896C904 *);
void func_0893D718(S0896C904 *, S0896C904 *);

static inline R *unk_00(U *&u, P *&p) {
    void *g = D_08AD1E28[0];
    T *t = &((G *)(g != NULL ? g : NULL))->unk_42830;
    u = (U *)t;
    s32 n = t->unk_0C();
    if (n >= t->unk_10()) {
        return NULL;
    }
    if (func_08867C3C(u->unk_A8048) != 0) {
        return NULL;
    }
    p = func_08867BE0(u->unk_A8048);
    if (p == NULL) {
        return NULL;
    }
    if ((u8)func_08867B74(u->unk_A8020, p) == 0) {
        return NULL;
    }
    u->unk_14 = func_0886800C((char *)u->unk_A8020);
    f32 f = (f32)u->unk_14 / (f32)u->unk_10;
    if (u->unk_A8070 != 0) {
        f32 h = u->unk_A8074;
        if (f > h) {
            func_08867B1C(u, 0.05f + h);
        }
    }
    return p->unk_08;
}

R *func_0896CFE0(S_0896CAB8 *arg0, char *arg1, s32 arg2) {
    P *q;
    U *u;
    R *p = unk_00(u, q);
    if (p == NULL) {
        return NULL;
    }
    u = (U *)&p->unk_50;
    if (arg1 == NULL) {
        func_08822B3C(((S0896C904 *)u)->unk_00, D_089DD078);
    } else {
        func_08822BC4(arg1);
        func_08822D5C(((S0896C904 *)u)->unk_00, arg1, 0x7F);
        ((S0896C904 *)u)->unk_00[0x7F] = 0;
    }
    func_0893D718((S0896C904 *)u, (S0896C904 *)u);
    ((S0896C904 *)u)->unk_80 = func_0888AFAC((S0896C904 *)u);
    if (p != NULL) {
        if (func_08867B14(p) != 0) {
            func_08867AB8((S_0896CAB8 *)p);
        }
        func_08867C5C(arg0->unk_24, p);
        func_08867B14(p);
        func_08867AA0(p, arg0);
    }
    arg0->unk_104 = arg2;
    return p;
}
}
