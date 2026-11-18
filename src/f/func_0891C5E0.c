#include "common.h"

typedef struct {
    char *unk_00;
    char *unk_04[4];
} E_0891C5E0;

extern s32 func_08822AD0(char *, char *);
extern E_0891C5E0 D_08A018D4[];
extern char *D_08A015EC[];

u32 func_0891C5E0(char *arg0) {
    u32 i;
    u32 j;
    u32 k;

    i = 0;
    while (D_08A018D4[i].unk_00 != NULL) {
        for (j = 0; D_08A018D4[i].unk_04[j] != NULL; j++) {
            if (func_08822AD0(D_08A018D4[i].unk_04[j], arg0) == 0) {
                arg0 = D_08A018D4[i].unk_00;
                goto found;
            }
        }
        i++;
    }
found:
    for (k = 0; k < 0x88; k++) {
        if (func_08822AD0(arg0, D_08A015EC[k]) == 0) {
            return k;
        }
    }
    return 0;
}
