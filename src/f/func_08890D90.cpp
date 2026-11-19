#include "common.h"

extern "C" {

typedef struct T08890D90_T {
    u8 pad_00[0x3A8];
    s32 unk_3A8;
} T08890D90_T;

struct T08890D90_N {
    s32 unk_00;
    T08890D90_N *unk_04;
    T08890D90_T **unk_08;
    int eq2(const T08890D90_N &o) const {
        int r = 0;
        if (unk_08 == o.unk_08 && unk_04 == o.unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(const T08890D90_N &o) const {
        int r = 0;
        if (eq2(o) && unk_00 == o.unk_00) {
            r = 1;
        }
        return r;
    }
    T08890D90_T *get() const { return **(T08890D90_T ***)&unk_08; }
    bool ne(const T08890D90_N &o) const { return !(bool)eq(o); }
};

typedef struct T08890D90_S {
    u8 pad_00[0x60C];
    T08890D90_N unk_60C;
    u8 pad_618[0x78];
    u8 unk_690;
} T08890D90_S;
typedef struct T08890D90_I {
    T08890D90_N *unk_00;
} T08890D90_I;

T08890D90_T *func_08890D90(T08890D90_S *arg0, s32 arg1) {
    T08890D90_I it;
    T08890D90_N *e;
    T08890D90_T *t;

    if (arg0->unk_690 == 0) {
        return NULL;
    }
    for (it.unk_00 = arg0->unk_60C.unk_04; it.unk_00->ne(*(e = &arg0->unk_60C)); ) {
        t = it.unk_00->get();
        if (arg1 == t->unk_3A8) {
            return t;
        }
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
    return NULL;
}

}
