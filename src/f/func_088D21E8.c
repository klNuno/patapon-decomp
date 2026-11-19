#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *volatile unk_08;
} Unk_088D21E8;

extern u8 D_08A461B0[];
extern u8 D_08A461A0[];
void func_0880416C(void *);

Unk_088D21E8 *func_088D21E8(Unk_088D21E8 *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A461A0;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A461B0;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
