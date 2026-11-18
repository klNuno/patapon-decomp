#include "common.h"

u32 func_08812C00(void *);
u32 *func_08810674(void *);
void func_088128A4(void);
u32 *func_08809C20(u32 *, u32 *);

u32 func_08812B1C(void *arg0, u32 arg1) {
    u32 max;
    u32 size;
    u32 third;

    max = func_08812C00(arg0);
    size = *func_08810674(arg0);
    if (arg1 > max - size) {
        func_088128A4();
    }
    third = max / 3;
    if (size < third) {
        u32 n = (size + 1) * 3 / 5;
        return size + *func_08809C20(&n, &arg1);
    }
    if (size < third * 2) {
        u32 n = (size + 1) / 2;
        return size + *func_08809C20(&n, &arg1);
    }
    return max;
}
