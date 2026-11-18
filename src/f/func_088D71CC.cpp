#include "common.h"

extern "C" {

typedef struct N_088D71CC {
    struct N_088D71CC *unk_00;
    struct N_088D71CC *unk_04;
    u8 unk_08[1];
} N_088D71CC;

typedef struct {
    N_088D71CC *unk_00;

    int eq(N_088D71CC *o) { return unk_00 == o; }
    bool ne(N_088D71CC *o) { return !(bool)eq(o); }
} I_088D71CC;

typedef struct {
    u8 pad_00[0x2C4];
    struct {
        N_088D71CC *unk_00;
        N_088D71CC *unk_04;
    } unk_2C4;
    N_088D71CC *unk_2CC;
    s32 unk_2D0;
} T_088D71CC;

s32 func_0889B794(void *, s32);
s32 func_0889C49C(void *);
void func_088D7330(void *);

void func_088D71CC(T_088D71CC *arg0, s32 arg1) {
    I_088D71CC it;
    N_088D71CC *n;
    N_088D71CC *f;
    N_088D71CC *next;
    N_088D71CC *last;
    N_088D71CC *end;
    u8 *d;

    it.unk_00 = arg0->unk_2C4.unk_00;
    end = (N_088D71CC *)&arg0->unk_2C4;
    while (it.ne(end)) {
        d = it.unk_00->unk_08;
        func_0889B794(d, arg1);
        if (func_0889C49C(d)) {
            n = it.unk_00;
            it.unk_00 = it.unk_00->unk_00;
            arg0->unk_2D0--;
            func_088D7330(n->unk_08);
            f = arg0->unk_2CC;
            next = n->unk_00;
            n->unk_04->unk_00 = next;
            last = next->unk_04;
            next->unk_04 = n->unk_04;
            n->unk_04 = f->unk_04;
            f->unk_04->unk_00 = n;
            f->unk_04 = last;
            last->unk_00 = f;
        } else {
            it.unk_00 = it.unk_00->unk_00;
        }
    }
}

}
