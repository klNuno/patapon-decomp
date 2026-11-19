#include "common.h"

typedef struct {
    void *unk_00;
    u8 unk_04[1];
} T;

void func_0880416C(void *);
void func_088041A8(void *, s16);
void func_0880627C(void *, s16);
extern u8 D_08A4473C[];

T *func_0880FD88(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A4473C;
        func_0880627C(arg0->unk_04, -1);
        func_088041A8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
