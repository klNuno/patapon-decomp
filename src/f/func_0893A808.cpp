#include "common.h"
extern "C" {
struct T {};
typedef struct {
    s32 unk_00;
    u8 unk_04[1];
} S;
void func_0893AB20(u8 *arg0, T arg1);
S *func_0893A808(S *arg0, s32 arg1) {
    T temp;
    arg0->unk_00 = arg1;
    func_0893AB20(arg0->unk_04, temp);
    return arg0;
}
}
