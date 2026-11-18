#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0xC];
    s32 *unk_0C;
} C_0893743C;

typedef struct A_0893743C {
    u8 pad_00[0x4];
    struct A_0893743C *unk_04;
    C_0893743C *unk_08;
} A_0893743C;

typedef struct {
    u8 pad_00[0x224];
    A_0893743C *unk_224;
    u8 pad_228[0x18];
    u32 unk_240;

    C_0893743C *get() {
        if (unk_240 < 2) {
            return NULL;
        }
        A_0893743C *a = unk_224;
        if (a != NULL) {
            a = a->unk_04;
        }
        return a->unk_08;
    }
} S_0893743C;

typedef struct {
    u8 pad_00[0xA30];
    S_0893743C unk_A30;
    u8 pad_C74[0x6C];
    s32 unk_CE0;
} P_0893743C;

typedef struct {
    u8 pad_00[0x14];
    P_0893743C *unk_14;
} T_0893743C;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088533F8(void *, s32);
s32 func_0885A680(void);
void func_088ECC50(s32, s32 *, s32 *, u8);

void func_0893743C(T_0893743C *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    u8 c;
    struct { T_0893743C *unk_00; } h;

    h.unk_00 = arg0;
    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_088533F8(arg1, 1);
    if (h.unk_00->unk_14 != NULL && h.unk_00->unk_14->unk_CE0 != 0) {
        func_088ECC50(h.unk_00->unk_14->unk_CE0, a, b, c);
        s32 *p = h.unk_00->unk_14->unk_A30.get()->unk_0C;
        *p = func_0885A680();
    }
    func_08852F00(arg1, 0);
}

}
