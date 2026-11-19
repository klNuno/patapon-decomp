#include "common.h"

typedef struct S_088C3184 S_088C3184;
void func_088C3184(S_088C3184 *arg0);
void func_088C0084(void *, s16);
void func_0880416C(void *);

S_088C3184 *func_088C5360(S_088C3184 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_088C3184(arg0);
        func_088C0084((u8 *)arg0 + 0x40, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
