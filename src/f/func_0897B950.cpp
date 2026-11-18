#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} N_0897B950;

struct It_0897B950 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    N_0897B950 *unk_0C;
    char *unk_10;
    int eq(const It_0897B950 &o) const {
        int r = 0;
        if (unk_04 == o.unk_04 && unk_08 == o.unk_08) r = 1;
        return r;
    }
    bool ne(const It_0897B950 &o) const { return !(bool)eq(o); }
    int valid() const {
        int r = 0;
        if (unk_0C != NULL && unk_0C->unk_0C != 0) r = 1;
        return r;
    }
};

class C_0897B950 {
public:
    virtual void v08();
    virtual void v0C(s32, s32, s32);
};

void func_0888B0F8(It_0897B950 *, void **);
void func_0888B104(It_0897B950 *, void **);
void func_0888B2D8(It_0897B950 *, s32);
s32 func_0888B844(It_0897B950 *);
s32 func_0888B87C(It_0897B950 *);
s32 func_0891C5E0(char *);

void func_0897B950(C_0897B950 *arg0, void *arg1) {
    void *c = arg1;
    It_0897B950 it;
    It_0897B950 end;
    s32 k;
    s32 t;

    func_0888B0F8(&it, &c);
    while (func_0888B104(&end, &c), it.ne(end)) {
        if (it.valid()) {
            k = func_0891C5E0(it.unk_10 != NULL ? it.unk_10 + 7 : NULL);
            if (k != 0) {
                t = func_0888B87C(&it);
                arg0->v0C(k, func_0888B844(&it), t);
            }
        }
        func_0888B2D8(&it, 1);
    }
}

}
