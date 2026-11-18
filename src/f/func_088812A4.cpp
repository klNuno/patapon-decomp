#include "common.h"

extern "C" {

typedef struct N_088812A4 N_088812A4;

typedef struct L_088812A4 {
    N_088812A4 *unk_00;
    N_088812A4 *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
    u8 pad_24[4];
} L_088812A4;

typedef struct O_088812A4 {
    u8 pad_00[0x30];
    L_088812A4 unk_30;
    L_088812A4 unk_58;
} O_088812A4;

struct N_088812A4 {
    void *unk_00;
    void *unk_04;
    u8 pad_08[4];
    L_088812A4 *unk_0C;
    u8 pad_10[0x60];
    O_088812A4 *unk_70;
    s32 unk_74;
};

s32 func_08880338(void *);

inline s32 ins_088812A4(L_088812A4 *to, N_088812A4 *arg0) {
    s32 ok;

    if ((void *)to->unk_00 != (void *)to) {
        arg0->unk_00 = to->unk_00;
        to->unk_00->unk_04 = arg0;
        to->unk_00 = arg0;
        ok = 1;
    } else {
        to->unk_00 = arg0;
        to->unk_04 = arg0;
        arg0->unk_00 = to;
        ok = 1;
    }
    arg0->unk_04 = to;
    return ok;
}

void func_088812A4(N_088812A4 *arg0, s32 arg1) {
    s32 v;
    O_088812A4 *o;
    L_088812A4 *to;
    L_088812A4 *from;

    v = arg0->unk_74;
    if ((arg1 & 0xFF) != (v != 0)) {
        o = arg0->unk_70;
        if (o != NULL) {
            to = &o->unk_30;
            from = &o->unk_58;
            if (arg0->unk_04 != NULL) {
                if (v != 0) {
                    L_088812A4 *t = to;
                    to = from;
                    from = t;
                }
                if ((void *)from != (void *)arg0 && func_08880338(arg0) != 0) {
                    from->unk_20--;
                }
            }
            if ((void *)to != (void *)arg0) {
                if (ins_088812A4(to, arg0)) {
                    arg0->unk_0C = to;
                    to->unk_20++;
                }
            }
        }
        arg0->unk_74 = (u8)arg1;
    }
}

}
