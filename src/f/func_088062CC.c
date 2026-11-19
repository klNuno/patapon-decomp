#include "common.h"

typedef struct {
    void *unk_00;
    u8 unk_04[1];
} T;

extern void *D_08A44398[];
void func_08806388(T *);
void func_08806318(void *, void *);

T *func_088062CC(T *arg0, void *arg1)
{
    func_08806388(arg0);
    arg0->unk_00 = D_08A44398;
    func_08806318(arg0->unk_04, arg1);
    return arg0;
}
