#include "common.h"

extern "C" {

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} P_0895276C;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 *unk_08;
} C_0895276C;

typedef struct {
    s32 *unk_00;
    C_0895276C *unk_04;
} It_0895276C;

void func_0895295C(P_0895276C *, s32);
void func_089529D8(s32 *, s32 *, s32 *, s32, s32, It_0895276C *, It_0895276C *);
void func_08804150(s32 *);

inline const s32 &min_0895276C(const s32 &a, const s32 &b) { return (b < a) ? b : a; }

void func_0895276C(s32 *arg0, s32 *arg1, s32 *arg2) {
    s32 len1;
    s32 len2;
    C_0895276C c;
    It_0895276C b;
    It_0895276C e;
    P_0895276C p;

    len1 = arg1 - arg0;
    len2 = arg2 - arg1;
    func_0895295C(&p, min_0895276C(len1, len2));
    c.unk_00 = p.unk_04;
    c.unk_08 = p.unk_00;
    b.unk_00 = p.unk_00;
    e.unk_00 = p.unk_00 + p.unk_04;
    e.unk_04 = &c;
    b.unk_04 = &c;
    c.unk_04 = 0;
    func_089529D8(arg0, arg1, arg2, len1, len2, &b, &e);
    func_08804150(c.unk_08);
}

}
