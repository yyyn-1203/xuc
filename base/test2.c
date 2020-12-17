# include <stdio.h>

/*一
int main()
{
    printf("Xu Yinan\n");
    printf("Xu\nYinan\n");
    printf("Xu ");
    printf("Yinan");

    return 0;
}
*/

/*三
int main()
{
    int age,age_day;

    age = 22;
    age_day = 22*365;

    printf("%d,%d",age,age_day);

    return 0;
}
*/

/*四
void jolly(void);
void deny(void);

int main(){
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly(){
    printf("For he's a jolly good fellow!\n");
}

void deny(){
    printf("Which body can deny!");
}
*/

/*五
void br(void);
void ic(void);

int main(){
    br();
    printf(", ");
    ic();
    printf("\n");
    br();
    printf("\n");
    ic();

   return 0;
}

void br(){
    printf("Brazil, Russia");
}
void ic(){
    printf("India, China");
}
*/

void one_three(void);
void two(void);

int main(){
    printf("starting now:\n");
    one_three();
    two();
    printf("three\ndone!");

    return 0;
}

void one_three(){
    printf("one\n");
}
void two(){
    printf("two\n");
}