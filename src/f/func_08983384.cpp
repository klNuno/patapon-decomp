#include "common.h"

extern "C" {

class T {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

typedef struct {
    T unk_00;
    u8 pad_84[0x10C];
    s32 unk_190;
    u8 pad_194[0xC];
} E;

typedef struct {
    u8 pad_00[0x400];
    E unk_400;
} O;

typedef struct {
    u8 pad_00[0x58];
    s32 unk_58;
} F;

typedef struct {
    u8 pad_00[0x3E48];
    F *unk_3E48;
} S;

void func_08865FE4(void *, s32);
void func_08974410(T *, void *, f32);
void func_08974584(T *, f32, f32);
void func_08974648(T *, f32, f32);
void func_0897470C(T *, f32, f32, f32, f32);

void func_08983384(S *arg0, s32 arg1, void *arg2, s32 arg3) {
    s32 i = arg1 * sizeof(E);
    T *p = &((O *)((u8 *)arg0 + i))->unk_400.unk_00;
    p->unk_14(arg3 + 2, 0);
    void *t = (u8 *)arg0 + arg1 * 0x40 + 0x2C10;
    func_08974410(p, t, 0.0f);
    func_08974584(p, 0.0f, 0.0f);
    func_08974648(p, 0.0f, 0.0f);
    func_08974648(p, 0.0f, 0.0f);
    func_0897470C(p, 1.0f, -1.0f, 1.0f, 0.0f);
    s32 *r = &((O *)(i + (u32)arg0))->unk_400.unk_190;
    *r = 7;
    if (arg3 != 0) {
        T *b = (T *)((u8 *)arg0 + arg1 * 0x190 + 0x1110);
        func_08865FE4(b, arg0->unk_3E48->unk_58);
        b->unk_14(arg3, 0);
        func_08974410(b, t, 0.0f);
        func_08974584(b, 0.0f, 0.0f);
        func_0897470C(b, 1.0f, -1.0f, 1.0f, 0.0f);
        *r = 4;
    }
}

}
