#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00[3];
} Unk088BD534_03;
typedef Unk088BD534_03 S1;

typedef struct {
    u8 unk_00[0x10];
} S2;

typedef struct {
    u8 unk_00[8];
} S3;

typedef struct S0 {
    struct S0 *unk_00;
    u8 unk_04[0x220];
    u8 unk_224[0x10];
    s32 unk_234;
    u8 unk_238;
    u8 pad_239[3];
    struct S0 *unk_23C;
    S1 unk_240;
    u8 unk_24C;
    u8 pad_24D[3];
    s32 unk_250;
    s32 unk_254;
    struct S0 *unk_258;
    S1 unk_25C;
    u8 unk_268;
    u8 pad_269[3];
    s32 unk_26C;
    s32 unk_270;
    u8 pad_274[0xC];
    u8 unk_280[1];
} S0;

extern Unk088BD534_03 D_08A490BC[];
extern S2 D_089E62D8[];
void func_08913614(void *);
void func_0891D5BC(void *, S3 *);
void func_0891D654(S3 *, S2 *, s32);
void func_0891D660(void *);

static inline void func_0891D240_1(S0 *arg0, const S1 *arg1) {
    arg0->unk_23C = arg0;
    volatile S1 temp;
    const S1 *p = (const S1 *)(u32)arg1;
    temp.unk_00[0] = arg1->unk_00[0];
    temp.unk_00[1] = p->unk_00[1];
    temp.unk_00[2] = p->unk_00[2];
    f32 temp1 = temp.unk_00[0];
    f32 temp2 = temp.unk_00[1];
    f32 temp3 = temp.unk_00[2];
    arg0->unk_240.unk_00[0] = temp1;
    arg0->unk_240.unk_00[1] = temp2;
    arg0->unk_240.unk_00[2] = temp3;
    arg0->unk_24C = 0;
    arg0->unk_250 = 0;
    arg0->unk_254 = 0;
    arg0->unk_258 = arg0;
    arg0->unk_25C.unk_00[0] = temp1;
    arg0->unk_25C.unk_00[1] = temp2;
    arg0->unk_25C.unk_00[2] = temp3;
    arg0->unk_268 = 0;
    arg0->unk_26C = 0;
    arg0->unk_270 = 0;
}

S0 *func_0891D240(S0 *arg0) {
    S3 a;
    u32 i;
    S2 *p;

    arg0->unk_00 = arg0;
    func_0891D660(arg0->unk_04);
    arg0->unk_234 = 0;
    i = 0;
    p = D_089E62D8;
    do {
        func_0891D654(&a, p, 0);
        func_0891D5BC(arg0->unk_224, &a);
        ++i;
        ++p;
    } while (i < 4);
    arg0->unk_238 = 0;
    func_0891D240_1(arg0, D_08A490BC);
    func_08913614(arg0->unk_280);
    return arg0;
}
}
