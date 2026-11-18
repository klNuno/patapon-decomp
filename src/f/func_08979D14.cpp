#include "common.h"

extern "C" {

typedef struct {
    void *unk_00;
} Elem_08979D14;

typedef struct Node_08979D14 {
    struct Node_08979D14 *unk_00;
    u8 pad_04[0x8];
    Elem_08979D14 unk_0C;
} Node_08979D14;

class Iter_08979D14 {
public:
    Node_08979D14 *unk_00;
    s32 func_eq(const Iter_08979D14 &o) const { return unk_00 == o.unk_00; }
    bool func_ne(const Iter_08979D14 &o) const { return !(bool)func_eq(o); }
};

typedef struct {
    u8 pad_00[0x1248];
    Node_08979D14 *unk_1248;
} Obj_08979D14;

void func_0883BA9C(void *, s32);
void func_0887B710(Elem_08979D14 *);
void func_0897982C(void *);

void func_08979D14(Obj_08979D14 *arg0) {
    Iter_08979D14 it;
    Iter_08979D14 end;
    Elem_08979D14 *e;

    it.unk_00 = arg0->unk_1248;
    end.unk_00 = (Node_08979D14 *)&arg0->unk_1248;
    while (it.func_ne(end)) {
        e = &it.unk_00->unk_0C;
        func_0883BA9C(e->unk_00, 0);
        func_0887B710(e);
        it.unk_00 = it.unk_00->unk_00;
    }
    func_0897982C(&arg0->unk_1248);
}

}
