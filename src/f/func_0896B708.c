#include "common.h"

typedef struct {
    u32 unk_00;
    s32 unk_04;
} T0896B708;

void func_0896B708(T0896B708 *arg0, T0896B708 *arg1) {
    T0896B708 *end;
    T0896B708 *p;
    T0896B708 *min;
    s32 temp;

    if (arg0 != arg1) {
        end = arg1 - 1;
        if (arg0 < end) {
            do {
                min = arg0;
                if (arg0 != arg1) {
                    p = arg0 + 1;
                    if (p != arg1) {
                        do {
                            if (p->unk_00 < min->unk_00) {
                                min = p;
                            }
                            p++;
                        } while (p != arg1);
                    }
                }
                if (min != arg0) {
                    temp = min->unk_00;
                    min->unk_00 = arg0->unk_00;
                    arg0->unk_00 = temp;
                    temp = min->unk_04;
                    min->unk_04 = arg0->unk_04;
                    arg0->unk_04 = temp;
                }
                arg0++;
            } while (arg0 < end);
        }
    }
}
