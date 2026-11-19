#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *volatile unk_08;
} Unk_088B6B8C;

extern u8 D_08A45D78[];
extern u8 D_08A45D68[];
void func_0880416C(void *);

Unk_088B6B8C *func_088B6B8C(Unk_088B6B8C *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A45D68;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A45D78;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
