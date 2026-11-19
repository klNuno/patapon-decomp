#include "common.h"
typedef struct A_08806860 A_08806860;

typedef struct {
    u8 *unk_00;
    u32 unk_04;
} T;

extern u8 D_08A445C8[];
void *func_08806388(void *);
A_08806860 *func_08806318(A_08806860 *arg0, char *arg1);

T *func_0880B0D4(T *arg0, char *arg1) {
    func_08806388(arg0);
    arg0->unk_00 = D_08A445C8;
    func_08806318((A_08806860 *)&arg0->unk_04, arg1);
    return arg0;
}
