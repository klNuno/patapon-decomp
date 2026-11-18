#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

class E_0890E27C;
void func_0890E330(E_0890E27C *, const E_0890E27C *);
void func_088B02C0(void *, const void *);

class E_0890E27C {
public:
    u8 pad_00[0xE80];
    s32 unk_E80;
    u8 pad_E84[0x4];
    u8 unk_E88[0x4];
    E_0890E27C(const E_0890E27C &o) {
        func_0890E330(this, &o);
        unk_E80 = o.unk_E80;
        func_088B02C0(unk_E88, o.unk_E88);
    }
};

typedef struct Node_0890E27C {
    struct Node_0890E27C *unk_00;
    struct Node_0890E27C *unk_04;
    u8 pad_08[0x18];
    E_0890E27C unk_20;
} Node_0890E27C;

typedef struct {
    Node_0890E27C *unk_00;
} It_0890E27C;

typedef struct {
    u8 pad_00[0x8];
    Node_0890E27C *unk_08;
    s32 unk_0C;
} List_0890E27C;

void func_0890E27C(List_0890E27C *arg0, It_0890E27C arg1, E_0890E27C *arg2) {
    Node_0890E27C *n;
    Node_0890E27C *prev;

    n = arg0->unk_08->unk_00;
    if (n != arg0->unk_08) {
        if (n->unk_00 != NULL) {
            n->unk_00->unk_04 = n->unk_04;
        }
        if (n->unk_04 != NULL) {
            n->unk_04->unk_00 = n->unk_00;
        }
        n->unk_00 = NULL;
        n->unk_04 = NULL;
    } else {
        n = NULL;
    }
    prev = arg1.unk_00->unk_04;
    arg0->unk_0C++;
    prev->unk_00 = n;
    arg1.unk_00->unk_04 = n;
    n->unk_00 = arg1.unk_00;
    n->unk_04 = prev;
    new (&n->unk_20) E_0890E27C(*arg2);
}

}
