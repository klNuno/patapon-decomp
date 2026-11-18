#include "common.h"

void func_0880416C(void *);
void func_088F6A0C(void *);
extern u8 D_08A46724[];
extern u8 D_08A46734[];

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x10604];
    u8 unk_10610[0x4];
} S_088F697C;

S_088F697C *func_088F697C(S_088F697C *arg0, s16 arg1) {
    u8 *temp;

    if (arg0 != NULL) {
        temp = arg0->unk_10610;
        if (temp != NULL) {
            func_088F6A0C(temp);
        }
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A46724;
                if (arg0 != NULL) {
                    arg0->unk_08 = D_08A46734;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
