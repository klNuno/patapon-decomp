#include "common.h"

extern "C" {

struct Obj_0880B634 {
    virtual void v0();
    virtual void v1();
    virtual void v2(s32, u32);
    u8 pad_04[0x20];
    s32 unk_24;
    s32 unk_28;
    u8 pad_2C[0xC];
    s32 unk_38;
    u8 pad_3C[0xC];
    u8 unk_48;
    u8 pad_49;
    u8 unk_4A;
    u8 unk_4B;
    u8 unk_4C;
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
} T0880B634_L;

void func_0880644C(void *, s32);
void func_0880A530(void *);
void func_0880B488(void *, void *);
void func_0880B4A4(void *);
void func_0880B6D8(void *, void *);
extern u8 D_08A44620[];

Obj_0880B634 *func_0880B634(Obj_0880B634 *arg0, u32 arg1) {
    T0880B634_L sp18;

    func_0880B4A4(arg0);
    *(void **)arg0 = D_08A44620;
    arg0->unk_24 = 0;
    arg0->unk_28 = 0;
    arg0->unk_38 = 0;
    arg0->unk_48 = 0;
    arg0->unk_4A = arg1 != 0;
    arg0->unk_4B = 0;
    arg0->unk_4C = 0;
    func_0880A530(arg0);
    func_0880B488(&sp18, arg0);
    func_0880B6D8(arg0, &sp18);
    func_0880644C(&sp18, -1);
    arg0->v2(0, arg1 >> 2);
    return arg0;
}

}
