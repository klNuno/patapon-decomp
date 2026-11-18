#include "common.h"

extern "C" {

u32 *func_08809C20(u32 *, u32 *);
u32 *func_088107AC(void *);
void func_088128A4(void);
u32 func_08812F08(void *);

u32 func_08812E24(void *arg0, u32 arg1) {
    u32 ms;
    u32 size;

    ms = func_08812F08(arg0);
    size = *func_088107AC(arg0);
    if (arg1 > ms - size) {
        func_088128A4();
    }
    if (size < ms / 3) {
        u32 t = (size + 1) * 3 / 5;
        return size + *func_08809C20(&t, &arg1);
    }
    if (size < ms / 3 * 2) {
        u32 t = (size + 1) / 2;
        return size + *func_08809C20(&t, &arg1);
    }
    return ms;
}

}
