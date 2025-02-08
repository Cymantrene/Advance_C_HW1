#include <stdio.h>
#include <stdint.h>

uint32_t MaxNumKBit(uint32_t N, uint32_t K)
{
    uint32_t max = 0;
    for (uint32_t i = 0; i <= 32 - K; i++)
    {
        uint32_t seq = (N >> i) & ((1 << K) - 1);
        if (seq > max)
        {
            max = seq;
        }
    }
    return max;
}

int main(void)
{
    uint32_t N, K;
    scanf("%u %u", &N, &K);
    printf("%u\n", MaxNumKBit(N, K));
    return 0;
}
