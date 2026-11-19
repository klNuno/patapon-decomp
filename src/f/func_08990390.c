#include "common.h"
typedef struct {
    s32 unk_00;
    s32 unk_04;
} T;
typedef struct {
    u8 pad_00[0x888];
    s32 unk_888;
} S;
extern T D_089EE3BC[];
extern T D_089EE404[];
void func_08975DB8(S *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_08990390(S *arg0, u32 arg1, T *arg2, s32 arg3) {
    T *temp = D_089EE404;
    if (arg1 < 9) {
        temp = &D_089EE3BC[arg1];
    }
    arg0->unk_888 = arg2->unk_00;
    func_08975DB8(arg0, arg2->unk_04, temp->unk_04, temp->unk_00, arg3);
}
