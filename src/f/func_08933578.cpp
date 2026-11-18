#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00[4][4];
} M_08933578;

typedef struct {
    u8 pad_00[0x40];
    s32 unk_40;
} B_08933578;

class S_08933578 {
public:
    B_08933578 *unk_00;
    s32 unk_04;
    u32 unk_08;
    u8 pad_0C[4];
    M_08933578 unk_10;
    virtual void v08();
    virtual void v0C();
    virtual void v10(M_08933578 *);
    virtual M_08933578 *v14();
};

void func_088664DC(M_08933578 *, B_08933578 *, s32);
void func_088554A0(M_08933578 *, M_08933578 *, M_08933578 *);

void func_08933578(S_08933578 *arg0) {
    M_08933578 m2;
    M_08933578 m3;
    M_08933578 r1;
    M_08933578 m1;
    M_08933578 r2;
    M_08933578 r3;
    M_08933578 t;
    M_08933578 *p;

    if (arg0->unk_00 != NULL && arg0->unk_04 != -1 && arg0->unk_00->unk_40 != 0) {
    if ((arg0->unk_08 & 1) && (arg0->unk_08 & 2)) {
        func_088664DC(&m1, arg0->unk_00, arg0->unk_04);
        func_088554A0(&r1, &m1, &arg0->unk_10);
        arg0->v10(&r1);
    } else if (arg0->unk_08 & 1) {
        func_088664DC(&m2, arg0->unk_00, arg0->unk_04);
        m2.unk_00[0][0] = 1.0f;
        m2.unk_00[1][1] = 1.0f;
        m2.unk_00[2][2] = 1.0f;
        m2.unk_00[0][1] = 0.0f;
        m2.unk_00[0][2] = 0.0f;
        m2.unk_00[0][3] = 0.0f;
        m2.unk_00[1][0] = 0.0f;
        m2.unk_00[1][2] = 0.0f;
        m2.unk_00[1][3] = 0.0f;
        m2.unk_00[2][0] = 0.0f;
        m2.unk_00[2][1] = 0.0f;
        m2.unk_00[2][3] = 0.0f;
        func_088554A0(&r2, &m2, &arg0->unk_10);
        arg0->v10(&r2);
    } else if (arg0->unk_08 & 2) {
        func_088664DC(&m3, arg0->unk_00, arg0->unk_04);
        m3.unk_00[3][0] = 0.0f;
        m3.unk_00[3][1] = 0.0f;
        m3.unk_00[3][2] = 0.0f;
        m3.unk_00[3][3] = 1.0f;
        p = arg0->v14();
        func_088554A0(&t, &m3, &arg0->unk_10);
        func_088554A0(&r3, p, &t);
        arg0->v10(&r3);
    }
    }
}

}
