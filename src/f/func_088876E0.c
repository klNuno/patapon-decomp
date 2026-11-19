#include "common.h"

void func_0880416C(void *);

typedef struct {
    void *unk_00;
    s32 unk_04;
} T;

void func_0888774C(T *);

T *func_088876E0(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_04 = 0;
        if (arg0 != NULL) {
            void *temp;
            func_0888774C(arg0);
            temp = arg0->unk_00;
            if (temp != NULL) {
                func_0880416C(temp);
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
