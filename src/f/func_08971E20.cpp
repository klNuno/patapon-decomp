#include "common.h"

extern "C" {

class C_08971E20 {
public:
    virtual void v0();
    virtual void *v1();
};

typedef struct {
    u8 pad_00[0x8];
    C_08971E20 *unk_08;
} S_08971E20;

s32 *func_0884EBA0(void *, s32);

s32 func_08971E20(S_08971E20 *arg0, s32 arg1) {
    void *o;

    o = arg0->unk_08->v1();
    switch (arg1) {
    case 0:
        if (*func_0884EBA0(o, 0x1A) >= 0) {
            return 1;
        }
        break;
    case 1:
        if (*func_0884EBA0(o, 0x1F) >= 0) {
            return 1;
        }
        break;
    case 2:
        if (*func_0884EBA0(o, 0x24) >= 0) {
            return 1;
        }
        break;
    case 3:
        if (*func_0884EBA0(o, 0x29) >= 0) {
            return 1;
        }
        break;
    case 4:
        if (*func_0884EBA0(o, 0x2E) >= 0) {
            return 1;
        }
        break;
    case 5:
        if (*func_0884EBA0(o, 0x33) >= 0) {
            return 1;
        }
        break;
    }
    return 0;
}

}
