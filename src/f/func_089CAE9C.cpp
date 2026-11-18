#include "common.h"

extern "C" {
struct Unk28;
struct Unk110 {
    u8 pad_00[0x28];
    s32 unk_28;
};

struct UnkNode {
    UnkNode *unk_00;
    UnkNode *unk_04;
    u8 pad_08[4];
    Unk28 *unk_0C;
};

void *func_08827A50(s32, s32);
void func_089457D8(void *);
void func_08945E64(void *);
s32 func_089CA388(s32, void *);
s32 func_089CAE8C(s32);
void func_089CB2B8(Unk28 *);
void func_089CB3B0(Unk28 *);
void func_089CBAD0(s32, s32);
extern u8 D_08A48DF4[];

struct UnkV {
    virtual s32 *func_08(s32, s32);
    virtual void func_0C(s32, s32 *, s32);
};
UnkV *func_08827AD4(void);
inline void *operator new(unsigned int, void *p) { return p; }

struct Unk10 {
    s32 unk_00;
    UnkV *unk_04;
    s32 unk_08;
    s32 *unk_0C;

    void func_0C(s32 a)
    {
        unk_04 = func_08827AD4();
        unk_08 = a;
        s32 *p = unk_04->func_08(a, *(volatile s32 *)&unk_00);
        *p = 1;
        unk_0C = p;
    }
    Unk10() {}
    Unk10(const Unk10 &arg0)
    {
        s32 a = *(const volatile s32 *)&arg0.unk_00;
        UnkV *b = *(UnkV *const volatile *)&arg0.unk_04;
        s32 c = *(const volatile s32 *)&arg0.unk_08;
        unk_00 = a;
        unk_04 = b;
        unk_08 = c;
        unk_0C = arg0.unk_0C;
        if (*(volatile s32 *)&unk_08 != 0) ++*unk_0C;
    }
    s32 func_00(s32 *p)
    {
        if (p != NULL) return *p;
        return 0;
    }
    void func_04()
    {
        if (unk_08 != 0) {
            s32 *p = *(s32 *volatile *)&unk_0C;
            s32 *q = *(s32 *volatile *)&unk_0C;
            --*p;
            if (func_00(q) == 0) {
                unk_04->func_0C(unk_08, q, unk_00);
                func_089CBAD0(unk_08, unk_00);
            }
        }
    }
};

struct Unk28 {
    UnkNode *unk_00;
    UnkNode *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
    u8 *unk_24;

    s32 func_04(UnkNode *p)
    {
        if (unk_00 != (UnkNode *)this) {
            p->unk_00 = unk_00;
            (*(UnkNode *volatile *)&unk_00)->unk_04 = p;
            unk_00 = p;
            return 1;
        } else {
            unk_00 = p;
            unk_04 = p;
            p->unk_00 = (UnkNode *)this;
            return 1;
        }
    }
    void func_08(UnkNode *p)
    {
        if ((UnkNode *)this != p) {
            s32 ok = func_04(p);
            p->unk_04 = (UnkNode *)this;
            if (ok) {
                p->unk_0C = this;
                ++unk_20;
            }
        }
    }
};

struct Unk180 {
    u8 unk_00[8];
    u8 unk_08[0xC];
    u8 unk_14[0x110];
    Unk10 *unk_124;
    s32 unk_128;
    Unk28 unk_12C;
    Unk28 unk_154;
    s32 unk_17C;
};

Unk180 *func_089CAE9C(Unk180 *arg0, Unk110 *arg1)
{
    s32 n;
    u32 i;
    s32 p;
    func_089457D8(arg0);
    func_08945E64(arg0->unk_08);
    arg0->unk_124 = (Unk10 *)(((u32)arg0->unk_14 & 0xF) + (u32)arg0 + 0x14);
    Unk28 *list = &arg0->unk_12C;
    arg0->unk_128 = 0;
    list->unk_24 = D_08A48DF4;
    func_089CB3B0(list);
    list->unk_04 = (UnkNode *)list;
    list->unk_00 = (UnkNode *)list;
    func_089CB2B8(list);
    list = &arg0->unk_154;
    list->unk_24 = D_08A48DF4;
    func_089CB3B0(list);
    list->unk_04 = (UnkNode *)list;
    list->unk_00 = (UnkNode *)list;
    func_089CB2B8(list);
    arg0->unk_17C = 0;
    n = arg1->unk_28;
    i = 0;
    do {
        Unk10 temp;
        p = (s32)func_08827A50(0x110, n);
        if (p != 0) {
            p = func_089CA388(p, arg1);
            temp.unk_00 = n;
        } else {
            temp.unk_00 = n;
        }
        temp.func_0C(p);
        new (&arg0->unk_124[arg0->unk_128]) Unk10(temp);
        ++arg0->unk_128;
        arg0->unk_12C.func_08((UnkNode *)func_089CAE8C(temp.unk_08));
        temp.func_04();
    } while (++i < 0x10U);
    return arg0;
}
}
