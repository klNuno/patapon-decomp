#include "common.h"

extern "C" {

struct Obj_0886ADD4 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    u8 pad_04[4];
};

void func_0880416C(void *);
void func_0886AE58(void *, s32);
extern u8 D_08A48024[];
extern u8 D_08A44F28[];

Obj_0886ADD4 *func_0886ADD4(Obj_0886ADD4 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)arg0 = D_08A48024;
        arg0->v3();
        if (arg0 != NULL) {
            *(void **)arg0 = D_08A44F28;
            func_0886AE58(&arg0->pad_04, -1);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
