#include "common.h"

extern "C" {

void func_08855354(char *);
struct E {};
inline void func_1(char *arg0, const E &) {
    func_08855354(arg0);
}
extern u8 D_08A44B58[];
extern u8 D_08A46424[];

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
    f32 unk_34;
    f32 unk_38;
    u8 pad_3C[0x4];
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
    u8 unk_50;
    u8 pad_51[0x3];
    void *unk_54;
} S88DF5B8;

S88DF5B8 *func_088DF5B8(S88DF5B8 *arg0) {
    arg0->unk_54 = D_08A44B58;
    func_1((char *)arg0, E());
    arg0->unk_40 = 45.0f;
    arg0->unk_44 = 50.0f;
    arg0->unk_48 = 5000.0f;
    arg0->unk_4C = 100.0f;
    arg0->unk_38 = 100.0f;
    arg0->unk_50 = 1;
    arg0->unk_54 = D_08A46424;
    arg0->unk_4C = 50.0f;
    arg0->unk_30 = 0;
    arg0->unk_34 = 150.0f;
    arg0->unk_38 = 562.0f;
    return arg0;
}
}
