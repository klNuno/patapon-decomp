#include "common.h"

extern "C" {

class A_088CDA3C {
public:
    virtual s32 *v0(char *, s32);
    virtual void v1(char *, s32 *, s32);
};

struct C_088CDA3C {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct SP_088CDA3C {
    s32 unk_00;
    A_088CDA3C *unk_04;
    char *unk_08;
    C_088CDA3C unk_0C;
};

class B_088CDA3C {
public:
    virtual void v0();
    virtual s32 v1();
    virtual s32 v2();
};

class O1_088CDA3C {
public:
    u8 pad_00[0x4C];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual char *v4(s32);
    virtual void v5();
    virtual void v6();
    virtual void v7(char *, s32);
};

class O_088CDA3C : public O1_088CDA3C {
public:
    u8 pad_50[0x1440 - 0x50];
    s32 unk_1440;
    u8 pad_1444[0xC];
    B_088CDA3C unk_1450;
};

u32 func_08822BC4(char *);
void func_08822D5C(char *, char *, s32);
A_088CDA3C *func_08827AD4(void);
void func_0885D764(O_088CDA3C *, char *);
void func_088CCD44(SP_088CDA3C *, SP_088CDA3C *);
SP_088CDA3C *func_088CCE40(B_088CDA3C *);
void func_088CDC08(char *, s32);

char *func_088CDA3C(O_088CDA3C *arg0, char *arg1, s32 arg2, s32 arg3) {
    SP_088CDA3C sp;
    char *obj;
    SP_088CDA3C *q;
    C_088CDA3C *c;
    s32 n;

    n = arg0->unk_1450.v1();
    if (n >= arg0->unk_1450.v2()) {
        return NULL;
    }
    if (arg1 == NULL) {
        return NULL;
    }
    obj = arg0->v4(arg3);
    sp.unk_00 = arg0->unk_1440;
    sp.unk_04 = func_08827AD4();
    sp.unk_08 = obj;
    sp.unk_0C.unk_00 = sp.unk_04->v0(obj, sp.unk_00);
    *sp.unk_0C.unk_00 = 1;
    if ((q = func_088CCE40(&arg0->unk_1450)) != NULL) {
        func_088CCD44(q, &sp);
    }
    if (arg1 != NULL) {
        func_08822BC4(arg1);
        func_08822D5C(obj, arg1, 0x3F);
        obj[0x3F] = 0;
    }
    arg0->v7(obj, arg2);
    func_0885D764(arg0, obj);
    if (sp.unk_08 != NULL) {
        c = &sp.unk_0C;
        if (c->release() == 0) {
            sp.unk_04->v1(sp.unk_08, *(s32 **)c, sp.unk_00);
            func_088CDC08(sp.unk_08, sp.unk_00);
        }
    }
    return obj;
}

}
