#include "common.h"

extern "C" {

struct Obj_0890AA8C {
    u8 pad_00[0x54];
    f32 unk_54;
    u8 pad_58[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

typedef struct {
    Obj_0890AA8C *unk_00;
    s32 unk_04;
    s8 unk_08;
    u8 pad_09[1];
    u8 unk_0A;
} S_0890AA8C;

void func_08866350(f32, Obj_0890AA8C *);
void func_088663BC(f32, Obj_0890AA8C *);

void func_0890AB10(S_0890AA8C *arg0, s32 arg1, s32 arg2, f32 arg3, f32 arg4) {
    arg0->unk_00->unk_14(arg1, arg2);
    func_08866350(0.0f, arg0->unk_00);
    if (arg2 == 0) {
        arg0->unk_0A = 1;
    } else {
        arg0->unk_0A = 0;
    }
    if (arg3 > 0.0f) {
        arg0->unk_00->unk_54 = arg3;
        func_08866350(arg3, arg0->unk_00);
    }
    if (arg4 > 0.0f) {
        func_088663BC(arg3 + arg4, arg0->unk_00);
    }
}

}
