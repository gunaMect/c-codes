#include <stdio.h>

#define TEE_SUCCESS 0U
#define TEE_FAILURE 1U

int main()
{
    printf("Hello World\n");
    int res = TEE_FAILURE;
    int installed_key_count = 0;
    
    if ((0U != installed_key_count) && (TEE_SUCCESS == res)) {
            res = TEE_SUCCESS;
        }
    printf("Return code: %d\n", res);

    return 0;
}
