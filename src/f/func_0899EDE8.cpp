#include "common.h"

extern "C" {

extern u8 D_08A44A3C[];
extern void *D_08A8812C[];

struct A_0899EDE8 {
    virtual void v0();
    virtual void v1(s32, s32 *, s32);
};

struct C_0899EDE8 {
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

typedef struct {
    s32 unk_00;
    A_0899EDE8 *unk_04;
    s32 unk_08;
    C_0899EDE8 unk_0C;
} M_0899EDE8;

typedef struct {
    u8 pad_00[0x14];
    void *unk_14;
    u8 pad_18[4];
    M_0899EDE8 unk_1C;
} B_0899EDE8;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C[4];
} T_0899EDE8;

void func_0885F7EC(s32, s32);
void func_08860490(void *, void *, s32, s32, s32, B_0899EDE8 *, s32, s32, s32);
void func_08937620(B_0899EDE8 *, M_0899EDE8 *);

void func_0899EDE8(s32 arg0, T_0899EDE8 *arg1, s32 arg2, M_0899EDE8 *arg3) {
    M_0899EDE8 m;
    B_0899EDE8 b;
    void *s;

    if (arg1->unk_08 == 1) {
        return;
    }
    arg1->unk_08 = 1;
    arg1->unk_04 = 0;
    s = D_08A8812C[0] != NULL ? D_08A8812C[0] : NULL;
    volatile u32 *p = (volatile u32 *)arg3;
    volatile u32 *q = (volatile u32 *)&m;
    u32 temp2 = p[2];
    u32 temp0 = p[0];
    u32 temp1 = p[1];
    q[2] = temp2;
    u32 temp3 = p[3];
    q[0] = temp0;
    q[1] = temp1;
    q[3] = temp3;
    if (m.unk_08 != 0) {
        *m.unk_0C.unk_00 += 1;
    }
    func_08937620(&b, &m);
    func_08860490(s, arg1->unk_0C, arg2, 0, 0, &b, 0, 0, 0);
    if (b.unk_1C.unk_08 != 0) {
        if (b.unk_1C.unk_0C.release() == 0) {
            b.unk_1C.unk_04->v1(b.unk_1C.unk_08, *(s32 **)&b.unk_1C.unk_0C, b.unk_1C.unk_00);
            func_0885F7EC(b.unk_1C.unk_08, b.unk_1C.unk_00);
        }
    }
    b.unk_14 = D_08A44A3C;
    if (m.unk_08 != 0) {
        if (m.unk_0C.release() == 0) {
            m.unk_04->v1(m.unk_08, *(s32 **)&m.unk_0C, m.unk_00);
            func_0885F7EC(m.unk_08, m.unk_00);
        }
    }
}

}
