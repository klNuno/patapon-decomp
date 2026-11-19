#include "common.h"

extern "C" {

extern u8 D_08A484F4[];
extern u8 D_08A48504[];
void func_0880416C(void *);

struct Unk {
    u8 pad_00[8];
    u8 *unk_08;

    void unk_00() {
        if (this != NULL) {
            unk_08 = D_08A48504;
        }
    }

    void unk_04() {
        if (this != NULL) {
            unk_08 = D_08A484F4;
            unk_00();
        }
    }
};

Unk *func_0898F0A8(Unk *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_04();
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
