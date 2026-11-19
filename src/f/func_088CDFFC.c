#include "common.h"

extern u8 D_08A45350[];
extern u8 D_08A46048[];
typedef struct T T;
struct T {
    T *unk_00, *unk_04;
    u8 pad_08[0x1C];
    u8 *unk_24, *unk_28;
};
extern void func_08880754(T *);
extern void func_0888065C(void *);

T *func_088CDFFC(T *arg0) {
    arg0->unk_28 = D_08A46048;
    arg0->unk_24 = D_08A45350;
    func_08880754(arg0);
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    func_0888065C(arg0);
    return arg0;
}
