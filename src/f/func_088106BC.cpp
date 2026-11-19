#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[4];
    void *unk_04;
} Unk;

void func_088106D8(void *, void *);

void func_088106BC(Unk *arg0) {
    func_088106D8(arg0, arg0->unk_04);
}

}
