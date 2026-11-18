#include "common.h"

extern "C" {

struct T0891FA10_A {
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual void vfunc_10(void *);
};

typedef struct T0891FA10_E {
    u8 pad_00[0x20];
    u8 unk_20[0x10];
} T0891FA10_E;

typedef struct T0891FA10_V {
    T0891FA10_E *unk_00;
    volatile u32 unk_04;
    T0891FA10_A *unk_08;
} T0891FA10_V;

void func_0891FAD4(void *, s16);
void func_088804C0(void *, s16);
void func_0880416C(void *);

T0891FA10_V *func_0891FA10(T0891FA10_V *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_04 != 0) {
            T0891FA10_E *p = arg0->unk_00;
            T0891FA10_E *end = p + arg0->unk_04;
            do {
                T0891FA10_E *e = p++;
                if (e != NULL) {
                    func_0891FAD4(e->unk_20, -1);
                    func_088804C0(e, -1);
                }
            } while (p != end);
            arg0->unk_08->vfunc_10(arg0->unk_00);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
