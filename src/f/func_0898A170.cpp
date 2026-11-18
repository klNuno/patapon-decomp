#include "common.h"

extern "C" {

class A_0898A170 {
public:
    u8 pad_00[0x15C];
    virtual void vf_08();
    virtual u8 vf_0C();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18();
    virtual void vf_1C(s32);
};

class B_0898A170 {
public:
    u8 pad_00[0x8100];
    virtual void vf_08();
    virtual void vf_0C();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18();
    virtual void vf_1C(s32);
};

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} C_0898A170;

typedef struct {
    C_0898A170 *unk_00;
    u8 pad_04[0x1C];
    A_0898A170 *unk_20;
} Obj_0898A170;

B_0898A170 *func_088C6484(u8 *);

void func_0898A170(Obj_0898A170 *arg0, s32 arg1) {
    u8 ok;

    if (arg0->unk_20 == NULL) {
        ok = 0;
    } else {
        ok = arg0->unk_20->vf_0C();
    }
    if (ok) {
        func_088C6484(arg0->unk_00->unk_506F0)->vf_1C(arg1);
        arg0->unk_20->vf_1C(arg1);
    }
}

}
