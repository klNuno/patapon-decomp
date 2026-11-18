#include "common.h"

extern "C" {

class T0885D36C_V {
public:
    u8 pad_00[0x8];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual s32 v14();
    virtual void v18();
    virtual s32 v1C();
};

typedef struct T0885D36C_N {
    struct T0885D36C_N *unk_00;
    struct T0885D36C_N *unk_04;
    T0885D36C_V **unk_08;

    s32 eq2(const T0885D36C_N *b) const {
        s32 r = 0;
        if (unk_08 == b->unk_08 && unk_04 == b->unk_04) {
            r = 1;
        }
        return r;
    }
    s32 eq(const T0885D36C_N *b) const {
        s32 r = 0;
        if (eq2(b) && unk_00 == b->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(const T0885D36C_N *b) const {
        return !(bool)eq(b);
    }
} T0885D36C_N;

typedef struct T0885D36C_I {
    T0885D36C_N *unk_00;

    T0885D36C_V *get() { return *unk_00->unk_08; }
} T0885D36C_I;

typedef struct T0885D36C_S {
    u8 pad_00[0x13BC];
    T0885D36C_N unk_13BC;

    T0885D36C_N *end() { return &unk_13BC; }
} T0885D36C_S;

s32 func_0885D36C(T0885D36C_S *arg0) {
    T0885D36C_I it;
    s32 best;
    s32 count;
    T0885D36C_V *obj;

    it.unk_00 = arg0->unk_13BC.unk_04;
    best = -1;
    count = 0;
    while (it.unk_00->ne(arg0->end())) {
        obj = it.get();
        obj->v1C();
        if (best < 0 || obj->v14() <= best) {
            best = -1;
            if (!obj->v1C()) {
                best = obj->v14();
            }
            count++;
        }
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
    return count;
}

}
