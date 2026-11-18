#include "common.h"

struct T1 {
    f32 unk_00;
    f32 unk_04;
};

class T2 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C(f32, T1 *, T1 *);
    u8 pad_04[0x6BC];
    f32 unk_6C0;
    u8 pad_6C4[4];
    f32 unk_6C8;
};

struct T3 {
    T2 *unk_00;
    f32 unk_04;
};

struct T4 {
    T3 *unk_00;
    u32 unk_04;
};

struct T5 {
    u8 pad_00[0x728];
    T4 unk_728;
};

extern "C" {

void func_0891AA04(T5 *, T1 *);
f32 fabsf(f32);

void func_0894558C(T5 *arg0, T1 *arg1) {
    T1 temp;
    T1 temp2;
    u32 i;
    u32 off;
    T4 *v;
    T3 *p;
    T2 *q;
    func_0891AA04(arg0, arg1);
    temp.unk_00 = arg1->unk_00;
    temp.unk_04 = arg1->unk_04;
    i = 0;
    if (arg0->unk_728.unk_04 != 0) {
        off = 0;
        v = &arg0->unk_728;
        do {
            p = (T3 *)((u8 *)v->unk_00 + off);
            temp.unk_00 += p->unk_04;
            temp2.unk_00 = 1.0f;
            temp2.unk_04 = 1.0f;
            p->unk_00->unk_1C(1.0f, &temp, &temp2);
            q = p->unk_00;
            ++i;
            temp.unk_00 += fabsf(q->unk_6C0 - q->unk_6C8);
            off += 8;
        } while (i < arg0->unk_728.unk_04);
    }
}

}
