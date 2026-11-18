#include "common.h"

extern "C" {

struct T1 {
    T1 *unk_00;
    T1 *unk_04;
    void *unk_08;
    s32 unk_0C;
};

struct T2 {
    T1 *unk_00;

    s32 unk_04(const T2 &arg0) const { return unk_00 == arg0.unk_00; }
    bool unk_08(const T2 &arg0) const { return !(bool)unk_04(arg0); }
};

struct T3 {
    u8 pad_00[0x3EBC];
    T1 *unk_3EBC;
    T1 *unk_3EC0;
    T1 *unk_3EC4;
    s32 unk_3EC8;
};

s32 func_0883B9C8(s32, f32);
void func_088793A0(void *);

void func_08878FE0(T3 *arg0, void *arg1, f32 arg2) {
    T2 p;
    T2 q;
    p.unk_00 = arg0->unk_3EBC;
    q.unk_00 = (T1 *)&arg0->unk_3EBC;
    if (p.unk_08(q)) {
        do {
            void **v = &p.unk_00->unk_08;
            if (p.unk_00->unk_0C >= 0) {
                if (*v == arg1) {
                    T1 *r;
                    T1 *s;
                    T1 *t;
                    T1 *u;
                    func_0883B9C8(*(volatile s32 *)&p.unk_00->unk_0C, arg2);
                    r = p.unk_00;
                    p.unk_00 = p.unk_00->unk_00;
                    --arg0->unk_3EC8;
                    func_088793A0(&r->unk_08);
                    u = arg0->unk_3EC4;
                    s = r->unk_00;
                    r->unk_04->unk_00 = s;
                    t = s->unk_04;
                    s->unk_04 = r->unk_04;
                    r->unk_04 = u->unk_04;
                    (*(T1 *volatile *)&u->unk_04)->unk_00 = r;
                    u->unk_04 = t;
                    t->unk_00 = u;
                } else {
                    p.unk_00 = p.unk_00->unk_00;
                }
            } else {
                p.unk_00 = p.unk_00->unk_00;
            }
        } while (p.unk_08(q));
    }
}

}
