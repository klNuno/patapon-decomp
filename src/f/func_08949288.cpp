#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x18];
} E_08949288;

struct V_08949288 {
    E_08949288 *unk_00;
    s32 unk_04;
    E_08949288 *end() { return unk_00 + unk_04; }
};

typedef struct {
    u8 pad_00[0x310];
    V_08949288 unk_310;
} M_08949288;

typedef struct {
    u8 pad_00[0x51C];
    u8 unk_51C[0x1753C - 0x51C];
    u8 unk_1753C[0x10];
    M_08949288 unk_1754C;
} S_08949288;

void func_0880416C(void *);
void func_08949098(void *, s32);
void func_08949224(void *, s32);

S_08949288 *func_08949288(S_08949288 *arg0, s16 arg1) {
    E_08949288 *p;
    E_08949288 **data;
    s32 *sz;

    if (arg0 != NULL) {
        if (&arg0->unk_1754C != NULL) {
            p = arg0->unk_1754C.unk_310.unk_00;
            data = (E_08949288 **)(u32)&arg0->unk_1754C.unk_310.unk_00;
            if ((u32)p != (u32)(*(E_08949288 **&)data + arg0->unk_1754C.unk_310.unk_04)) {
                sz = &arg0->unk_1754C.unk_310.unk_04;
                do {
                    p++;
                } while (p != *(E_08949288 **&)data + *sz);
            }
            arg0->unk_1754C.unk_310.unk_04 = 0;
        }
        if (arg0->unk_51C != NULL) {
            func_08949098(arg0->unk_1753C, 0);
            func_08949224(arg0->unk_51C, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
