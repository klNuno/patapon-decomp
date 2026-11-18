#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

class A_089825EC {
public:
    virtual void v0();
    virtual void v1(s32, s32 *, s32);
};

void func_0886A45C(s32, s32);

struct C_089825EC {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
};

struct P_089825EC {
    s32 unk_00;
    C_089825EC unk_04;
};

struct SP_089825EC {
    s32 unk_00;
    A_089825EC *unk_04;
    P_089825EC unk_08;
    SP_089825EC() {
        unk_00 = 0;
        unk_04 = NULL;
        unk_08.unk_00 = 0;
        unk_08.unk_04.unk_00 = NULL;
    }
    SP_089825EC(const SP_089825EC &o) {
        unk_00 = o.unk_00;
        unk_04 = o.unk_04;
        unk_08.unk_00 = o.unk_08.unk_00;
        unk_08.unk_04.unk_00 = o.unk_08.unk_04.unk_00;
        if (unk_08.unk_00 != 0) {
            ++*unk_08.unk_04.unk_00;
        }
    }
    void fin() {
        P_089825EC *s;

        s = &unk_08;
        if (s->unk_00 != 0) {
            --*unk_08.unk_04.unk_00;
            if (s->unk_04.get() == 0) {
                unk_04->v1(s->unk_00, s->unk_04.unk_00, unk_00);
                func_0886A45C(s->unk_00, unk_00);
            }
        }
    }
};

struct V_089825EC {
    SP_089825EC *unk_00;
    s32 unk_04;
    void push_back(const SP_089825EC &x) {
        new (&unk_00[unk_04]) SP_089825EC(x);
        unk_04++;
    }
};

typedef struct {
    u8 pad_00[0x3E48];
    V_089825EC unk_3E48;
} T_089825EC;

void func_089825EC(T_089825EC *arg0) {
    s32 i;

    for (i = 0; i < 9; i++) {
        SP_089825EC tmp;
        arg0->unk_3E48.push_back(tmp);
        tmp.fin();
    }
}

}
