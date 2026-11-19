#include "common.h"

extern "C" {

struct E {};
struct E_089316C4;

struct N {
    s32 unk_00;
    N *unk_04;
    s32 unk_08;
};

struct It {
    N *unk_00;
    int eq1(const It &o) const { int r = 0; if (unk_00->unk_08 == o.unk_00->unk_08 && unk_00->unk_04 == o.unk_00->unk_04) r = 1; return r; }
    int eq(const It &o) const { int r = 0; if (eq1(o) && unk_00->unk_00 == o.unk_00->unk_00) r = 1; return r; }
    bool ne(It o) const { return !(bool)eq(o); }
    void inc() { if (unk_00 != NULL) unk_00 = unk_00->unk_04; }
    It post() { It r = *this; inc(); return r; }
};

struct T {
    u8 pad_00[0x30];
    N unk_30;
    It begin(const E &) { It r; r.unk_00 = unk_30.unk_04; return r; }
    It end() { It r; r.unk_00 = &unk_30; return r; }
};

void func_088812A4(E_089316C4 *, s32);

void func_08882AB0(T *arg0) {
    It it;
    It e;
    It next;

    it = arg0->begin(E());
    e = arg0->end();
    while (it.ne(e)) {
        next = it;
        next.inc();
        func_088812A4(*(E_089316C4 **)&it.unk_00->unk_08, 0);
        it = next;
    }
}

}
