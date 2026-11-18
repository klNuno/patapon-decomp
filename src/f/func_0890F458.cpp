#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
} E_0890F458;

void func_0890F144(E_0890F458 *, E_0890F458 *);

inline s32 lt_0890F458(E_0890F458 *a, E_0890F458 *b) {
    if (a->unk_04 == b->unk_04) {
        return a->unk_00 < b->unk_00;
    }
    return a->unk_04 < b->unk_04;
}

void func_0890F458(E_0890F458 *arg0, E_0890F458 *arg1, E_0890F458 *arg2) {
    bool a;
    bool b;

    a = !lt_0890F458(arg2, arg0);
    b = !lt_0890F458(arg1, arg2);
    if (a && b) {
        return;
    }
    if (!a && !b) {
        func_0890F144(arg0, arg1);
        return;
    }
    if (lt_0890F458(arg1, arg0)) {
        func_0890F144(arg0, arg1);
    }
    if (a) {
        func_0890F144(arg1, arg2);
    } else {
        func_0890F144(arg0, arg2);
    }
}

}
