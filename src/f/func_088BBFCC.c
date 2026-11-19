#include "common.h"

extern void func_0880416C(void *);
typedef struct O O;
O *func_088B88D8(O *, s16);
void func_088BA1E8(void *, s32);
extern u8 D_08A45E48[];

typedef struct {
    u8 pad_00[0x30];
    void *unk_30;
    u8 pad_34[0x20];
    u8 unk_54;
} S;

void *func_088BBFCC(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_30 = D_08A45E48;
        if (&arg0->unk_54 != NULL) {
            func_088B88D8((O *)&arg0->unk_54, -1);
        }
        func_088BA1E8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
