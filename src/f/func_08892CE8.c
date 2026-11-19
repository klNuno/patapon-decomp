#include "common.h"

typedef struct T0 T0;

typedef struct N {
    void *unk_00;
    void *unk_04;
    u8 pad_08[4];
    T0 *unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
} N;

extern u8 D_08A45674[];
void func_0880416C(void *);
void func_08891C84(T0 *, N *);

N *func_08892CE8(N *arg0, s16 arg1) {
    if (arg0 != NULL) {
        T0 *temp;
        arg0->unk_1C = D_08A45674;
        temp = arg0->unk_0C;
        if (temp != NULL) {
            func_08891C84(temp, arg0);
        }
        arg0->unk_0C = NULL;
        arg0->unk_04 = NULL;
        arg0->unk_00 = NULL;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
