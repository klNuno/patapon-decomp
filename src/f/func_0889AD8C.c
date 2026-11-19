#include "common.h"

typedef struct E_088A4094 E_088A4094;
void func_0880416C(void *);
void func_0889B100(E_088A4094 *, f32);

E_088A4094 *func_0889AD8C(E_088A4094 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_0889B100(arg0, 0.0f);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
