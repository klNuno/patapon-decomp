#include "common.h"

typedef struct L L;
typedef struct N N;
struct N {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    L *unk_0C;
    u8 pad_10[0xC];
    u8 *unk_1C;
};

void func_0880416C(void *);
void func_08880530(L *, N *);
extern u8 D_08A4535C[];

N *func_088804C0(N *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        L *temp;
        arg0->unk_1C = D_08A4535C;
        temp = arg0->unk_0C;
        if (temp != NULL) {
            func_08880530(temp, arg0);
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
