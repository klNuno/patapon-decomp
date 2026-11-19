#include "common.h"

typedef struct {
    s32 unk_00;
} R_0893DE3C;

typedef struct L_0893DE3C L_0893DE3C;

void func_0880416C(void *);
void func_0893DB40(s32 *, void *);
void func_0893DB48(s32 *, s32 *);
void func_0893DBC8(R_0893DE3C *, L_0893DE3C *, s32, s32);

L_0893DE3C *func_0893DB54(L_0893DE3C *arg0, s16 arg1) {
    R_0893DE3C temp;
    s32 temp2;
    s32 temp3;

    if (arg0 != NULL) {
        func_0893DB48(&temp2, (s32 *)arg0);
        func_0893DB40(&temp3, arg0);
        func_0893DBC8(&temp, arg0, temp2, temp3);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
