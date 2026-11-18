#include "common.h"

extern "C" {

class Obj_0898566C {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C(s32);
};

typedef struct {
    u8 pad_00[0x8];
    Obj_0898566C *unk_08;
    u8 pad_0C[4];
} Elem_0898566C;

typedef struct {
    Elem_0898566C *unk_00;
    u32 unk_04;
} Vec_0898566C;

typedef struct {
    u8 pad_00[0x114];
    Vec_0898566C unk_114;
} Self_0898566C;

void func_0898566C(Self_0898566C *arg0, s32 arg1) {
    Vec_0898566C *v;
    u32 i;
    s32 off;

    i = 0;
    if (arg0->unk_114.unk_04 != 0) {
        off = 0;
        v = &arg0->unk_114;
        do {
            ((Elem_0898566C *)((u8 *)v->unk_00 + off))->unk_08->unk_0C(arg1);
            i++;
            off += 0x10;
        } while (i < arg0->unk_114.unk_04);
    }
}

}
