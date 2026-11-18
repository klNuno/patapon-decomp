#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x4];
} E_088F9130;

struct N_088F9130 {
    N_088F9130 *unk_00;
    u8 pad_04[0x40C];
    E_088F9130 *unk_410;
    s32 unk_414;
};

struct I_088F9130 {
    N_088F9130 *unk_00;
    int eq(const N_088F9130 *o) const { return unk_00 == o; }
    bool ne(const N_088F9130 *o) const { return !(bool)eq(o); }
};

struct T_088F9130 {
    u8 pad_00[0x10834];
    N_088F9130 unk_10834;
    N_088F9130 *end() { return &unk_10834; }
};

s32 func_088F9984(s32);

s32 func_088F9130(T_088F9130 *arg0, s32 arg1) {
    I_088F9130 it;
    E_088F9130 *e;
    E_088F9130 *end;

    it.unk_00 = arg0->unk_10834.unk_00;
    while (it.ne(arg0->end())) {
        e = it.unk_00->unk_410;
        end = e + it.unk_00->unk_414;
        for (; e != end; e++) {
            if (e->unk_08 != 0 && e->unk_08 != arg1 && func_088F9984(e->unk_08) != 0) {
                return 1;
            }
        }
        it.unk_00 = it.unk_00->unk_00;
    }
    return 0;
}

}
