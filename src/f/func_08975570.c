#include "common.h"

void *func_08827A50(s32, s32);
s32 func_0893E8A8(s32);
void *func_0893E8E0(void *);
s32 func_0897575C(s32);
extern s32 func_08975794(s32);

void *func_08975570(s32 arg0, s32 arg1) {
    void *temp;

    if (func_0897575C(arg1) != 0) {
        if ((temp = func_08827A50(0x14, arg0)) != NULL) {
            temp = (void *)func_08975794((s32)temp);
        }
        goto end;
    } else if (func_0893E8A8(arg1) != 0) {
        if ((temp = func_08827A50(0x14, arg0)) != NULL) {
            temp = func_0893E8E0(temp);
        }
        return temp;
    }
    return NULL;
end:
    return temp;
}
