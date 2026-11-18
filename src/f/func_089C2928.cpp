#include "common.h"

extern "C" {

class Unk_089C2928_Base {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
};

class Unk_089C2928_Elem : public Unk_089C2928_Base {
public:
    u8 pad_84[0xC];
};

typedef struct Obj_089C2928 {
    u8 pad_00[0x170];
    Unk_089C2928_Elem unk_170[2];
    u8 pad_290[0x178];
    u8 unk_408;
    u8 pad_409[0x13];
    u8 unk_41C;
} Obj_089C2928;

void func_089856F4(Obj_089C2928 *);
void func_089C29B0(Obj_089C2928 *);
void func_089C2A08(Obj_089C2928 *);

void func_089C2928(Obj_089C2928 *arg0) {
    u32 i;

    for (i = 0; i < 2; i++) {
        arg0->unk_170[i].unk_10();
    }
    func_089856F4(arg0);
    if (arg0->unk_41C != 0) {
        func_089C2A08(arg0);
    }
    if (arg0->unk_408 != 0) {
        func_089C29B0(arg0);
    }
}

}
