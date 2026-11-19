#include "common.h"

void func_0880416C(void *);
void func_088A0394(char *arg0);
typedef struct Obj_0889DFE0 Obj_0889DFE0;
Obj_0889DFE0 *func_0889DFE0(Obj_0889DFE0 *arg0, s16 arg1);
extern u8 D_08A45974[];

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x98];
    u8 *unk_A8;
} T;

T *func_088A01AC(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_A8 = D_08A45974;
        func_088A0394((char *)arg0);
        func_0889DFE0((Obj_0889DFE0 *)arg0->unk_10, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
