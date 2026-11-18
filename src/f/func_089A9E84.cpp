#include "common.h"

extern "C" {

class A_089A9E84 {
public:
    virtual void *v08(s32, s32);
    virtual void v0C();
    virtual void v10(void *);
};

typedef struct {
    A_089A9E84 *unk_00;
    void *unk_04;
    A_089A9E84 *unk_08;
    s32 unk_0C;
    s32 unk_10;
} T_089A9E84;

s32 func_089A96E8(void);
s32 func_089A91E0(void);
void func_089A9824(void);
s32 func_089A9410(void *, s32, s32);
void func_089A9FB8(T_089A9E84 *);

s32 func_089A9E84(T_089A9E84 *arg0, s32 arg1) {
    A_089A9E84 *a;
    void *p;

    if (func_089A96E8() < 0) {
        return 0;
    }
    if (func_089A91E0() < 0) {
        func_089A9824();
        return 0;
    }
    a = arg0->unk_00;
    p = a->v08(arg0->unk_0C, 4);
    if (arg0->unk_04 != p) {
        if (arg0->unk_04 != NULL) {
            arg0->unk_08->v10(arg0->unk_04);
        }
        arg0->unk_04 = p;
        arg0->unk_08 = a;
    }
    arg0->unk_10 = 1;
    if (func_089A9410(arg0->unk_04, arg0->unk_0C, arg1) != 0) {
        func_089A9FB8(arg0);
        return 0;
    }
    return 1;
}

}
