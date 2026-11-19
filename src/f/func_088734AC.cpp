#include "common.h"

extern "C" {

class V1 {
public:
    u8 pad_00[0x100];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(s32);
};
class V2 {
public:
    u8 pad_00[0x8];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(s32);
};
class V3 {
public:
    virtual void unk_08();
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
    virtual void unk_38(s32);
};
class V4 {
public:
    u8 pad_00[0x91C];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32);
};
struct P : V4 {
    u8 pad_920[0x48];
    u8 unk_968, unk_969;
    u8 pad_96A[0x82];
    P *unk_9EC;
};
struct Q { u8 pad_00[0xBE]; u8 unk_BE; };
struct R { u8 pad_00[4]; Q *unk_04; };
struct S {
    u8 pad_00[0x1500];
    s32 unk_1500;
    u8 pad_1504[0x10];
    s32 unk_1514;
    u8 pad_1518[0x1468];
    u8 unk_2980[4];
    u8 pad_2984[0x2058];
    u8 unk_49DC[4];
    u8 pad_49E0[0x1C650];
    u8 unk_21030[4];
    u8 pad_21034[0x714];
    s32 unk_21748;
    u8 pad_2174C[0x3464];
    u8 unk_24BB0[4];
    u8 pad_24BB4[0x11F54];
    V1 * unk_36B08;
    u8 pad_36B0C[0x4];
    V2 * unk_36B10;
    u8 pad_36B14[0x4];
    V3 * unk_36B18;
    u8 pad_36B1C[0x44];
    u8 unk_36B60[4];
    u8 pad_36B64[0x810C];
    u8 unk_3EC70[4];
    u8 pad_3EC74[0xCA70];
    P * unk_4B6E4;
    u8 pad_4B6E8[0x85D8];
    u8 unk_53CC0[4];
    u8 pad_53CC4[0x1764];
    s32 unk_55428;
    u8 pad_5542C[0xF4];
    char unk_55520[4];
    u8 pad_55524[0x4C];
    u8 unk_55570[4];
    u8 pad_55574[0x24];
    u8 unk_55598[4];
    u8 pad_5559C[0x10A38];
    u8 unk_65FD4;
    u8 pad_65FD5[0x7];
    V2 * unk_65FDC;
    u8 pad_65FE0[0x4];
    u8 unk_65FE4[4];
    u8 pad_65FE8[0xAA5];
    u8 unk_66A8D;
    u8 pad_66A8E[0x2];
    u32 unk_66A90;
    u32 unk_66A94;
};

extern u8 *D_08AD1F14[];
extern P *D_08AD8134[];
extern s32 D_08AD8DA8[];
extern u8 *D_08AD8DD8[];

R *func_0884E644(s32);
void func_0885A958(void *);
void func_088649A4(s32 *);
void func_088649D8(s32 *, s32);
extern int func_08864FC0(s32);
void func_08873CF4(S *);
void func_088795E4(void *, s32);
s32 func_0887ED88(s32, s32);
void func_08882614(void *, s32);
s32 func_088A88C0(void);
extern s32 func_088BCE24(s32, s32);
s32 func_088BCF70(s32);
s32 func_088CFA8C(s32);
s32 func_088CFA94(s32);
s32 func_088F1A2C(void *);
void func_08913708(char *, s32);
void func_0891B4F4(s32, s32);
void func_0892A2EC(void *, s32);
void func_0892ABAC(void *, s32, s32);
void func_0892E67C(void *, s32, s32);
void func_089343BC(void *, s32, s32);
void func_0893BE0C(void *, s32);
void func_08954BA8(void *);
void func_08954C74(void *);
void func_08956414(void *, s32, s32);
s32 func_089A8B74(u8 *, s32);
void func_089AD57C(void *, s32);
void func_089D0E50(u8 *, s32, s32, s32, s32, s32);
void func_089D1904(void *, s32, s32);
s32 func_089D1AC8(void *);
s32 func_089D1AD8(u8 *);
s32 func_089D1AEC(u8 *);
void func_089D1B50(u8 *, s32);

s32 func_088734AC(S *arg0, s32 arg1) {
    s32 temp2C;
    func_088649A4(&temp2C);
    arg0->unk_36B08->unk_10(arg1);
    func_08864FC0((s32)arg0->unk_36B08);
    func_0885A958((u8 *)arg0->unk_36B08 + 0x1B60);
    V2 *p = arg0->unk_36B10;
    if (p != NULL)
        p->unk_10(arg1);
    func_088BCE24((s32)((u8 *)arg0 + 0x36B60), arg1);
    func_08882614(arg0->unk_3EC70, arg1);
    func_08956414(arg0->unk_2980, arg0->unk_1514, arg1);
    func_089343BC(arg0->unk_24BB0, arg0->unk_1514, arg1);
    func_08873CF4(arg0);
    V3 *q = arg0->unk_36B18;
    if (q != NULL)
        q->unk_38(arg1);
    func_0891B4F4(arg0->unk_55428, arg1);
    s32 t = func_088CFA8C(func_088BCF70((s32)((u8 *)&arg0->unk_36B18 + 0x48)));
    func_0892ABAC(arg0->unk_53CC0, t, func_088CFA94(func_088BCF70((s32)arg0->unk_36B60)));
    func_0892A2EC(arg0->unk_53CC0, arg1);
    func_089AD57C(arg0->unk_55570, arg1);
    func_0893BE0C(arg0->unk_65FE4, arg1);
    u8 *r = D_08AD8DD8[0];
    func_0892E67C(r != NULL ? r : NULL, arg1, 0);
    V2 *s = arg0->unk_65FDC;
    if (s != NULL)
        s->unk_10(arg1);
    P **a = &arg0->unk_4B6E4;
    if (func_088F1A2C(*a) != 0) {
        P *b = *a;
        P *c = D_08AD8134[0];
        void *temp = NULL;
        if (c == b) {
            u32 val = b->unk_969 != 0;
            if (val ^ 1U)
                temp = (void *)1;
        }
        if (temp == NULL) {
            b = *(P *volatile *)&arg0->unk_4B6E4;
            if (c != b) {
                b->unk_9EC = c;
                D_08AD8134[0] = b;
            }
            b->unk_969 = 0;
            b->unk_968 = 0;
        }
    }
    (*(P *volatile *)&arg0->unk_4B6E4)->unk_14(arg1);
    func_08913708(arg0->unk_55520, arg1);
    *(u64 *)&arg0->unk_66A90 += (u32)arg1;
    ++D_08AD8DA8[0];
    if (arg0->unk_65FD4 != 0 && arg0->unk_66A8D == 0) {
        s32 n = arg0->unk_21748;
        s32 t2 = 1;
        if (n != 2 && n != 4)
            t2 = 0;
        if (t2 == 0) {
            if (func_089D1AC8(arg0->unk_55598) != 0) {
                func_089D1B50(arg0->unk_55598, arg1);
            } else if (func_0887ED88(arg0->unk_1500, 8) != 0) {
                R *p2 = func_0884E644(func_088A88C0());
                if (((p2->unk_04->unk_BE >> 7) & 1) == 0) {
                    u8 *p3 = D_08AD1F14[0];
                    p3 = (p3 != NULL ? p3 : NULL) + 0x2460;
                    arg1 = func_089A8B74(p3, 0x40000);
                    s32 a = func_089A8B74(p3, 0x2003A);
                    s32 b = func_089A8B74(p3, 0x20038);
                    s32 c = func_089A8B74(p3, 0x20001);
                    func_089D0E50(arg0->unk_55598, arg1, a, 2, b, c);
                    func_089D1904(arg0->unk_55598, 1, 1);
                    func_088795E4(arg0->unk_49DC, 1);
                    func_08954BA8(arg0->unk_21030);
                }
            }
            if (func_089D1AD8(arg0->unk_55598) != 0) {
                func_088795E4(arg0->unk_49DC, 0);
                func_08954C74(arg0->unk_21030);
                if (func_089D1AEC(arg0->unk_55598) == 0)
                    func_0884E644(func_088A88C0())->unk_04->unk_BE |= 0x80;
            }
        }
    }
    func_088649D8(&temp2C, -1);
    return 1;
}
}
