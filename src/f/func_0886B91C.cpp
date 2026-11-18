#include "common.h"

extern "C" {

class S_0886B91C {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
};

class T_0886B91C {
public:
    u8 pad_00[0x1514];
    S_0886B91C unk_1514;
};

extern void *D_08AD1E28[];

void func_0886F32C(T_0886B91C *);
void func_0886891C(void *, s32);

void func_0886B91C(T_0886B91C *arg0) {
    void *g;

    func_0886F32C(arg0);
    arg0->unk_1514.v14();
    g = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    func_0886891C(g, 1);
    func_0886891C(g, 2);
    func_0886891C(g, 4);
    func_0886891C(g, 6);
    func_0886891C(g, 8);
    func_0886891C(g, 3);
    func_0886891C(g, 9);
    func_0886891C(g, 0xC);
    func_0886891C(g, 0xD);
}

}
