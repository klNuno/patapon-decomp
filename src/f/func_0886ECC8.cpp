#include "common.h"

extern "C" {

typedef struct V {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
} V;

typedef struct P {
    s32 unk_00;
    V unk_04;
} P;

typedef struct R {
    s32 unk_00;
    s32 unk_04;
} R;

typedef struct O {
    u8 pad_00[0x4B8];
    s32 *unk_4B8;
    s32 unk_4BC;
} O;

void func_0886EF10(s32 *, O *, s32);
void func_0886EF04(s32 *, O *);
s32 func_0886EEEC(s32 *, s32 *);
void func_0886EDC8(s32 *, O *, P *);
void func_0886EED0(R *, s32, s32);

void func_0886ECC8(O *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    V v;
    R r;
    P p;
    s32 it;
    s32 end;
    s32 ins;
    u8 *b;
    s32 n;
    s32 *e;

    b = (u8 *)&v;
    n = 0x14;
    if (b != NULL) {
        do {
            *b++ = 0;
        } while (--n);
    }
    v.unk_00 = arg1;
    v.unk_04 = arg2;
    v.unk_08 = arg3;
    v.unk_0C = arg4;
    v.unk_10 = arg5;
    p.unk_00 = arg1;
    p.unk_04 = v;
    func_0886EF10(&it, arg0, arg1);
    func_0886EF04(&end, arg0);
    if (func_0886EEEC(&it, &end) != 0) {
        func_0886EED0(&r, it, 0);
    } else {
        func_0886EDC8(&ins, arg0, &p);
        func_0886EED0(&r, ins, 1);
    }
    e = arg0->unk_4B8 + arg0->unk_4BC;
    if (e != NULL) {
        *e = arg1;
    }
    arg0->unk_4BC++;
}

}
