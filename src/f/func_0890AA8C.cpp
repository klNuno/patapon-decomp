#include "common.h"

extern "C" {

struct Obj_0890AA8C {
    u8 pad_00[0x80];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(s32, s32);
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

void func_0890AA8C(S_0890AA8C *arg0, s32 arg1, s32 arg2, s8 arg3) {
    func_08866350(0.0f, arg0->unk_00);
    func_088663BC(-1.0f, arg0->unk_00);
    arg0->unk_00->v3(arg1, arg2);
    arg0->unk_08 = arg3;
    arg0->unk_04 = arg1;
    arg0->unk_0A = 0;
}

}
