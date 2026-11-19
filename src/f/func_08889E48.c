#include "common.h"

typedef struct {
    u8 pad_00[8];
    void **unk_08;
} T08889E48;

extern void *D_08A45494[];
extern void *D_08A454A4[];
void func_0880416C(void *);

T08889E48 *func_08889E48(T08889E48 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A45494;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A454A4;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
