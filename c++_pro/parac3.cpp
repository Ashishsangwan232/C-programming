#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int n = 7;
    // scanf("%d", &n);

    int arr[10] = {5, 6, 7, 8, 9, 11, 13};
    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &arr[i]);
    // }

    int x = 10, k = 5;
    // scanf("%d", &x);
    // scanf("%d", &k);

    int res[10];
    int res_count = 0;

    int l = 0, h = n - 1;
    int right = n;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        printf("mid: %d\n", mid);
        if (arr[mid] >= x)
        {
            right = mid;
            printf("right: %d\n", right);
            h = mid - 1;
            printf("h: %d\n", h);
        }
        else
        {
            l = mid + 1;
            printf("l: %d\n", l);
        }
    }
    int left = right - 1;

    while (res_count < k)
    {
        int left_valid = (left >= 0);
        int right_valid = (right < n);

        if (left_valid && right_valid)
        {
            int dist_left = abs(arr[left] - x);
            int dist_right = abs(arr[right] - x);

            if (dist_left < dist_right)
            {
                res[res_count] = arr[left];
                left--;
            }
            else
            {
                res[res_count] = arr[right];
                right++;
            }
        }
        else if (left_valid)
        {
            res[res_count] = arr[left];
            left--;
        }
        else if (right_valid)
        {
            res[res_count] = arr[right];
            right++;
        }
        res_count++;
    }

    qsort(res, k, sizeof(int), compare);

    for (int i = 0; i < k; i++)
    {
        printf("%d", res[i]);
        if (i < k - 1)
        {
            printf(" ");
        }
    }

    return 0;
}