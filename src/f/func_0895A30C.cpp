#include "common.h"

extern "C" {

void func_0881C8B0(s32);
s32 func_0881CF00(char *, char *);
void func_0881CF78(s32, s32, s32, s32);
void func_0881D9D8(s32, s32, s32);
s32 func_0881DBA4(s32);
void func_088226BC(char *, char *, ...);
s32 func_08858BCC(void);
void func_0885DE4C(void *);

extern char D_08A04C40[];
extern char D_08A04C44[];
extern char D_08A04C60[];
extern char D_08A04C64[];
extern u8 D_08A44AD8[];
extern u8 D_08A47778[];

struct N {
    N *unk_00;
    N *unk_04;
    u8 pad_08[0x58];
    char unk_60[0x110];
};

class T {
public:
    N *unk_00;
    N *unk_04;
    virtual N *func_00();
    virtual u32 func_04();
    u8 unk_0C[0x17010];
    void *unk_1701C;

    void func_08()
    {
        N *temp = func_00();
        unk_00 = temp;
        unk_04 = &temp[func_04() - 1];
        temp->unk_04 = (N *)this;
        unk_04->unk_00 = (N *)this;
        for (u32 i = 1; i < func_04(); i++) {
            N *prev = temp;
            ++temp;
            prev->unk_00 = temp;
            temp->unk_04 = prev;
        }
    }
};

struct L {
    N *unk_00;
    N *unk_04;
    T *unk_08;
    s32 unk_0C;

    void func_00(T *arg0)
    {
        unk_08 = arg0;
        N *temp = (N *)(arg0 + 1);
        unk_0C = 0;
        unk_00 = temp;
        unk_04 = temp;
    }
};

struct I {
    N *unk_00;

    s32 func_00(const I &arg0) const { return unk_00 == arg0.unk_00; }
    bool func_04(const I &arg0) const { return !(bool)func_00(arg0); }
};

struct E {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    u8 *unk_18;

    void func_00()
    {
        s32 temp = func_08858BCC();
        unk_18 = D_08A44AD8;
        unk_14 = 0;
        unk_00 = 0;
        unk_04 = 0;
        unk_08 = 0;
        unk_10 = 0;
        unk_0C = temp;
    }
};

class V {
public:
    virtual void func_00();
    virtual void func_04();
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10();
    virtual void func_14();
    virtual void func_18();
    virtual void func_1C();
    virtual void func_20();
    virtual void func_24();
    virtual void func_28();
    virtual void func_2C();
    virtual void func_30();
    virtual void func_34(s32, s32, s32);
};

struct S {
    u8 pad_00[0x94];
    V unk_94;
    u8 pad_98[0x149C];
    E *unk_1534;
    u32 unk_1538;
};

void func_0885DD94(E *, s32, char *, s32);
void func_08949098(L *, s32);
void func_08949224(T *, s32);
void func_0894A444(T *, char *, char *);

void func_0895A30C(S *arg0, char *arg1)
{
    L a;
    T b;
    char buf[0x400];
    E e;
    I p;
    I end;

    *(u8 **)((u8 *)&b + 8) = D_08A47778;
    T *temp = (T *)(u32)&b;
    b.unk_1701C = (void *)(((u32)b.unk_0C + 0xFU) & ~0xFU);
    temp->func_08();
    a.func_00(temp);
    func_0894A444(&b, arg1, D_08A04C60);
    p.unk_00 = a.unk_00;
    end.unk_00 = (N *)&a;

    if (p.func_04(end)) {
        u32 *size = &arg0->unk_1538;
        E **base = &arg0->unk_1534;
        do {
            func_088226BC(buf, D_08A04C64, arg1, p.unk_00->unk_60);
            s32 temp = func_0881CF00(buf, D_08A04C40);
            func_0881D9D8(temp, 0, 2);
            s32 len = func_0881DBA4(temp);
            func_0881D9D8(temp, 0, 0);

            e.unk_14 = 0;
            e.unk_00 = 0;
            e.unk_04 = 0;
            e.unk_08 = 0;
            e.unk_10 = 0;
            e.unk_0C = 0;
            e.unk_18 = D_08A44AD8;
            E *q = &arg0->unk_1534[arg0->unk_1538];
            if (q != NULL) {
                q->unk_18 = D_08A44AD8;
            }
            ++arg0->unk_1538;
            e.unk_18 = D_08A44AD8;
            func_0885DE4C(&e);
            ((volatile E *)&e)->unk_0C = 0;
            ((volatile E *)&e)->unk_14 = 0;

            q = *base + *size - 1;
            if (q != NULL) {
                q->func_00();
            }
            func_0885DD94(q, len, D_08A04C44, 0x15E);
            func_0881CF78(q->unk_00, len, 1, temp);
            func_0881C8B0(temp);
            arg0->unk_94.func_34(q->unk_00, len, 1);
            p.unk_00 = p.unk_00->unk_00;
        } while (p.func_04(end));
    }
    func_08949098(&a, 0);
    func_08949224(&b, 0);
}

}
