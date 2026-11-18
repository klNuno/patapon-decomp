typedef int s32;
typedef struct { char b[280]; } E280;

void func_08852E6C(char *arg0) {
    s32 temp_v1_2;
    s32 temp_v1_i;

    temp_v1_i =  * (s32 *)(arg0 + 0x360);
    temp_v1_2 = *(s32 *) &((E280 *) (arg0 + 0x90))[temp_v1_i];
    if (temp_v1_2 > 0) {
        *(s32 *) &((E280 *) (arg0 + 0x90))[temp_v1_i] = (s32) (temp_v1_2 - 1);
    }
}
