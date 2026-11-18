#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) {
    return p;
}

class O_0898FDD4 {
public:
    u8 pad_00[0xE4];
    virtual void f0(s32);
};

struct N_0898FDD4 {
    N_0898FDD4 *unk_00;
    N_0898FDD4 *unk_04;
    O_0898FDD4 *unk_08;
};

typedef struct {
    u8 pad_00[0x348];
    N_0898FDD4 *unk_348;
    N_0898FDD4 *unk_34C;
    N_0898FDD4 *unk_350;
    s32 unk_354;
    u8 pad_358[0x3D30];
    O_0898FDD4 **unk_4088;
    s32 unk_408C;
} S_0898FDD4;

void func_0898E444(O_0898FDD4 *);
void func_0898FF44(O_0898FDD4 **);

void func_0898FDD4(S_0898FDD4 *arg0, s32 arg1) {
    N_0898FDD4 *n;
    O_0898FDD4 *o;
    N_0898FDD4 *fr;
    N_0898FDD4 *nx;
    N_0898FDD4 *p;
    s32 i;

    n = arg0->unk_348;
    for (i = 0; i < arg1; i++) {
        n = n->unk_00;
    }
    O_0898FDD4 *&r = n->unk_08;
    o = r;
    func_0898E444(o);
    arg0->unk_354--;
    func_0898FF44(&r);
    fr = arg0->unk_350;
    nx = n->unk_00;
    n->unk_04->unk_00 = nx;
    p = nx->unk_04;
    nx->unk_04 = n->unk_04;
    n->unk_04 = fr->unk_04;
    fr->unk_04->unk_00 = n;
    fr->unk_04 = p;
    p->unk_00 = fr;
    if (o != NULL) {
        o->f0(-1);
        new (&arg0->unk_4088[arg0->unk_408C]) O_0898FDD4 *(o);
        arg0->unk_408C++;
    }
}

}
