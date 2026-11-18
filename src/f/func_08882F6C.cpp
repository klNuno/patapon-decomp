#include "common.h"

extern "C" {

struct N_08882F6C;

struct H_08882F6C {
    H_08882F6C *unk_00;
    H_08882F6C *unk_04;
    s32 unk_08;
    void *unk_0C;
    u8 pad_10[0x10];
};

s32 func_08880338(void *);

struct L_08882F6C {
    H_08882F6C unk_00;
    s32 unk_20;
    u8 pad_24[4];
    s32 link(H_08882F6C *n) {
        s32 ret;
        if (unk_00.unk_00 != &unk_00) {
            n->unk_00 = unk_00.unk_00;
            unk_00.unk_00->unk_04 = n;
            unk_00.unk_00 = n;
            ret = 1;
        } else {
            unk_00.unk_00 = n;
            unk_00.unk_04 = n;
            n->unk_00 = &unk_00;
            ret = 1;
        }
        n->unk_04 = &unk_00;
        return ret;
    }
    void remove(H_08882F6C *n) {
        if (&unk_00 != n) {
            if (func_08880338(n)) {
                unk_20--;
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x20];
    L_08882F6C unk_20;
    L_08882F6C unk_48;
} O_08882F6C;

struct N_08882F6C : H_08882F6C {
    u8 pad_20[0x1C];
    O_08882F6C *unk_3C;
    u8 unk_40;
};

void func_08882F6C(N_08882F6C *arg0, u8 arg1) {
    s32 old;
    O_08882F6C *o;
    L_08882F6C *to;
    L_08882F6C *from;

    old = arg0->unk_40;
    arg0->unk_40 = arg1;
    o = arg0->unk_3C;
    if (o != NULL && (u8)old != (u8)arg1) {
        to = &o->unk_20;
        from = &o->unk_48;
        if (arg0->unk_04 != NULL) {
            if (old != 0) {
                to = &o->unk_48;
                from = &o->unk_20;
            }
            from->remove(arg0);
        }
        if (&to->unk_00 != arg0) {
            if (to->link(arg0)) {
                arg0->unk_0C = to;
                to->unk_20++;
            }
        }
    }
}

}
