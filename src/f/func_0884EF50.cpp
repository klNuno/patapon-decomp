#include "common.h"

extern "C" {

struct V_0884EF50 {
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18(void *);
};

void func_08852BB4(void *, s32);
void func_08852DC8(void *);
s32 func_08852E24(void *);
void func_08852F00(void *, s32);
void func_088539AC(void *);
s32 func_088539E8(void *);

void func_0884EF50(V_0884EF50 *arg0, void *arg1) {
    s32 temp;

    temp = func_088539E8(arg1);
    if (func_08852E24(arg1) == 0) {
        if (temp == 0) {
            func_08852BB4(arg1, 0);
            arg0->v18(arg1);
            func_08852F00(arg1, 0);
        } else {
            func_088539AC(arg1);
        }
    } else {
        func_08852DC8(arg1);
        func_08852F00(arg1, 0);
    }
}

}
