#include "common.h"

extern "C" {

struct B_089778AC;

struct C_08977558 {
    virtual s32 *unk_08(void *, B_089778AC *);
    virtual void unk_0C(void *, s32 *, B_089778AC *);
};

struct P_08977558 {
    B_089778AC *unk_00;
    C_08977558 *unk_04;
    void *unk_08;
    s32 *unk_0C;
};

struct F_08977558 {
    f32 unk_00[3];
};

struct S_08977558 {
    B_089778AC *unk_00;
    s32 unk_04;
    u8 pad_08[8];
    u8 unk_10[0x460];
    s32 unk_470;
    P_08977558 unk_474;
    u8 unk_484[0x109BC];
    u8 unk_10E40[0x90];
    u8 unk_10ED0[0x90];
    u8 unk_10F60[0x90];
    u8 unk_10FF0[0x90];
    f32 unk_11080;
    f32 unk_11084;
    s32 unk_11088;
    S_08977558 *unk_1108C;
    F_08977558 unk_11090;
    u8 unk_1109C;
    u8 pad_1109D[3];
    s32 unk_110A0;
    s32 unk_110A4;
    S_08977558 *unk_110A8;
    F_08977558 unk_110AC;
    u8 unk_110B8;
    u8 pad_110B9[3];
    s32 unk_110BC;
    s32 unk_110C0;
    S_08977558 *unk_110C4;
    F_08977558 unk_110C8;
    u8 unk_110D4;
    u8 pad_110D5[3];
    s32 unk_110D8;
    s32 unk_110DC;
};

struct T088F0C70;
struct S_089913F8;

void *func_08827A50(s32, s32);
C_08977558 *func_08827AD4(void);
void func_08865EE0(void *);
void func_088710C0(void *, P_08977558 *);
void func_08874714(void *, B_089778AC *);
T088F0C70 *func_088F0C70(T088F0C70 *, s32);
void func_0892E258(void *, s32);
S_089913F8 *func_089913F8(S_089913F8 *, void *);
extern f32 D_089ECD70[];
extern f32 D_089ECD74[];
extern f32 D_08A05810[];
extern f32 D_08A05818[];
extern f32 D_08A0581C[];
extern f32 D_08A05820[];
extern f32 D_08A05828[];
extern f32 D_08A05830[];
extern f32 D_08A05834[];
extern void *D_08AD8DD8[];

S_08977558 *func_08977558(S_08977558 *arg0, B_089778AC *arg1, s32 arg2) {
    P_08977558 temp;
    volatile F_08977558 temp2;
    volatile F_08977558 temp3;
    volatile F_08977558 temp4;
    T088F0C70 *p;
    P_08977558 *q;
    s32 *r;

    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    func_089913F8((S_089913F8 *)arg0->unk_10, arg0);
    arg0->unk_470 = 0;
    p = (T088F0C70 *)func_08827A50(0xA00, (s32)arg1);
    if (p != NULL) {
        p = func_088F0C70(p, arg2);
    }
    arg0->unk_474.unk_00 = arg1;
    q = &arg0->unk_474;
    q->unk_04 = func_08827AD4();
    q->unk_08 = p;
    q->unk_0C = q->unk_04->unk_08(p, q->unk_00);
    *q->unk_0C = 1;
    volatile u32 *temp5 = (volatile u32 *)&temp;
    const u32 *temp6 = (const u32 *)&arg0->unk_474;
    temp5[0] = temp6[0];
    temp5[1] = temp6[1];
    temp5[2] = temp6[2];
    temp5[3] = temp6[3];
    if (temp5[2] != 0) {
        ++*(s32 *)temp5[3];
    }
    func_088710C0(arg0->unk_484, &temp);
    if (temp.unk_08 != NULL) {
        --*temp.unk_0C;
        r = *(s32 *volatile *)&temp.unk_0C;
        if ((r != NULL ? *r : 0) == 0) {
            temp.unk_04->unk_0C(temp.unk_08, temp.unk_0C, temp.unk_00);
            func_08874714(temp.unk_08, temp.unk_00);
        }
    }
    func_08865EE0(arg0->unk_10E40);
    func_08865EE0(arg0->unk_10ED0);
    func_08865EE0(arg0->unk_10F60);
    func_08865EE0(arg0->unk_10FF0);
    arg0->unk_11080 = D_089ECD70[0];
    arg0->unk_11084 = D_089ECD74[0];
    arg0->unk_11088 = 0;
    f32 temp7 = D_08A05810[1];
    f32 temp10 = D_08A05818[0];
    temp2.unk_00[0] = temp7;
    temp2.unk_00[1] = temp10;
    temp2.unk_00[2] = D_08A0581C[0];
    arg0->unk_1108C = arg0;
    arg0->unk_11090 = *(F_08977558 *)&temp2;
    arg0->unk_1109C = 0;
    arg0->unk_110A0 = 0;
    arg0->unk_110A4 = 0;
    f32 temp8 = D_08A05820[0];
    f32 temp11 = D_08A05820[1];
    temp3.unk_00[0] = temp8;
    temp3.unk_00[1] = temp11;
    temp3.unk_00[2] = D_08A05828[0];
    arg0->unk_110A8 = arg0;
    arg0->unk_110AC = *(F_08977558 *)&temp3;
    arg0->unk_110B8 = 0;
    arg0->unk_110BC = 0;
    arg0->unk_110C0 = 0;
    f32 temp9 = D_08A05828[1];
    f32 temp12 = D_08A05830[0];
    temp4.unk_00[0] = temp9;
    temp4.unk_00[1] = temp12;
    temp4.unk_00[2] = D_08A05834[0];
    arg0->unk_110C4 = arg0;
    arg0->unk_110C8 = *(F_08977558 *)&temp4;
    arg0->unk_110D4 = 0;
    arg0->unk_110D8 = 0;
    arg0->unk_110DC = 0;
    func_0892E258(D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL, 8);
    return arg0;
}

}
