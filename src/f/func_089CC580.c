#include "common.h"

void func_0880416C(void *);
typedef struct L_089CC5F0 L_089CC5F0;
typedef struct N_089CC5F0 N_089CC5F0;
void func_089CC5F0(L_089CC5F0 *, N_089CC5F0 *);
extern u8 D_08A48E5C[];

typedef struct {
    s32 unk_00, unk_04;
    u8 pad_08[4];
    L_089CC5F0 *unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
} S;

void *func_089CC580(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        L_089CC5F0 *temp;
        arg0->unk_1C = D_08A48E5C;
        temp = arg0->unk_0C;
        if (temp != NULL) {
            func_089CC5F0(temp, (N_089CC5F0 *)arg0);
        }
        arg0->unk_0C = 0;
        arg0->unk_04 = 0;
        arg0->unk_00 = 0;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
