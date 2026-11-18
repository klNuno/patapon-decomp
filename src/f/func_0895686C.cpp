#include "common.h"

extern "C" {

class Mem_0895686C {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
};

typedef struct {
    u8 pad_00[0xAF0];
    u8 unk_AF0[0x1260];
    u8 unk_1D50[0x1E0];
    s32 unk_1F30;
    u8 pad_1F34[0x248C];
    u8 unk_43C0[0x1A2F0];
    Mem_0895686C unk_1E6B0;
    u8 pad_1E6B4[0x39F0];
    s32 unk_220A4;
    u8 pad_220A8[0xD8];
    u8 unk_22180;
} Obj_0895686C;

void func_0894DB24(u8 *);
void func_0895308C(u8 *);
void func_08950B2C(u8 *);

void func_0895686C(Obj_0895686C *arg0) {
    if (arg0->unk_220A4 != 2) {
        if (arg0->unk_1F30 != 2 && arg0->unk_22180 != 0) {
            if (arg0->unk_1F30 == 0) {
                arg0->unk_1E6B0.unk_14();
            }
            func_0894DB24(arg0->unk_43C0);
            if ((u32)(arg0->unk_1F30 - 1) > 1U) {
                func_0895308C(arg0->unk_AF0);
                func_08950B2C(arg0->unk_1D50);
            }
        }
    }
}

}
