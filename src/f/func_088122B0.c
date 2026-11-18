#include "common.h"

typedef struct {
    u32 unk_00;
} Obj_088122B0;

u32 func_08812394(Obj_088122B0 *);
u32 *func_0880F690(Obj_088122B0 *);
void func_088128A4(void);
u32 *func_08809C20(u32 *, u32 *);

u32 func_088122B0(Obj_088122B0 *arg0, u32 arg1) {
    u32 max;
    u32 size;
    u32 u;
    u32 t;

    max = func_08812394(arg0);
    size = *func_0880F690(arg0);
    if (arg1 > max - size) {
        func_088128A4();
    }
    if (size < max / 3) {
        u = ((size + 1) * 3) / 5;
        return size + *func_08809C20(&u, &arg1);
    }
    if (size < (max / 3) * 2) {
        t = (size + 1) >> 1;
        return size + *func_08809C20(&t, &arg1);
    }
    return max;
}
