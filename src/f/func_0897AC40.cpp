#include "common.h"

extern "C" {

class O0897AC40 {
public:
    virtual void func_08();
    virtual void func_0C(void *, s32 *, s32);
};

typedef struct H0897AC40 {
    s32 unk_00;
    O0897AC40 *unk_04;
    void *unk_08;
    s32 *unk_0C;
} H0897AC40;

typedef struct T0897AC40 {
    s32 unk_00;
    H0897AC40 unk_04;
} T0897AC40;

void func_0897B3C0(void *, s32);
void func_0880416C(void *);

T0897AC40 *func_0897AC40(T0897AC40 *arg0, s16 arg1) {
    void **pp;
    s32 **cp;
    s32 n;

    if (arg0 != NULL) {
        if (&arg0->unk_04 != NULL) {
            if (&arg0->unk_04 != NULL && (pp = &arg0->unk_04.unk_08, arg0->unk_04.unk_08 != NULL)) {
                cp = &arg0->unk_04.unk_0C;
                --**cp;
                if (arg0->unk_04.unk_0C != NULL) {
                    n = *arg0->unk_04.unk_0C;
                } else {
                    n = 0;
                }
                if (n == 0) {
                    arg0->unk_04.unk_04->func_0C(*pp, *cp, arg0->unk_04.unk_00);
                    func_0897B3C0(*pp, arg0->unk_04.unk_00);
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
