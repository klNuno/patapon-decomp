#include "common.h"

extern "C" {

class C_08971C34 {
public:
    virtual void v08();
    virtual s32 v0C();
};

typedef struct {
    u8 pad_00[8];
    C_08971C34 *unk_08;
} T_08971C34;

s32 *func_0884EBA0(s32, s32);
void func_08973F5C(T_08971C34 *, s32, s32 *);

void func_08971C34(T_08971C34 *arg0) {
    s32 t;
    s32 i;
    s32 v;

    t = arg0->unk_08->v0C();
    v = 0;
    *func_0884EBA0(t, 0x1A) = -1;
    *func_0884EBA0(t, 0x1F) = -1;
    *func_0884EBA0(t, 0x24) = -1;
    *func_0884EBA0(t, 0x29) = -1;
    *func_0884EBA0(t, 0x2E) = -1;
    *func_0884EBA0(t, 0x33) = -1;
    for (i = 0; i < 6; i++) {
        func_08973F5C(arg0, i, &v);
        if (v < 0) {
            continue;
        }
        if (v == *func_0884EBA0(t, 0x19)) {
            *func_0884EBA0(t, 0x1A) = i;
        } else if (v == *func_0884EBA0(t, 0x1E)) {
            *func_0884EBA0(t, 0x1F) = i;
        } else if (v == *func_0884EBA0(t, 0x23)) {
            *func_0884EBA0(t, 0x24) = i;
        } else if (v == *func_0884EBA0(t, 0x28)) {
            *func_0884EBA0(t, 0x29) = i;
        } else if (v == *func_0884EBA0(t, 0x2D)) {
            *func_0884EBA0(t, 0x2E) = i;
        } else if (v == *func_0884EBA0(t, 0x32)) {
            *func_0884EBA0(t, 0x33) = i;
        }
    }
}

}
