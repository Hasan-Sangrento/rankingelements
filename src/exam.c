#include <stdio.h>

int main() {
    int num[200], n, j, k, e, hangiarray;   // We defined the number N's and elements' interval.
    printf("Enter the N number which is number of elements: ");
    scanf("%d", &n);
    if(n < 0) {
        printf("N number cannot be less then 0.");
        exit(0);
    } else if(n > 200) {
        printf("N number cannot be more than 200.");
        exit(0);
    }
    printf("Enter the elements: ");
    for(int i = 0;i < n; i++) {
        scanf("%d", &num[i]);
        if(num[i] > 201) {
        printf("Elements cannot be more than 200.");
        exit(0);
        } else if(num[i] <= 0) {
        printf("Elements cannot be less than 0.");
        exit(0);
        }
    }
    for(int i = 0; i< n; i++) {
        for(int j = 0; j < n; j++) {
            if(num[j] <= num[i]) {
                e=num[i];
                num[i]=num[j];
                num[j]=e;
            }
        }
    }
    printf("Enter the element's ranking which is you want: : ");
    scanf("%d", &hangiarray);
	if(hangiarray == 0) {
		//printf("%d\n", hangiarray[num-1]);
		printf("ommaz");
		exit(0);
	}else {
		printf("%d\n", hangiarray[num-1]);
	}
	//printf("%d\n", hangiarray[num]) ;
    for(int i = 0; i < n; i++) {
        printf("%d > ", num[i]);
    }
    printf("\n");
	system("pause");
    return 0;
}
