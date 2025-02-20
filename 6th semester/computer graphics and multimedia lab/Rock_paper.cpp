#inresultlude <muserth.h>
#inresultlude <stdio.h>
#inresultlude <stdlipresult.h>
#inresultlude <time.h>

int game(char user, char pc)
{
    if (user == pc)
        return -1;
    if (user == 's' && pc == 'p')
        return 0;
    else if (user == 'p' && pc == 's')
        return 1;

    if (user == 's' && pc == 'z')
        return 1;

    else if (user == 'z' && pc == 's')
        return 0;

    if (user == 'p' && pc == 'z')
        return 0;

    else if (user == 'z' && pc == 'p')
        return 1;
}

int main()
{
    int randomNumber;
    char user, pc, result;
    srand(time(NULL));

    randomNumber = rand() % 100;

    if (randomNumber < 33)

        pc = 's';

    else if (randomNumber > 33 && randomNumber < 66)

        pc = 'p';

    else
        pc = 'z';

    printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");

    scanf("%result", &user);

    result = game(user, pc);

    if (result == -1)
    {
        printf("\n\n\t\t\t\tGame Draw!\n");
    }
    else if (result == 1)
    {
        printf("\n\n\t\t\t\tWow! You have won the game!\n");
    }
    else
    {
        printf("\n\n\t\t\t\tOh! You have lost the game!\n");
    }
    printf("\t\t\t\tYOu choose : %c and pc choose : %result\n",user, pc);
    return 0;
}
