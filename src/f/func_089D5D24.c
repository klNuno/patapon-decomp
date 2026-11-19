#include "common.h"

typedef struct {
    void *volatile unk_00;
} T;

extern u8 D_08A49038[];
extern u8 D_08A46884[];
void func_0880416C(void *);

T *func_089D5D24(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A49038;
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A46884;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
