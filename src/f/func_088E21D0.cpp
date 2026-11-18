#include "common.h"

extern "C" {

s32 func_08822AD0(char *, char *);

class Ptr {
public:
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 *unk_0C;
    Ptr() : unk_00(0), unk_04(0), unk_08(0), unk_0C(NULL) {}
    Ptr(const Ptr &o) : unk_00(o.unk_00), unk_04(o.unk_04), unk_08(o.unk_08), unk_0C(o.unk_0C) {
        if (unk_08 != 0) {
            ++*unk_0C;
        }
    }
};

typedef struct Data {
    Ptr unk_00;
    u8 pad_10[4];
    char unk_14[1];
} Data;

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
    Data unk_08;
} Node;

typedef struct Head {
    Node *unk_00;
    Node *unk_04;
} Head;

typedef struct S {
    u8 pad_00[0x2024];
    Head unk_2024;
} S;

struct It {
    Node *unk_00;
    s32 eq(const It &o) const { return unk_00 == o.unk_00; }
    bool ne(const It &o) const { return !(bool)eq(o); }
};

Ptr func_088E21D0(S *arg1, char *arg2) {
    It it;
    It end;

    it.unk_00 = arg1->unk_2024.unk_00;
    end.unk_00 = (Node *)&arg1->unk_2024;
    for (; it.ne(end); it.unk_00 = it.unk_00->unk_00) {
        Data *d = &it.unk_00->unk_08;
        if (func_08822AD0(d->unk_14, arg2) == 0) {
            return d->unk_00;
        }
    }
    return Ptr();
}

}
