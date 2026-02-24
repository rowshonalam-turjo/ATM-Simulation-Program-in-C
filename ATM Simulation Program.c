#include<stdio.h>
#include<string.h>
#include <windows.h>

//Fixed Value
int PIN=1234;
float Balance=23.46;
int Id=1122;
int mob=3344;

int Change_PIN();
int Withdraw_Money();
int Deposit_Money();
int verification();


int Check_balance()
{
    int choice,temp_count=0;
    int temp_pin;
    int temp_Id,temp_mob;
    char pin_change_conformation[100];

    for(int i=0; i<3; i++)
    {
        system("cls");
        printf("Enter Your PIN: ");
        scanf(" %d",&temp_pin);
        system("cls");

        if(temp_pin==PIN)
        {
            printf("\nYour Current Balance : %.3f\n\n",Balance);
            Sleep(2000);
            goto start;
        }
        else
        {
            printf("Wrong PIN !");
            Sleep(1500);
            system("cls");
            temp_count++;
        }
    }
    if(temp_count == 3)
    {
        system("cls");
        getchar();
        printf("Do you want to change your PIN? (yes/no)  :");
        gets(pin_change_conformation);

        if(strcmp(pin_change_conformation, "Yes") == 0 ||strcmp(pin_change_conformation, "yes") == 0||strcmp(pin_change_conformation, "YES") == 0)
        {
            verification();

        }
        else if(strcmp(pin_change_conformation, "No") == 0 ||strcmp(pin_change_conformation, "no") == 0||strcmp(pin_change_conformation, "NO") == 0)
        {
            printf("Exit !");
            Sleep(1500);
            return 0;
        }
start:
        system("cls");
        printf("Press '1' for Home Screen.\n");
        printf("Press '0' for Exit.\n");
        printf("Enter Your Choice:");
        scanf(" %d",&choice);

        if(choice==0)
            return 0;
        else if(choice==1)
        {
            return 1;

        }


    }
}
int Deposit_Money()
{
    system("cls");
    float amount;
    int choice,temp_count=0;
    int temp_pin;

    char pin_change_conformation[100];

    for(int i=0; i<3; i++)
    {
        system("cls");
        printf("Enter Your PIN: ");
        scanf(" %d",&temp_pin);
        system("cls");

        if(temp_pin==PIN)
        {

            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0)
            {
                Balance += amount;

                printf("Deposit Successful!\n");
                Sleep(1000);
                system("cls");

                printf("New Balance: %.2f\n", Balance);
            }
            else
            {
                system("cls");
                printf("Invalid Amount!\n");
            }
            Sleep(2000);
            goto start;
        }
        else
        {
            printf("Wrong PIN !");
            Sleep(1500);
            system("cls");
            temp_count++;
        }
    }
    if(temp_count == 3)
    {
        system("cls");
        getchar();
        printf("Do you want to change your PIN? (yes/no)  :");
        gets(pin_change_conformation);

        if(strcmp(pin_change_conformation, "Yes") == 0 ||strcmp(pin_change_conformation, "yes") == 0||strcmp(pin_change_conformation, "YES") == 0)
        {
            verification();

        }
        else if(strcmp(pin_change_conformation, "No") == 0 ||strcmp(pin_change_conformation, "no") == 0||strcmp(pin_change_conformation, "NO") == 0)
        {
            printf("Exit !");
            Sleep(1500);
            return 0;
        }
start:
        system("cls");
        printf("Press '1' for Home Screen.\n");
        printf("Press '0' for Exit.\n");
        printf("Enter Your Choice:");
        scanf(" %d",&choice);

        if(choice==0)
            return 0;
        else if(choice==1)
        {
            return 1;

        }

    }



}
int  Withdraw_Money()
{
    system("cls");
    float amount;
    int choice,temp_count=0;
    int temp_pin;

    char pin_change_conformation[100];

    for(int i=0; i<3; i++)
    {
        system("cls");
        printf("Enter Your PIN: ");
        scanf(" %d",&temp_pin);
        system("cls");

        if(temp_pin==PIN)
        {

            printf("Enter amount to withdraw: ");
            scanf("%f",&amount);

            if (amount > 0 && amount <= Balance)
            {
                Balance -= amount;
                Sleep(1000);
                printf("Withdrawal Successful!\n");
                Sleep(1000);
                system("cls");
                printf("Remaining Balance: %.2f\n", Balance);
            }
            else
            {
                system("cls");
                printf("Insufficient Balance or Invalid Amount!\n");
            }
            Sleep(2000);
            goto start;
        }
        else
        {
            printf("Wrong PIN !");
            Sleep(1500);
            system("cls");
            temp_count++;
        }
    }
    if(temp_count == 3)
    {
        system("cls");
        getchar();
        printf("Do you want to change your PIN? (yes/no)  :");
        gets(pin_change_conformation);

        if(strcmp(pin_change_conformation, "Yes") == 0 ||strcmp(pin_change_conformation, "yes") == 0||strcmp(pin_change_conformation, "YES") == 0)
        {
            verification();

        }
        else if(strcmp(pin_change_conformation, "No") == 0 ||strcmp(pin_change_conformation, "no") == 0||strcmp(pin_change_conformation, "NO") == 0)
        {
            printf("Exit !");
            Sleep(1500);
            return 0;
        }
start:
        system("cls");
        printf("Press '1' for Home Screen.\n");
        printf("Press '0' for Exit.\n");
        printf("Enter Your Choice:");
        scanf(" %d",&choice);

        if(choice==0)
            return 0;
        else if(choice==1)
        {
            return 1;

        }

    }



}

int Change_PIN()
{
    system("cls");
    printf("Create New PIN: ");
    scanf("%d", &PIN);
    printf("PIN changed successfully!\n");
    Sleep(1500);
    system("cls");
}

int verification()
{
    int temp_Id,temp_mob;
    system("cls");
    printf("----Change PIN----\n");
    printf("Enter Your Id number: ");
    scanf("%d",&temp_Id);
    printf("Enter Your Mob number: ");
    scanf("%d", &temp_mob);

    if(temp_Id == Id && temp_mob == mob)
    {
        printf("Matched Successfully!");
        Sleep(1000);
        Change_PIN();

    }
    else
    {
        system("cls");
        printf("Wrong!\n");
    }

}

int main()
{
    int replay,old_pin;
    char go_verification[100];
home:
    printf("                                                 =====================================================\n");
    printf("\t\t\t\t\t\t =          ");
    printf("Welcome To ATM Simulation Program        =\n");
    printf("\t\t\t\t\t\t =\t\t\t\t\t\t     =\n");
    printf("\t\t\t\t\t\t =\t\t\t\t\t\t     =\n");
    printf("\t\t\t\t\t\t =\t 1.Check Balance.                            =\n");
    printf("\t\t\t\t\t\t =\t 2.Deposit Money.                            =\n");
    printf("\t\t\t\t\t\t =\t 3.Withdraw Money.                           =\n");
    printf("\t\t\t\t\t\t =\t 4.Change PIN.                               =\n");
    printf("\t\t\t\t\t\t =\t 5.Exit.                                     =\n");
    printf("\t\t\t\t\t\t =\t\t\t\t\t\t     =\n");
    printf("                                                 =====================================================\n");
    printf("\t\t\t\t\t\t\t Enter Your Replay:");
    scanf(" %d",&replay);
    system("cls");
    printf("Loading........");
    Sleep(1500);
    switch(replay)
    {
    case 1:
        int choice=Check_balance();
        if(choice==1)
        {
            system("cls");
            goto home;

        }
        break;
    case 2:
        int choice_Deposit_Money= Deposit_Money();
        if(choice_Deposit_Money==1)
        {
            system("cls");
            goto home;
        }
        break;
    case 3:

        int choice_Withdraw_Money= Withdraw_Money();
        if(choice_Withdraw_Money==1)
        {
            system("cls");
            goto home;
        }
        break;
    case 4:
        system("cls");
        printf("Enter OLD PIN :");
        scanf(" %d",&old_pin);
        system("cls");
        if(old_pin==PIN)
        {
            Change_PIN();
            system("cls");
        }
        else
        {
            system("cls");
            getchar();
            printf("Do you want to change your PIN another way? (Yes/No):");
            gets(go_verification);
            if(strcmp(go_verification, "Yes") == 0 ||strcmp(go_verification, "yes") == 0||strcmp(go_verification, "YES") == 0)
            {
                verification();

            }
            else if(strcmp(go_verification, "No") == 0 ||strcmp(go_verification, "no") == 0||strcmp(go_verification, "NO") == 0)
            {
                printf("Exit !");
                Sleep(1500);
                return 0;
            }

        }
        goto home;
        break;
    case 5:
        return 0;
        break;
    default :
        system("cls");
        printf("Wrong input\n");
        printf("Please Try Again");
        Sleep(1500);
        system("cls");
        goto home;
    }

}
