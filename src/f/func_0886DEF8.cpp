#include "common.h"

extern "C" {

typedef struct {
    void *unk_00;
} It_08878520;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} V_0886DEF8;

typedef struct {
    s32 unk_00;
    V_0886DEF8 unk_04;
} Pair_0886DEF8;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} P_0886DEF8;

class Obj_0886DEF8 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18(s32, V_0886DEF8 *);
    u8 unk_04[0x4];
};

Pair_0886DEF8 *func_0886E1B8(It_08878520 *);
s32 func_0886E1C4(It_08878520 *, It_08878520 *);
void func_0886E1DC(It_08878520 *, void *);
void func_0886E1E8(It_08878520 *, void *, s32 *);
void func_0886E144(void *, void *);
V_0886DEF8 *func_0886E134(V_0886DEF8 *);
P_0886DEF8 *func_0886E114(P_0886DEF8 *, s32 *, V_0886DEF8 *);
void func_0886E024(It_08878520 *, void *, P_0886DEF8 *);

void func_0886DEF8(Obj_0886DEF8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 key;
    It_08878520 it;
    It_08878520 end;
    It_08878520 it2;
    It_08878520 end2;
    It_08878520 ins;
    P_0886DEF8 pair;
    V_0886DEF8 val;
    Pair_0886DEF8 *p;
    V_0886DEF8 *r;

    key = arg1;
    func_0886E1E8(&it, arg0->unk_04, &key);
    func_0886E1DC(&end, arg0->unk_04);
    if (func_0886E1C4(&end, &it) != 0) {
        p = func_0886E1B8(&it);
        arg0->unk_18(p->unk_00, &func_0886E1B8(&it)->unk_04);
        func_0886E144(arg0->unk_04, it.unk_00);
    }
    func_0886E1E8(&it2, arg0->unk_04, &arg1);
    func_0886E1DC(&end2, arg0->unk_04);
    if (func_0886E1C4(&it2, &end2) != 0) {
        r = &func_0886E1B8(&it2)->unk_04;
    } else {
        func_0886E024(&ins, arg0->unk_04, func_0886E114(&pair, &arg1, func_0886E134(&val)));
        r = &func_0886E1B8(&ins)->unk_04;
    }
    r->unk_00 = arg2;
    r->unk_04 = arg3;
}

}
