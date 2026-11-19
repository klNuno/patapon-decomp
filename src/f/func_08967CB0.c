#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x434];
    s32 unk_440;
} T;

void func_08962E2C(T *);
void func_08967D54(T *);
extern u8 D_08A47DCC[];

T *func_08967CB0(T *arg0) {
    func_08962E2C(arg0);
    arg0->unk_08 = D_08A47DCC;
    arg0->unk_440 = 0;
    func_08967D54(arg0);
    return arg0;
}
