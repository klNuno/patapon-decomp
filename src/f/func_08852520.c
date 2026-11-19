#include "common.h"

extern u8 D_08A44868[];
extern u8 D_08A44884[];
extern u8 D_08A4489C[];
void func_0880416C(void *);

void *func_08852520(u8 *volatile *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        *arg0 = D_08A44868;
        if (arg0 != NULL) {
            *arg0 = D_08A44884;
            if (arg0 != NULL) {
                *arg0 = D_08A4489C;
            }
        }
        if (arg1 > 0) {
            func_0880416C((void *)arg0);
        }
    }
    return (void *)arg0;
}
