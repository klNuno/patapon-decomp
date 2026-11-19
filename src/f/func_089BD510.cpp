#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0xA40];
    void *unk_A40;
    u8 unk_A44;
} T;

extern void func_089BD7F0(void *);
extern void func_0895752C(void *, f32);

void func_089BD510(T *arg0) {
    func_089BD7F0(&arg0->unk_A44);
    func_0895752C(arg0->unk_A40, 0.0f);
}

}
