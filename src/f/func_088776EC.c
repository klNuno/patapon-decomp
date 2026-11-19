#include "common.h"

typedef struct {
    s32 unk_00;
} P;
typedef struct {
    s32 unk_00;
} P_08956380;
typedef struct {
    void *unk_00;
    union {
        P unk_00;
        P_08956380 unk_04;
    } unk_04;
} S;

void func_088A39FC(void *, P *);
void func_088A3A88(void *, P_08956380 *);

void func_088776EC(S *arg0, s32 arg1) {
    void *temp = arg0->unk_00;
    if (temp != NULL) {
        if (arg1 != 0) {
            func_088A39FC(temp, &arg0->unk_04.unk_00);
        } else {
            func_088A3A88(temp, &arg0->unk_04.unk_04);
        }
    }
}
