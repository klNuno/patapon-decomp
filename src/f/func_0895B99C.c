#include "common.h"

extern u8 D_08A479C4[];

typedef struct {
    s32 unk_00;
    u8 unk_04[0xC];
    s32 unk_10;
    u8 *unk_14;
} T;

void func_0895B708(T *);
void func_0895B7C4(void *);

T *func_0895B99C(T *arg0, s32 arg1) {
    s32 temp = arg1;
    T *obj = arg0;

    obj->unk_14 = D_08A479C4;
    func_0895B708(obj);
    func_0895B7C4(obj->unk_04);
    obj->unk_10 = temp;
    return obj;
}
