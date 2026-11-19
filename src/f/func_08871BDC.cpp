#include "common.h"

extern "C" {

class V0 {
public:
    virtual void unk_08(s16);
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44();
    virtual void unk_48();
    virtual void unk_4C();
};

class V8 {
public:
    u8 pad_00[8];
    virtual void unk_08(s16);
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
};

class V100 {
public:
    u8 pad_00[0x100];
    virtual void unk_08(s16);
    virtual void unk_0C();
};

class V28 {
public:
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32);
};

class V {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(void *);
};

struct A {
    u8 pad_00[0xBE];
    u8 unk_BE;
};

struct B {
    u8 pad_00[4];
    A *unk_04;
};

struct C {
    u8 pad_00[0x108];
    s32 unk_108;
};

struct T_08876B88 {
    u8 pad_00[0x258];
    s32 unk_258;
};

struct S_08876B88 {
    u8 pad_00[0x14A0];
    T_08876B88 *unk_14A0;
};

struct F_089D1CA4 {
    f32 unk_00;
    f32 unk_04;
};

struct S_08871BDC;
struct S_0895895C;
struct S_088774CC;
struct Obj_089AD370;
struct Obj_08956380;
struct S_08940A00;
struct C_0897B950;

void *func_08827A50(s32, s32);
s32 func_0884E644(s32 arg0);
s32 func_088586E8(void);
s32 *func_08868E8C(void *, s32, char *);
s32 *func_08868F6C(void *, s32, s32);
void func_0886E558(char *arg0);
void func_08871A84(S_08871BDC *);
void func_088769F4(void *);
s32 func_0887744C(void *, char *, s32);
void func_088774CC(S_088774CC *arg0);
void *func_0887EDC8(void *, S_08871BDC *);
void func_08882320(s32 arg0, char **arg1);
void *func_08898974(void *, S_08871BDC *, V *);
s32 func_088A88C0(void);
void func_088CE1EC(void *, void *);
void *func_08928F90(void *, V *);
s32 func_089293A4(V8 *arg0, s32 arg1);
void func_0892ABF8(char *arg0, s32 arg1);
void func_0892E258(void *, s32);
void func_08931B9C(V28 *arg0, s32 arg1);
void func_089343AC(s32 *arg0, s32 arg1);
void *func_08937730(void *, S_08871BDC *, V *);
void func_0893BB50(void *, void *);
S_08940A00 *func_08940A00(S_08940A00 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0894DC3C(char *arg0, S_08871BDC *arg1, V8 *arg2, char *arg3);
void func_089557CC(u8 *arg0, s32 arg1, s32 arg2, char *arg3);
void func_08955874(char *arg0, void *arg1);
void func_08956380(Obj_08956380 *arg0, u8 arg1, s32 arg2);
void func_089570E0(char *, void *);
void func_089570F0(char *);
void func_089570F8(char *, s32, s32);
void func_0895895C(S_0895895C *arg0, s32 arg1);
void *func_08967804(void *, V *, void *);
C *func_0896CE18(void *, char *, s32, s32);
void func_0897B950(C_0897B950 *arg0, void *arg1);
void func_089AD370(Obj_089AD370 *arg0, s32 arg1);
s32 func_089B53D8(s32);
void func_089D1CA4(void *arg0, F_089D1CA4 *arg1);
void func_089D5920(s32 *arg0, void *arg1);
s32 scePowerSetClockFrequency350(s32, s32, s32);

extern char D_089F91EC[];
extern char D_089F91FC[];
extern char D_089F9214[];
extern char D_089F9230[];
extern char D_089F9244[];
extern char D_089F9250[];
extern char D_089F9258[];
extern char D_089F9278[];
extern char D_089F9284[];
extern char D_089F929C[];
extern char D_089F92B0[];
extern u8 *D_08AD1E28[];
extern S_08876B88 *D_08AD1F14[];
extern s32 D_08AD8DA8[];
extern u8 *D_08AD8DD8[];

struct S_08871BDC {
    u8 pad_00[0x1510];
    V *unk_1510;
    u8 pad_1514[4];
    u8 unk_1518;
    u8 pad_1519[3];
    s32 unk_151C;
    u8 pad_1520[0x22980 - 0x1520];
    S_08871BDC *unk_22980;
    u8 pad_22984[0x24AFE - 0x22984];
    u8 unk_24AFE;
    u8 pad_24AFF[2];
    u8 unk_24B01;
    u8 pad_24B02[0x25684 - 0x24B02];
    s32 unk_25684;
    s32 unk_25688;
    s32 *unk_2568C;
    u8 pad_25690[0x36B00 - 0x25690];
    V8 *unk_36B00;
    V *unk_36B04;
    V100 *unk_36B08;
    V *unk_36B0C;
    V8 *unk_36B10;
    V *unk_36B14;
    V0 *unk_36B18;
    V *unk_36B1C;
    u8 pad_36B20[0x36B4C - 0x36B20];
    V8 *unk_36B4C;
    V *unk_36B50;
    u8 pad_36B54[0x65FDC - 0x36B54];
    V8 *unk_65FDC;
    V *unk_65FE0;
    u8 pad_65FE4[0x66AB0 - 0x65FE4];
    V0 *unk_66AB0;
    V8 *unk_66AB4;
};

void func_08871BDC(S_08871BDC *arg0) {
    struct { F_089D1CA4 unk_00; u8 pad_08[8]; } temp;
    char *base = (char *)arg0;
    u8 *p;
    C *n;
    s32 *q;

    scePowerSetClockFrequency350(0x14D, 0x14D, 0xA6);
    func_088769F4(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL);
    func_0886E558(base);
    A *a = ((B *)func_0884E644(func_088A88C0()))->unk_04;
    a->unk_BE &= 0x7F;
    func_088774CC((S_088774CC *)((u8 *)(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL) + 0x2480));
    arg0->unk_151C = 1;
    p = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    func_08871A84(arg0);
    func_0892E258(D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL, 0x41);
    func_0893BB50(base + 0x65FE4, D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL);
    func_088CE1EC(base + 0x36B20, base + 0x65FE4);
    q = arg0->unk_2568C;
    arg0->unk_25684 = q[0];
    arg0->unk_25688 = q[1];

    n = func_0896CE18((D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL) + 0xEA8D0, D_089F91EC, 0, 1);
    n = func_0896CE18(n, D_089F91FC, 0, 1);
    n = func_0896CE18(n, D_089F9214, 0, 1);
    n = func_0896CE18(n, D_089F9230, 0, 1);
    n = func_0896CE18(n, D_089F9244, 0, 1);
    ((V0 *)(base + 0x24C50))->unk_14();
    func_0897B950((C_0897B950 *)(base + 0x24C50), (void *)n->unk_108);
    q = func_08868E8C(p, 6, D_089F9250);
    func_089557CC((u8 *)base + 0x2980, q[0], q[1], D_089F9258);
    arg0->unk_24B01 = 0;
    arg0->unk_24AFE = 0;
    func_089570F0(base + 0x2980);
    func_08955874(base + 0x2980, base + 0x36B20);
    u8 *r = *(u8 **)func_08868E8C(p, 6, D_089F9278);
    s32 offset = *(s32 *)(r + 0x70);
    u8 *t0;
    if (offset == 0) {
        t0 = NULL;
    } else {
        t0 = r + offset;
    }
    func_0897B950((C_0897B950 *)(base + 0x24C50), t0);
    func_089D5920((s32 *)(func_089B53D8(func_088586E8()) + 0x2E78), base + 0x24C50);
    q = func_08868F6C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 6, 3);
    if (q != NULL && *q != 0) {
        func_0895895C((S_0895895C *)(base + 0x2980), *q);
    }

    {
        V *a0 = arg0->unk_1510;
        V8 *p0 = (V8 *)func_08827A50(0x1850, (s32)a0);
        if (p0 != NULL) {
            p0 = (V8 *)func_08928F90(p0, arg0->unk_1510);
        }
        if (arg0->unk_36B00 != p0) {
            if (arg0->unk_36B00 != NULL) {
                arg0->unk_36B00->unk_08(-1);
                arg0->unk_36B04->unk_10(arg0->unk_36B00);
            }
            arg0->unk_36B00 = p0;
            arg0->unk_36B04 = a0;
        }
    }
    if (arg0->unk_36B00 != NULL) {
        s32 t = func_0887744C(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL, D_089F9284, 0xF);
        func_089293A4(arg0->unk_36B00, t);
    }

    {
        V *a0 = arg0->unk_1510;
        V100 *p0 = (V100 *)func_08827A50(0x1BB0, (s32)a0);
        if (p0 != NULL) {
            p0 = (V100 *)func_0887EDC8(p0, arg0);
        }
        if (arg0->unk_36B08 != p0) {
            if (arg0->unk_36B08 != NULL) {
                arg0->unk_36B08->unk_08(-1);
                arg0->unk_36B0C->unk_10(arg0->unk_36B08);
            }
            arg0->unk_36B08 = p0;
            arg0->unk_36B0C = a0;
        }
    }

    {
        V *a0 = arg0->unk_1510;
        V8 *p0 = (V8 *)func_08827A50(0x2F90, (s32)a0);
        if (p0 != NULL) {
            p0 = (V8 *)func_08898974(p0, arg0, arg0->unk_1510);
        }
        if (arg0->unk_36B10 != p0) {
            if (arg0->unk_36B10 != NULL) {
                arg0->unk_36B10->unk_08(-1);
                arg0->unk_36B14->unk_10(arg0->unk_36B10);
            }
            arg0->unk_36B10 = p0;
            arg0->unk_36B14 = a0;
        }
    }

    {
        V *a0 = arg0->unk_1510;
        V8 *p0 = (V8 *)func_08827A50(0x3A0, (s32)a0);
        if (p0 != NULL) {
            p0 = (V8 *)func_08937730(p0, arg0, arg0->unk_1510);
        }
        if (arg0->unk_36B4C != p0) {
            if (arg0->unk_36B4C != NULL) {
                arg0->unk_36B4C->unk_08(-1);
                arg0->unk_36B50->unk_10(arg0->unk_36B4C);
            }
            arg0->unk_36B4C = p0;
            arg0->unk_36B50 = a0;
        }
    }
    func_0892ABF8(base + 0x53CC0, (s32)arg0->unk_36B4C);

    {
        V *a0 = arg0->unk_1510;
        V8 *p0 = (V8 *)func_08827A50(0x8DE0, (s32)a0);
        if (p0 != NULL) {
            p0 = (V8 *)func_08967804(p0, arg0->unk_1510, base + 0x66AA4);
        }
        if (arg0->unk_65FDC != p0) {
            if (arg0->unk_65FDC != NULL) {
                arg0->unk_65FDC->unk_08(-1);
                arg0->unk_65FE0->unk_10(arg0->unk_65FDC);
            }
            arg0->unk_65FDC = p0;
            arg0->unk_65FE0 = a0;
        }
    }

    arg0->unk_66AB4 = arg0->unk_65FDC;
    n = func_0896CE18((D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL) + 0xEA8D0, D_089F91EC, 0, 1);
    n = func_0896CE18(n, D_089F91FC, 0, 1);
    n = func_0896CE18(n, D_089F929C, 1, 0);
    n = func_0896CE18(n, D_089F92B0, 0, 1);

    {
        V *a0 = arg0->unk_1510;
        s32 t = n->unk_108;
        V0 *p0 = (V0 *)func_08827A50(0x15E0, (s32)a0);
        if (p0 != NULL) {
            p0 = (V0 *)func_08940A00((S_08940A00 *)p0, (s32)arg0, (s32)arg0->unk_1510, t, 0x100);
        }
        if (arg0->unk_36B18 != p0) {
            if (arg0->unk_36B18 != NULL) {
                arg0->unk_36B18->unk_08(-1);
                arg0->unk_36B1C->unk_10(arg0->unk_36B18);
            }
            arg0->unk_36B18 = p0;
            arg0->unk_36B1C = a0;
        }
    }

    if (arg0->unk_36B18 != NULL) {
        arg0->unk_36B18->unk_34();
        arg0->unk_36B18->unk_4C();
    }
    arg0->unk_66AB0 = arg0->unk_36B18;
    arg0->unk_65FDC->unk_24();
    if (arg0->unk_36B10 != NULL) {
        arg0->unk_36B10->unk_0C();
        *(u8 **)((u8 *)arg0->unk_36B10 + 0x3E4) = (u8 *)arg0->unk_36B08 + 0x1B60;
    }
    arg0->unk_36B08->unk_0C();
    func_08882320((s32)(base + 0x3EC70), (char **)arg0->unk_1510);

    u32 i = 0;
    char *it = base;
    do {
        func_08931B9C((V28 *)(it + 0x53C00), 1 - i);
        ++i;
        it += 0x60;
    } while (i < 2U);

    func_088CE1EC(base + 0x36B20, base + 0x53C00);
    ((V28 *)(base + 0x53C00))->unk_14(6);
    func_0894DC3C(base + 0x24B20, arg0, arg0->unk_36B10, base + 0x342C);
    func_089570E0(base + 0x2980, base + 0x24B20);
    func_089570F8(base + 0x2980, 0, 0);
    func_08956380((Obj_08956380 *)(base + 0x2980), 0, 0);
    arg0->unk_22980 = arg0;
    func_089343AC((s32 *)(base + 0x24BB0), (s32)arg0->unk_36B10);
    func_088CE1EC(base + 0x36B20, base + 0x554F0);
    temp.unk_00.unk_00 = 169.0f;
    temp.unk_00.unk_04 = 103.0f;
    func_089D1CA4(base + 0x55598, &temp.unk_00);
    func_089AD370((Obj_089AD370 *)(base + 0x55570), (D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_14A0->unk_258);
    D_08AD8DA8[0] = 0;
    arg0->unk_1518 = 1;
}

}
