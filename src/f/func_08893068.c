#include "common.h"

void func_0880416C(void *);
extern u8 D_08A45658[];

typedef struct N_08892D94 N_08892D94;
void func_088924BC(void *, N_08892D94 *);

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    void *unk_0C;
    u8 pad_10[0xC];
    u8 *unk_1C;
} T;

T *func_08893068(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        void *temp;
        arg0->unk_1C = D_08A45658;
        temp = arg0->unk_0C;
        if (temp != NULL) {
            func_088924BC(temp, (N_08892D94 *)arg0);
        }
        arg0->unk_0C = NULL;
        arg0->unk_04 = 0;
        arg0->unk_00 = 0;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
