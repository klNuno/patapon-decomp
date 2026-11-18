#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0xC];
    s32 *unk_0C;
} E088EE83C;

typedef struct N088EE83C {
    s32 unk_00;
    struct N088EE83C *unk_04;
    E088EE83C *unk_08;
} N088EE83C;

typedef struct {
    u8 pad_00[0x224];
    N088EE83C *unk_224;
    u8 pad_228[0x240 - 0x228];
    u32 unk_240;

    E088EE83C *get() {
        struct { N088EE83C *unk_00; } it;
        if (unk_240 < 2) {
            return NULL;
        }
        it.unk_00 = unk_224;
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        return it.unk_00->unk_08;
    }
} L088EE83C;

typedef struct {
    u8 pad_00[0x6B0];
    L088EE83C unk_6B0;
    u8 pad_8F4[0x960 - 0x8F4];
    void *unk_960;
} T088EE83C;

typedef struct {
    u8 pad_00[0x14];
    T088EE83C *unk_14;
} S088EE83C;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088533F8(void *, s32);
s32 func_0885A680(void);
void func_088ECC50(void *, s32 *, s32 *, u8);

void func_088EE83C(S088EE83C *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    u8 c;
    s32 *p;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_088533F8(arg1, 1);
    if (arg0->unk_14 != NULL && arg0->unk_14->unk_960 != NULL) {
        func_088ECC50(arg0->unk_14->unk_960, a, b, c);
        p = arg0->unk_14->unk_6B0.get()->unk_0C;
        *p = func_0885A680();
    }
    func_08852F00(arg1, 0);
}

}
