#include "common.h"

extern "C" {

struct A_0899B0D4 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_0899B0D4 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct SP_0899B0D4 {
    void *unk_00;
    C_0899B0D4 unk_04;
};

typedef struct {
    s32 unk_00;
    A_0899B0D4 *unk_04;
    SP_0899B0D4 unk_08;
} H_0899B0D4;

typedef struct {
    u8 pad_00[0xF90];
    H_0899B0D4 *unk_F90;
    u8 pad_F94[0x124];
    u8 unk_10B8;
    u8 pad_10B9[3];
    s32 unk_10BC;
    f32 unk_10C0;
} S_0899B0D4;

void *func_0899985C(void *, s16);
u32 func_0899B05C(void);
void func_0899B278(void *, void *);
void *func_0899B2BC(void *, void *);
void func_0899B34C(void *, s32);
void func_0899E274(void *);
void func_0899E3C8(void *, void *);

void func_0899B0D4(S_0899B0D4 *arg0, s32 arg1, s32 arg2) {
    H_0899B0D4 tmp;
    H_0899B0D4 t30;
    H_0899B0D4 t20;
    u32 i;
    H_0899B0D4 *p;
    u32 *d;
    u32 *q;
    SP_0899B0D4 *s;
    C_0899B0D4 *c;

    H_0899B0D4 *&data = arg0->unk_F90;
    d = (u32 *)&tmp;
    q = (u32 *)&data[arg1];
    d[0] = q[0];
    d[1] = q[1];
    d[2] = q[2];
    d[3] = q[3];
    if (tmp.unk_08.unk_00 != NULL) {
        ++*tmp.unk_08.unk_04.unk_00;
    }
    p = data;
    func_0899B2BC(&t30, &p[arg2]);
    func_0899B278(&t30, &p[arg1]);
    func_0899985C(&t30, -1);
    p = &data[arg2];
    func_0899B2BC(&t20, &tmp);
    func_0899B278(&t20, p);
    func_0899985C(&t20, -1);
    {
        H_0899B0D4 &x = data[arg2];
        H_0899B0D4 &y = data[arg1];
        func_0899E3C8(x.unk_08.unk_00, y.unk_08.unk_00);
    }
    i = 0;
    if (i < func_0899B05C()) {
        do {
            func_0899E274(data[i].unk_08.unk_00);
        } while (++i < func_0899B05C());
    }
    arg0->unk_10BC = 0;
    arg0->unk_10C0 = 1.0f;
    arg0->unk_10B8 = 1;
    s = &tmp.unk_08;
    if (tmp.unk_08.unk_00 != NULL) {
        c = &tmp.unk_08.unk_04;
        if (c->release() == 0) {
            tmp.unk_04->v1(s->unk_00, *(s32 **)c, tmp.unk_00);
            func_0899B34C(s->unk_00, tmp.unk_00);
        }
    }
}

}
