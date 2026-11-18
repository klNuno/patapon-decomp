#include "common.h"

extern "C" {

typedef struct {
    void *unk_00;
} It_08878520;

typedef struct {
    s32 unk_00;
    u8 unk_04[0x4];
} Pair_0897B780;

class Mgr_0897B780 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
};

class Obj_0897B780 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18(s32, u8 *);
    u8 unk_04[0xA28];
    Mgr_0897B780 *unk_A2C;
    u8 unk_A30;
};

Pair_0897B780 *func_0886E1B8(It_08878520 *);
s32 func_0886E1C4(It_08878520 *, It_08878520 *);
void func_0886E1DC(It_08878520 *, void *);
void func_0886E1E8(It_08878520 *, void *, s32 *);
void func_0886E144(void *, void *);

void func_0897B780(Obj_0897B780 *arg0, s32 arg1) {
    s32 key;
    It_08878520 it;
    It_08878520 end;
    Pair_0897B780 *p;

    arg0->unk_A2C->unk_10();
    key = arg1;
    func_0886E1E8(&it, arg0->unk_04, &key);
    func_0886E1DC(&end, arg0->unk_04);
    if (func_0886E1C4(&end, &it) != 0) {
        p = func_0886E1B8(&it);
        arg0->unk_18(p->unk_00, func_0886E1B8(&it)->unk_04);
        func_0886E144(arg0->unk_04, it.unk_00);
    }
    arg0->unk_A30 = 0;
}

}
