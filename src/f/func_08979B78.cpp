#include "common.h"

extern "C" {

class V {
public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
};

typedef struct {
    void *unk_00;
    u8 pad_04[0xA34];
    u8 unk_A38[1];
} S0;

extern u8 D_08A47FC8[];
extern u8 D_08A48024[];

void func_0880416C(void *);
void func_0886B11C(S0 *, s32);
void func_0897974C(void *, s32);

S0 *func_08979B78(S0 *arg0, s16 arg1) {
    void *p;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A47FC8;
        ((V *)arg0)->f3();
        p = arg0->unk_A38;
        if (p != NULL) {
            func_0897974C(p, 0);
        }
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A48024;
            ((V *)arg0)->f3();
            func_0886B11C(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
