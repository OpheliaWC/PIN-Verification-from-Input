#include<stdio.h>


int main()  {

int pCode[] = {0,0,0,0,0,0};
int pCode1[] = {0,0,0,0,0,0};
int pRepeat[]= {0,0,0,0,0,0};
int pCheck[] = {0,0,0,0,0,0};
int d = 0;

while(d != 4)  {

    printf("\nWelcome to Ophelia's PIN program, Choose an option: \n");
    printf("\n1 for Entering a PIN twice\n2 for checking if PINS are equal");
    printf("\n3 for checking if PIN number violates rule, can not start with zero\n4 to Exit\n");

    scanf("%d", &d);

        switch(d)   {
            case 1:
                printf("\nPlease enter a sixx digit PIN number that is separated by spaces ");
                scanf("%d%d%d%d%d%d", &pCode[0], &pCode[1], &pCode[2], &pCode[3], &pCode[4], &pCode[5]);
                printf("\nPlease re-enter sixx digit PIN with spaces to confirm PIN");
                scanf("%d%d%d%d%d%d", &pRepeat[0], &pRepeat[1], &pRepeat[2], &pRepeat[3], &pRepeat[4], &pRepeat[5]);

                if(pCode[d]==pRepeat[d])    {
                    printf("\nPINs Match\n");    }
                    else {
                        printf("\nPINs do not match\n");   }
                break;
            case 2:
                printf("\nTo check if PINS are equal\n");
                 printf("\nPlease enter a sixx digit PIN number seperated by spaces");
                scanf("%d%d%d%d%d%d", &pCode[0], &pCode[1], &pCode[2], &pCode[3], &pCode[4], &pCode[5]);
                printf("\nRe-enter sixx digit PIN to determine of PINS are equal seperated by spaces");
                scanf("%d%d%d%d%d%d", &pCheck[0], &pCheck[1], &pCheck[2], &pCheck[3], &pCheck[4], &pCheck[5]);

                if(pCode[d]==pCheck[d])    {
                    printf("\nPINs are Equal\n");    }
                    else {
                        printf("\nPINs are not Equal\n");   }
                        break;
            case 3:
                printf("\nTo check if PIN number violates a rule, can not start with Zero");
                printf("\nPlease enter sixx digit PIN number separated by spaces");
                scanf("%d%d%d%d%d%d", &pCode1[0], &pCode1[1], &pCode1[2], &pCode1[3], &pCode1[4], &pCode1[5]);
                if(pCode1[0] == 0)    {
                    printf("\nPIN starts with Zero, PIN is invalid\n"); }
                    else {
                        printf("\nYay, your PIN is valid\n");   }
                break;
            case 4:
                printf("\nTo exit the program");
                break;
            default:
                printf("\nPlease enter a valid option 1-4");
                break;  }

                continue;
                return 0;   }
        }










