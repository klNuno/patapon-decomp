#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    u8 unk_28[0x18];
    struct {
        u8 pad_00[4];
        s32 unk_04;
        f32 *unk_08;
        u8 pad_0C[0xC];
        f32 unk_18;
        f32 unk_1C;
        u8 pad_20[0x6B0];
    } unk_40;
    s32 unk_710;
    s32 unk_714;
    s32 unk_718;
    s32 unk_71C;
} T;

void func_088AF260(void *, s32);
void func_088F232C(void *, s32);
void func_088FC214(void *);

struct U {};

static inline T *func_08912114_inline(T *arg0, const U &) {
    f32 *temp;

    arg0->unk_00 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_20 = 0;
    arg0->unk_24 = 0;
    func_088FC214(arg0->unk_28);
    func_088F232C(&arg0->unk_40, 1);
    arg0->unk_710 = 0;
    arg0->unk_714 = 0;
    arg0->unk_718 = 0;
    arg0->unk_71C = 0;
    func_088AF260(&arg0->unk_40, 1);
    arg0->unk_40.unk_04 = 1;
    temp = arg0->unk_40.unk_08;
    arg0->unk_40.unk_18 = 14.0f - temp[0];
    arg0->unk_40.unk_1C = 14.0f - temp[1];
    return arg0;
}

T *func_08912114(T *arg0) { return func_08912114_inline(arg0, U()); }
}
