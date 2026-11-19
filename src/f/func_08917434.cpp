#include "common.h"

extern "C" {
class A {
public:
    u8 pad_00[0x50];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual s32 unk_24();
};

class B {
public:
    u8 pad_00[0x54];
    f32 unk_54;
    u8 pad_58[4];
    f32 unk_5C;
    u8 pad_60[0x20];
    virtual void unk_08();
    virtual void unk_0C(u32);
};

struct T {
    A *unk_00;
    u32 unk_04;
    u8 pad_08[0x98];
    B unk_A0;
    u8 pad_124[0xC];
    B unk_130;
    u8 pad_1B4[0x9C];
    B unk_250;
    u8 pad_2D4[0x60];
    u8 unk_334[0x24100];
    u8 unk_24434;
    u8 unk_24435;
    u8 unk_24436;
    u8 pad_24437[0x10A3D];
    u8 unk_34E74;
};

struct S_0891831C;
struct Obj_089183C0;

void func_08917E20(char *, s32, s32);
void func_08915370(void *, s32);
s32 func_089154AC(void *);
void func_08918250(char *);
void func_08918294(char *, s32);
void func_0891831C(S_0891831C *, s32);
void func_089183C0(Obj_089183C0 *);
void func_08917D48(char *);
void func_08914EB4(u8 *, u32);

s32 func_08917434(T *arg0, s32 arg1) {
    switch (arg0->unk_04) {
    case 0:
        func_08917E20((char *)arg0, arg1, 1);
        break;
    case 1:
        if (arg0->unk_34E74 != 0 && func_089154AC(arg0->unk_334) == 0) {
            func_08915370(arg0->unk_334, 2);
            arg0->unk_34E74 = 0;
        }
        break;
    case 2:
        return 1;
    case 3:
        func_08918250((char *)arg0);
        break;
    case 4:
        func_08918294((char *)arg0, arg1);
        break;
    case 5:
        func_0891831C((S_0891831C *)arg0, arg1);
        break;
    case 8:
        func_089183C0((Obj_089183C0 *)arg0);
        break;
    case 6:
        return 2;
    case 7:
        return 0;
    case 9:
        func_08917E20((char *)arg0, arg1, 0);
        return arg0->unk_00->unk_24() ? 2 : 0x10000;
    case 10:
        func_08917E20((char *)arg0, arg1, 0);
        return arg0->unk_00->unk_24() ? 12 : 0x10000;
    case 11:
        func_08917D48((char *)arg0);
        func_08917E20((char *)arg0, arg1, 0);
        break;
    }
    func_08914EB4(arg0->unk_334, arg1);
    if (arg0->unk_24434 == 1) {
        arg0->unk_A0.unk_0C(arg1);
        void *temp = (void *)1;
        if (!((f32)(s32)arg0->unk_A0.unk_54 < arg0->unk_A0.unk_5C)) {
            temp = NULL;
        }
        arg0->unk_24434 = (s32)temp;
    }
    if (arg0->unk_24435 == 1) {
        arg0->unk_130.unk_0C(arg1);
        void *temp = (void *)1;
        if (!((f32)(s32)arg0->unk_130.unk_54 < arg0->unk_130.unk_5C)) {
            temp = NULL;
        }
        arg0->unk_24435 = (s32)temp;
    }
    if (arg0->unk_24436 == 1) {
        arg0->unk_250.unk_0C(arg1);
        void *temp = (void *)1;
        if (!((f32)(s32)arg0->unk_250.unk_54 < arg0->unk_250.unk_5C)) {
            temp = NULL;
        }
        arg0->unk_24436 = (s32)temp;
    }
    return 0x10000;
}
}
