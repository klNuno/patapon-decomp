#include "common.h"

extern "C" {

class Base_088EC31C {
public:
    u8 pad_00[0x100];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(s32);
};

class Obj_088EC31C : public Base_088EC31C {
public:
    u8 pad_104[0x1A50 - 0x104];
    u8 unk_1A50;
};

typedef struct {
    u8 pad_00[0x36B08];
    Obj_088EC31C *unk_36B08;
} Mgr_088EC31C;

typedef struct {
    u8 pad_00[0x14];
    Mgr_088EC31C *unk_14;
} Self_088EC31C;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_088EC31C(Self_088EC31C *arg0, void *arg1) {
    arg0->unk_14->unk_36B08->unk_1A50 = *func_0885356C(arg1, 0, 1, 4) != 0;
    arg0->unk_14->unk_36B08->unk_10(0);
    func_08852F00(arg1, 0);
}

}
