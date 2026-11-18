#include "common.h"

extern "C" {

typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
    u8 unk_08[0x10];
} N;

typedef struct {
    N *unk_00;
    N *unk_04;
    N *unk_08;
    s32 unk_0C;
} S;

typedef union {
    N *unk_00;
    f32 unk_00_f;
} I;

void func_08947F30(void *);

static inline s32 func_08946E2C_eq(N *arg0, N *arg1) {
    return arg0 == arg1;
}

static inline bool func_08946E2C_ne(N *arg0, N *arg1) {
    return !(bool)func_08946E2C_eq(arg0, arg1);
}

struct R {
    I unk_00;
    R(const I &i) : unk_00(i) {}
    R(const R &i) : unk_00(i.unk_00) {}
};

R func_08946E2C(S *arg1, I arg2, I arg3) {
    I p;
    I q;
    I r;
    s32 i;

    if (arg2.unk_00 == arg3.unk_00) {
        R temp(arg3);
        return temp;
    } else {
        p.unk_00 = arg1->unk_00;
        i = 0;
        if (func_08946E2C_ne(p.unk_00, (N *)arg1)) {
            do {
                p.unk_00 = p.unk_00->unk_00;
                ++i;
            } while (func_08946E2C_ne(p.unk_00, (N *)arg1));
        }
        arg1->unk_0C -= i;
        p.unk_00 = arg2.unk_00;
        if (func_08946E2C_ne(arg2.unk_00, arg3.unk_00)) {
            do {
                func_08947F30(p.unk_00->unk_08);
                p.unk_00 = p.unk_00->unk_00;
            } while (func_08946E2C_ne(p.unk_00, arg3.unk_00));
        }
        q.unk_00 = arg1->unk_08;
        arg2.unk_00->unk_04->unk_00 = arg3.unk_00;
        r.unk_00 = arg3.unk_00->unk_04;
        arg3.unk_00->unk_04 = arg2.unk_00->unk_04;
        arg2.unk_00->unk_04 = q.unk_00->unk_04;
        q.unk_00->unk_04->unk_00 = arg2.unk_00;
        q.unk_00->unk_04 = r.unk_00;
        r.unk_00->unk_00 = q.unk_00;
        R temp(arg3);
        return temp;
    }
}

}
