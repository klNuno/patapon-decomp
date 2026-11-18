#include "common.h"

extern "C" {

class A_0886D4AC {
public:
    virtual void v0();
    virtual void v1(s32, s32 *, s32);
};

void func_0880416C(void *);
void func_0886E420(s32, s32);

class H_0886D4AC {
public:
    s32 unk_00;
    A_0886D4AC *unk_04;
    s32 unk_08;
    s32 *unk_0C;
};

H_0886D4AC *func_0886D4AC(H_0886D4AC *arg0, s16 arg1) {
    s32 *pp;
    s32 **cp;
    s32 n;

    if (arg0 != NULL) {
        if (arg0 != NULL) {
            pp = &arg0->unk_08;
            if (arg0->unk_08 != 0) {
                cp = &arg0->unk_0C;
                (*arg0->unk_0C)--;
                if (arg0->unk_0C != NULL) {
                    n = *arg0->unk_0C;
                } else {
                    n = 0;
                }
                if (n == 0) {
                    arg0->unk_04->v1(*pp, *cp, arg0->unk_00);
                    func_0886E420(*pp, arg0->unk_00);
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
