#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} C;

void func_08933218(C *);

void func_0893346C(C *arg0, const C *arg1) {
    arg0->unk_00 = arg1->unk_00;
    arg0->unk_04 = arg1->unk_04;
    func_08933218(arg0);
}
