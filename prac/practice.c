// #include <stdio.h>
// int power(int a){
//     int pow=1;
//     for(int i=1 ;i<=a;i++){
//         pow*=a;
//     }
//     printf("num = %d\n",a);
//     printf("pow = %d\n",pow);
//     return pow;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int sum=0;
//     int temp;
//     while(n>0){
//         temp=n%10;
//         sum+=power(temp);
//         n/=10;
//     }
//         printf("sum = %d\n",sum);
// }

//===========-=-===============================-=-=-==========================
//===========-=-===============================-=-=-==========================
// #include <stdio.h>

// int main() {
    //     int num, i;
    
    //     printf("Enter a number: ");
    //     scanf("%d", &num);
    
    //     printf("Factors of %d are: ", num);
    //     for (i = 1; i <= num; i++) {
        //         if (num % i == 0) {
            //             printf("%d ", i);
            //         }
            //     }
            
            //     return 0;
            // }
//===========-=-===============================-=-=-==========================
//===========-=-===============================-=-=-==========================
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h> // for tolower()

// int countVowels(char *str) {
//     int count = 0;
//     char ch;

//     for (int i = 0; str[i] != '\0'; i++) {
//         ch = tolower(str[i]); // make it case-insensitive
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//             count++;
//         }
//     }

//     return count;
// }

// int main() {
//     char str[100];
    
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin); // safer input

//     int vowels = countVowels(str);
//     printf("Number of vowels: %d\n", vowels);

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main( )
// {

// int *p,n,i;
// printf("Enter the number of blocks we want to reserve:") ;
// scanf("%d",&n) ;
// p=(int*)calloc(n,sizeof(int));//malloc() returns void* so we need to typecast with the specific data type
// if(p==NULL)
// { 
// printf("Memory not available\n");
// exit(1);
// }
// else
// {
// printf("\n Memory allocation successful");
// printf ("\nEnter integer values: ") ;
// for(i=0;i<n;i++)
// {
// scanf("%d",p+i);
// }
// printf("\n Entered values are:");
// for(i=0;i<n;i++)
// printf("\n%d",*(p+i));
// return 0;
// }
// }
// #include<stdio.h>
// int main()
// {
// 	 int a[]={1,2,3,4};
// 	 int *p=a,i;
// 	 p++;
// 	 *(p+1)=29;
// 	 p=p+1;
// 	 *p=23;
// 	 p--;
// 	 *(p+0)=12;
// 	 p=a;
// 	 for(i=0;i<4;i++)
//            printf("%d ",*(p+i));
// 	return 0;
// }



// #include<stdio.h>
// int main()
// {
//  
//   int a[50],n,loc=-1, key, beg,last,mid,i;
//   printf("\n Enter number of array elements:");
//   scanf("%d",&n);
//   printf("\n Enter array elements:");
//   for(i=0;i<n;i++)
//   {
//   	scanf("%d",&a[i]);
//   }
//   beg=0;
//   last=n-1;
//   printf("Enter integer value to search in sorted array:");
//   scanf( "%d", &key );
//    while(beg<=last)//Loop will run until unless only one element is not remaining
//    {
//     mid = (beg + last) / 2; // determine index of middle element
//     if(a[mid]==key)
//     {
//       loc=mid; //save the location of element.
//       break;
//     }
//  else if(a[mid]>key) //Middle element is greater than key
//     {
//       last=mid-1;//If middle element is greater than key, we need to search left subarray
//     }
//     else if(a[mid]<key) //Middle element is less than key
//     {
//       beg=mid+1;//If middle element is less than key, we need to search right subarray
//     } //end of if else
//    } //end of while
//    if(loc!=-1)
//    {
//      printf("element found at %d", loc+1);//Location is exact position, not index
//    }
//    else
//    {
//      printf("element not found");
//    }
//    return 0;
// }




// #include <stdio.h>
// int main()
// {
//    int a[100];
//    int hold,i,j,n;
//    printf("\n Enter value of n:");
//    scanf("%d",&n);
//    printf("\n Enter elements:");
//    for(i=0;i<n;i++)
//    {
//    	scanf("%d",&a[i]);
//    }
//    printf( "Data items in original order" );
//    for (i=0;i<n;i++ )
//    {
//       printf("%d ",a[i]);//Elements will come with space
//    } // end for
//    // bubble sort
//     // loop to control number of passes(no. of passes are always n-1)
//     for (i=0;i<n-1;i++)
//     {
//     // loop to control number of comparisons per pass(There is one comparison less)
//      
//     for (j=0;j<n-i-1;j++)
//         {
//         // compare adjacent elements and swap them if first
//         // element is greater than second element
//         if (a[j]>a[j+1])
//         {
//             hold=a[j];
//             a[j]=a[j+1];
//             a[j+1]=hold;
//         } // end if
//     } // end inner for
//     } // end outer for
//     printf( "\nData items in ascending order" );
// for (i=0;i<n;i++)
// {
//    printf("%d ",a[i]);
// } // end for
// } // end main


// #include <stdio.h>
// int main()
// {
//    int array[100], position, c, n, value;
//    printf("Enter number of elements in array:\n");
//    scanf("%d", &n);
//    printf("Enter %d elements:\n", n);
//    for (c = 0; c < n; c++)
//     {
// 	scanf("%d", &array[c]);
// 	}
//    printf("Enter the location where you wish to insert an element:\n");
//    scanf("%d", &position);
//    printf("Enter the value to insert:\n");
//    scanf("%d", &value);
//    for (c = n - 1; c >= position - 1; c--)
//    {
//    array[c+1] = array[c];
//    }
//    array[position-1] = value;
//    printf("Resultant array is:\n");
//    for (c = 0; c <= n; c++)
//    {
//    printf("%d\n", array[c]);
//    }
//    return 0;
// }

// #include <stdio.h>
// int main(){
//     int n=2,m=3;
//     int nt=m,mt=n;
//     int a[n][m],at[nt][mt];
//     printf("enteer matriv ");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             scanf("%d",a[n][m]);
//         }
//     }
//     for(int i=0;i<nt;i++){
//         for(int j=0;j<mt;j++){
//             at[nt][mt]=a[m][n];
//         }
//     }
//     for(int i=0;i<nt;i++){
//         for(int j=0;j<mt;j++){
//             printf("%d ",at[m][n]);
//         }
//         printf("\n");
//     }
// }


#include <stdio.h>
int main()
{
int a[10][10], b[10][10], result[10][10], r1, c1, r2, c2, i, j, k;
    printf("Enter rows and column for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and column for second matrix: ");
    scanf("%d %d",&r2, &c2);
    // Column of first matrix should be equal to column of second matrix and
    while (c1 != r2)
    {
        printf("Error! No. of columns of first matrix not equal to no.of row of second.\n\n");
        printf("Enter rows and column for first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and column for second matrix: ");
        scanf("%d %d",&r2, &c2);
    }
    // Storing elements of first matrix.
    printf("\nEnter elements of matrix 1:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("Enter elements a%d%d: ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
 // Storing elements of second matrix.
    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("Enter elements b%d%d: ",i, j);
            scanf("%d",&b[i][j]);
        }
    }

    // Initializing all elements of result matrix to 0
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            result[i][j] = 0;
        }
    }
    // Multiplying matrices a and b and
    // storing result in result matrix
    
	
	for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    // Displaying the result
    printf("\nOutput Matrix:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d  ", result[i][j]);
        }
                printf("\n\n");
    }
    return 0;
}
