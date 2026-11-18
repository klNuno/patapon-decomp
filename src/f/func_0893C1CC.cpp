#include "common.h"

extern "C" {

class C_0893C1CC {
public:
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10();
    virtual void func_14();
};

typedef struct {
    u8 pad_00[0x24];
    C_0893C1CC *unk_24;
} O_0893C1CC;

struct N_0893C1CC {
    s32 unk_00;
    N_0893C1CC *unk_04;
    O_0893C1CC *unk_08;

    int eq2(N_0893C1CC *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_0893C1CC *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_0893C1CC *o) { return !(bool)eq(o); }
};

typedef struct {
    u8 pad_00[0xA38];
    N_0893C1CC unk_A38;
    u8 pad_A44[0x60];
    u8 unk_AA4;
} S_0893C1CC;

void func_0893C1CC(S_0893C1CC *arg0) {
    struct { N_0893C1CC *unk_00; } it;
    N_0893C1CC *end;

    if (arg0->unk_AA4 != 0) {
        it.unk_00 = arg0->unk_A38.unk_04;
        end = &arg0->unk_A38;
        while (it.unk_00->ne(end)) {
            (*(O_0893C1CC **)&it.unk_00->unk_08)->unk_24->func_14();
            if (it.unk_00 != NULL) {
                it.unk_00 = it.unk_00->unk_04;
            }
        }
    }
}

}
