#include "common.h"

extern "C" {

struct A {
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, s32);
};

struct H {
    s32 unk_00;
    A *unk_04;
    s32 unk_08;
    s32 *unk_0C;
};

typedef struct {
    u8 pad_00[0xC];
} L;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[1];
} T;

typedef struct {
    char unk_00[0x20];
    s32 unk_20;
    u8 pad_24[0xC];
} E;

typedef struct {
    u8 pad_00[0x48];
    u8 unk_48[4];
    u8 pad_4C[4];
    char unk_50[0x24];
    E unk_74[3];
} S;

typedef struct {
    u8 pad_00[0x220];
    u8 unk_220[1];
} T088F920C;

typedef struct {
    u8 unk_00[0xC];
} U;

extern U D_089EE338[];

void func_0881F120(void *, void *, s32);
s32 func_088C6464(void *);
s32 func_088F920C(T088F920C *, char *);
s32 func_088F79A4(char *);
s32 func_088E0EF8(s32);
void func_088E21D0(H *, s32, u8 *);
void func_0886A45C(s32, s32);
void func_08945E64(L *);
void func_08945EC4(L *, s32);
s32 func_08947BF0(s32, char *);
u8 *func_08947BA8(L *, s32);

s32 func_0898EA40(T *arg0, S *arg1, s32 *arg2) {
    L l;
    H h;
    s32 *temp;
    u32 i;
    s32 j;
    s32 ret;
    u8 *p;
    bool v;

    *arg2 = arg1->unk_48[0] | ((arg1->unk_48[1] << 8) |
            (((u32)arg1->unk_48[3] << 24) | (arg1->unk_48[2] << 16)));
    ret = func_088F920C((T088F920C *)func_088C6464(arg0->unk_506F0), arg1->unk_50);
    switch (ret) {
        case 11: j = 1; break;
        case 12: j = 2; break;
        case 13: j = 3; break;
        case 14: j = 4; break;
        case 15: j = 5; break;
        case 16: j = 6; break;
        default: j = 1; break;
    }
    func_0881F120(arg2 + 1, &D_089EE338[j], 0xC);
    func_08945E64(&l);
    i = 0;
    do {
        if (arg1->unk_74[0].unk_20 != 0) {
            union {
                L *unk_00_ptr;
                s32 unk_00;
            } q;
            q.unk_00_ptr = &l;
            j = func_08947BF0(q.unk_00, arg1->unk_74[0].unk_00);
            if (j >= 0) {
                p = func_08947BA8(&l, j);
                func_088E21D0(&h, func_088E0EF8(func_088F79A4((char *)func_088C6464(arg0->unk_506F0))), p + 0x48);
                v = h.unk_08 == 0;
                if (*(volatile s32 *)&h.unk_08 != 0) {
                    *(s32 *)*(volatile s32 *)&h.unk_0C -= 1;
                    temp = h.unk_0C;
                    if ((temp != NULL ? *temp : 0) == 0) {
                        h.unk_04->unk_0C(h.unk_08, temp, h.unk_00);
                        func_0886A45C(h.unk_08, h.unk_00);
                    }
                }
                if (!v) {
                    arg2[1] = j;
                }
            }
        }
        ++i;
        arg1 = (S *)((u8 *)arg1 + sizeof(E));
        ++arg2;
    } while (i < 3);
    func_08945EC4(&l, -1);
    return ret;
}

}
