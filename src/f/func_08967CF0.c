#include "common.h"

typedef struct S08962EA0 {
    u8 pad_00[8];
    void *unk_08;
} S08962EA0;

extern void func_0880416C(void *);
S08962EA0 *func_08962EA0(S08962EA0 *arg0, s16 arg1);
void func_08968F44(void);
extern u8 D_08A47DCC[];

S08962EA0 *func_08967CF0(S08962EA0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A47DCC;
        func_08968F44();
        func_08962EA0(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
