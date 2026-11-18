#include "common.h"

extern "C" {

class O0887432C {
public:
    virtual void func_08();
    virtual void func_0C(void *, s32 *, s32);
};

typedef struct T0887432C {
    s32 unk_00;
    O0887432C *unk_04;
    void *unk_08;
    s32 *unk_0C;

    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
} T0887432C;

void func_0886A45C(void *, s32);
void func_0880416C(void *);

T0887432C *func_0887432C(T0887432C *arg0, s16 arg1) {
    void **pp;
    s32 **cp;
    s32 n;

    if (arg0 != NULL) {
        if (arg0 != NULL && (pp = &arg0->unk_08, arg0->unk_08 != NULL)) {
            cp = &arg0->unk_0C;
            --**cp;
            if (arg0->unk_0C != NULL) {
                n = *arg0->unk_0C;
            } else {
                n = 0;
            }
            if (n == 0) {
                arg0->unk_04->func_0C(*pp, *cp, arg0->unk_00);
                func_0886A45C(*pp, arg0->unk_00);
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
