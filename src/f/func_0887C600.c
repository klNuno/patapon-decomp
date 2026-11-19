#include "common.h"

extern void func_0887C724(void *);
extern u8 D_08A45248[];
extern u8 D_08A4525C[];

typedef struct {
    void *volatile unk_00;
    s32 unk_04;
} T;

T *func_0887C600(T *arg0) {
    arg0->unk_00 = D_08A4525C;
    arg0->unk_00 = D_08A45248;
    arg0->unk_04 = 0;
    func_0887C724(arg0);
    return arg0;
}
