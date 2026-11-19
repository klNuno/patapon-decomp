#include "common.h"

extern "C" {

struct Unk {
    Unk *unk_00;
    Unk *unk_04;
    void *unk_08;
};

struct Unk1 {
    Unk *unk_00;
};

struct Unk2 {
    u8 pad_00[0xB820];
    Unk *unk_B820;
    u8 pad_B824[4];
    Unk *unk_B828;
    s32 unk_B82C;
};

void func_0881F5C0(void *, s32, s32);
void func_0893E198(void *);

inline Unk1 unk_00(Unk2 *arg0)
{
    Unk1 it;
    it.unk_00 = arg0->unk_B820;
    return it;
}

inline void unk_04(Unk2 *arg0, Unk1 arg1)
{
    Unk *q;
    Unk *p;
    Unk *r;
    Unk *s;

    arg0->unk_B82C--;
    func_0893E198(&arg1.unk_00->unk_08);
    p = arg0->unk_B828;
    q = arg1.unk_00;
    r = q->unk_00;
    q->unk_04->unk_00 = r;
    s = r->unk_04;
    r->unk_04 = q->unk_04;
    q->unk_04 = p->unk_04;
    p->unk_04->unk_00 = q;
    p->unk_04 = s;
    s->unk_00 = p;
}

void *func_0893DFA0(Unk2 *arg0)
{
    const Unk1 &it = unk_00(arg0);
    void *temp = arg0->unk_B820->unk_08;

    unk_04(arg0, it);
    func_0881F5C0(temp, 0, 0x50);
    return temp;
}

}
