#include "common.h"

extern "C" {

typedef struct Node_088E0F18 {
    struct Node_088E0F18 *unk_00;
    u8 pad_04[0xC];
    s32 unk_10;

    int eq(struct Node_088E0F18 *o) { return this == o; }
    bool ne(struct Node_088E0F18 *o) { return !(bool)eq(o); }
} Node_088E0F18;

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
} Arg_088E0F18;

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} Ret_088E0F18;

typedef struct {
    u8 pad_00[0x13090];
    Node_088E0F18 unk_13090;
} Obj_088E0F18;

void func_088E0398(Ret_088E0F18 *, Node_088E0F18 *);
void func_088E0FCC(Node_088E0F18 *, s32, Arg_088E0F18 *);

void func_088E0F18(Obj_088E0F18 *arg0, Arg_088E0F18 *arg1) {
    Ret_088E0F18 ret;
    struct { Node_088E0F18 *unk_00; } it;

    for (it.unk_00 = arg0->unk_13090.unk_00; it.unk_00->ne(&arg0->unk_13090); it.unk_00 = it.unk_00->unk_00) {
        if (it.unk_00->unk_10 == arg1->unk_08) {
            return;
        }
    }
    func_088E0398(&ret, &arg0->unk_13090);
    func_088E0FCC(&arg0->unk_13090, ret.unk_00, arg1);
}

}
