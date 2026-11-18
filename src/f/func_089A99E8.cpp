#include "common.h"

extern "C" {

void func_0880416C(void *);
void func_0885C534(void *, s32);
void func_0886F084(void *, s32);
void func_088857D0(void *, s32);
void func_0893F388(void *, s32);
void func_0893F444(void *);
extern u8 D_08A44F44[];
extern u8 D_08A48750[];

class M_089A99E8 {
public:
    u8 pad_00[0x48];
    s32 unk_48;
    void fini() { unk_48 = 0; }
};

class Base_089A99E8 {
public:
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0x60 - 0x54];
    M_089A99E8 unk_60;
    void fini() {
        unk_50 = D_08A44F44;
        func_0885C534((u8 *)this + 0xB0, -1);
        if (&unk_60 != NULL) {
            unk_60.fini();
        }
        func_0886F084(this, 0);
    }
};

class M1514_089A99E8 {
public:
    u8 pad_00[0xC];
    void a() { func_0893F444(this); }
    void b() { func_0893F388(this, -1); }
};

class Obj_089A99E8 : public Base_089A99E8 {
public:
    u8 pad_AC[0x1514 - 0xAC];
    M1514_089A99E8 unk_1514;
};

Obj_089A99E8 *func_089A99E8(Obj_089A99E8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_50 = D_08A48750;
        arg0->unk_1514.a();
        func_088857D0((u8 *)arg0 + 0x1520, -1);
        arg0->unk_1514.b();
        if (arg0 != NULL) {
            arg0->fini();
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
