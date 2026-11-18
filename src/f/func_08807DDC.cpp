#include "common.h"

extern "C" {

class C_08807DDC {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual s32 v1C();
};

typedef struct {
    u8 pad_00[0xC];
} S_08807DDC;

extern char D_089F5FA0[];
extern char D_089F5FC8[];
void func_0880B068(void);
void *func_0880B0D4(S_08807DDC *, char *);
void __throw(char *, void *, void (*)(void));
void func_0880AF14(C_08807DDC *, s32);

void func_08807DDC(C_08807DDC *arg0, s32 arg1) {
    S_08807DDC sp14;

    if (arg0->v1C() < 0) {
        __throw(D_089F5FA0, func_0880B0D4(&sp14, D_089F5FC8), func_0880B068);
    }
    func_0880AF14(arg0, arg1);
}

}
