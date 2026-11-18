#include "common.h"

extern "C" {

struct A_0899ABC0 {
    virtual void unk_08();
    virtual void unk_0C(void *, s32 *, s32);
};

struct C_0899ABC0 {
    s32 *unk_00;
    s32 unk_04() { return unk_00 != NULL ? *unk_00 : 0; }
    s32 unk_08() {
        --*unk_00;
        return unk_04();
    }
};

struct P_0899ABC0 {
    void *unk_00;
    C_0899ABC0 unk_04;
};

struct H_0899ABC0 {
    s32 unk_00;
    A_0899ABC0 *unk_04;
    P_0899ABC0 unk_08;
};

struct V_0899ABC0 {
    u8 unk_00[0x64];
    H_0899ABC0 *unk_64;
    u32 unk_68;
};

struct B_0899ABC0 {
    u8 pad_00[0x1C];
    virtual void unk_08(s32, f32);
};

struct E_0899ABC0 {
    u8 pad_00[0x1C];
    virtual void unk_08(s32);
};

struct S_0899ABC0 {
    u8 pad_00[0xF2C];
    V_0899ABC0 unk_F2C;
    s32 unk_F98;
    u8 pad_F9C[0x90];
    s32 unk_102C;
    u8 pad_1030[0x10];
    u8 unk_1040;
    u8 pad_1041[0x1B];
    u8 unk_105C;
    u8 pad_105D[3];
    f32 unk_1060;
    f32 unk_1064;
    B_0899ABC0 unk_1068;
    E_0899ABC0 unk_1088;
};

void func_0899AEE0(V_0899ABC0 *, H_0899ABC0 *, H_0899ABC0 *);
s32 func_0899B040(char *);
s32 func_0899B054(char *);
u32 func_0899B05C(void);
void func_0899B34C(void *, s32);
void func_0899E274(void *);
extern s32 D_08A06BF0[];
extern s32 D_08A06BF4[];

void func_0899ABC0(S_0899ABC0 *arg0) {
    V_0899ABC0 temp;
    s32 temp2;
    s32 temp3;
    const s32 *temp4;
    u32 i;
    s32 off;
    H_0899ABC0 *dst;
    H_0899ABC0 *src;
    H_0899ABC0 *p;
    P_0899ABC0 *q;
    C_0899ABC0 *c;
    H_0899ABC0 *first;

    temp2 = arg0->unk_102C - 1;
    if (D_08A06BF0[0] < temp2) {
        temp4 = &temp2;
    } else {
        temp4 = D_08A06BF0;
    }
    arg0->unk_1068.unk_08(*temp4, 0.5f);

    temp.unk_64 = (H_0899ABC0 *)(&((u8 *)&temp - 0x34)[(u32)temp.unk_00 & 3] + 0x34);
    temp.unk_68 = 0;
    i = 0;
    if (i < func_0899B05C()) {
        off = 0;
        H_0899ABC0 *&data = arg0->unk_F2C.unk_64;
        do {
            func_0899E274(((H_0899ABC0 *)((u8 *)data + off))->unk_08.unk_00);
            if (i != arg0->unk_102C) {
                H_0899ABC0 *src = (H_0899ABC0 *)((u8 *)data + off);
                H_0899ABC0 *dst = &temp.unk_64[temp.unk_68];
                if (dst != NULL) {
                    dst->unk_00 = src->unk_00;
                    dst->unk_04 = src->unk_04;
                    dst->unk_08.unk_00 = src->unk_08.unk_00;
                    dst->unk_08.unk_04.unk_00 = src->unk_08.unk_04.unk_00;
                    if (dst->unk_08.unk_00 != NULL) {
                        ++*dst->unk_08.unk_04.unk_00;
                    }
                }
                temp.unk_68++;
            }
            off += 0x10;
        } while (++i < func_0899B05C());
    }

    src = &arg0->unk_F2C.unk_64[arg0->unk_102C];
    dst = &temp.unk_64[temp.unk_68];
    if (dst != NULL) {
        dst->unk_00 = src->unk_00;
        dst->unk_04 = src->unk_04;
        dst->unk_08.unk_00 = src->unk_08.unk_00;
        dst->unk_08.unk_04.unk_00 = src->unk_08.unk_04.unk_00;
        if (dst->unk_08.unk_00 != NULL) {
            ++*dst->unk_08.unk_04.unk_00;
        }
    }
    temp.unk_68++;
    if (&arg0->unk_F2C != &temp) {
        first = (H_0899ABC0 *)func_0899B054((char *)&temp);
        func_0899AEE0(&arg0->unk_F2C, first, (H_0899ABC0 *)func_0899B040((char *)&temp));
    }
    --arg0->unk_F98;
    arg0->unk_1040 = 0;
    arg0->unk_1060 = 0.0f;
    arg0->unk_1064 = 0.5f;
    arg0->unk_105C = 1;
    temp3 = arg0->unk_102C - 1;
    if (D_08A06BF4[0] < temp3) {
        temp4 = &temp3;
    } else {
        temp4 = D_08A06BF4;
    }
    arg0->unk_1088.unk_08(*temp4);

    s32 n = temp.unk_68;
    H_0899ABC0 *base = temp.unk_64;
    p = *(H_0899ABC0 *volatile *)&temp.unk_64;
    H_0899ABC0 *&data = temp.unk_64;
    if ((u32)p != (u32)(base + n)) {
        u32 &size = temp.unk_68;
        do {
            if (p != NULL) {
                if (p != NULL) {
                    q = &p->unk_08;
                    if (p->unk_08.unk_00 != NULL) {
                        c = &p->unk_08.unk_04;
                        if (c->unk_08() == 0) {
                            p->unk_04->unk_0C(q->unk_00, c->unk_00, p->unk_00);
                            func_0899B34C(q->unk_00, p->unk_00);
                        }
                    }
                }
            }
            p++;
        } while (p != data + size);
    }
    temp.unk_68 = 0;
}

}
