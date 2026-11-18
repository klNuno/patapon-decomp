#include "common.h"

extern "C" {

class V_088954EC {
public:
    virtual void v0();
    virtual s32 v1();
};

typedef struct {
    u8 pad_00[0x8];
    void **unk_08;
} L_088954EC;

typedef struct {
    u8 pad_00[0x610];
    L_088954EC *unk_610;
} W_088954EC;

typedef struct N_088954EC {
    s32 unk_00;
    struct N_088954EC *unk_04;
    W_088954EC **unk_08;

    int eq2(struct N_088954EC *o) {
        int r = 0;
        if (*(s32 *)&unk_08 == *(s32 *)&o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(struct N_088954EC *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(struct N_088954EC *o) {
        return !(bool)eq(o);
    }
} N_088954EC;

typedef struct {
    u8 pad_00[0x3A0];
    V_088954EC unk_3A0;
    u8 pad_3A4[0xCBC - 0x3A4];
    N_088954EC unk_CBC;
    u8 pad_CC8[0x92EC - 0xCC8];
    u8 unk_92EC;

    N_088954EC *end() { return &unk_CBC; }
} T_088954EC;

void *func_08897A1C(void *, void *);

void *func_088954EC(T_088954EC *arg0) {
    struct { N_088954EC *unk_00; } it;
    void *ret;
    void *x;

    if (arg0->unk_92EC == 0) {
        return NULL;
    }
    if (arg0->unk_3A0.v1() > 0) {
    ret = NULL;
    it.unk_00 = arg0->unk_CBC.unk_04;
    for (; it.unk_00->ne(arg0->end());) {
        x = *(*it.unk_00->unk_08)->unk_610->unk_08;
        if (ret == NULL) {
            ret = x;
        } else if (x != NULL) {
            ret = func_08897A1C(ret, x);
        }
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
    return ret;
    }
    return NULL;
}

}
