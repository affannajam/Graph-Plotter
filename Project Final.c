#include <stdio.h>

// DISPLAYING AND PLOTTING POINTS ON THE GRAPH (AFFAN NAJAM)
void plotGraph(int x[], int y[], int n) {
    int i, j, k, quadrant;
    printf("\n\n");
    
    for (i = 10; i >= -10; i--) {
        for (j = -10; j <= 10; j++) {
            int found = 0;
            for (k = 0; k < n; k++) {
                if (x[k] == j && y[k] == i) {
                    found = 1;
                    break;
                }
            }
            
            if (found) {
                printf("  ");
            } else if (i == 0 && j == 0) {
                printf("+ ");
            } else if (i == 0) {
                printf("- ");
            } else if (j == 0) {
                printf("| ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
// DISPLAYING THE QUADRANTS FOR EACH POINT (ADNAN MURTAZA)
void displayQuadrant(int x[], int y[], int n)
{
    int i, j, quadrant;
    printf("\n");
    for (i = 0; i < n; i++) {
        if (x[i] > 0 && y[i] > 0) {
            quadrant = 1;
        } else if (x[i] < 0 && y[i] > 0) {
            quadrant = 2;
        } else if (x[i] < 0 && y[i] < 0) {
            quadrant = 3;
        } else if (x[i] > 0 && y[i] < 0) {
            quadrant = 4;
        } else if (x[i] == 0 && y[i] == 0){
            quadrant = 0; // On axis
        }
        printf("Point (%d, %d) is in quadrant %d\n", x[i], y[i], quadrant);
    }
}


int main() {
    int n, i;
    char choice;
    char username[50];
    char password[50];
    int correct = 0;

    // LOGIN (NAND LAL)
    printf("\n\nEnter your Username: ");
    fgets(username, sizeof(username), stdin);
    printf("Enter your Password: ");
    fgets(password, sizeof(password), stdin);
    
    while(correct == 0)
    {
        if ((username[0] == 'a' && username[1] =='d' && username[2] =='n' && username[3] =='a' && username[4] =='n') &&
        (password[0] =='a'&&password[1] =='d'&&password[2]=='n'&& password[3]=='1'&&password[4]=='2' && password[5] =='3'))
        {correct = 1;}

        else if (username[0] == 'a' && username[1] =='f' && username[2] =='f' && username[3] =='a' && username[4] =='n' &&
        password[0]=='a'&&password[1]=='f'&&password[2]=='n'&& password[3]=='1'&&password[4]=='2' && password[5]=='3')
        {correct = 1;}

        else if (username[0] == 'n' && username[1] =='a' && username[2] =='n' && username[3] =='d' &&
        password[0]=='n'&&password[1]=='a'&&password[2]=='n'&& password[3]=='d'&&password[4]=='1' && password[5]=='2' && password[6]=='3')
        {correct = 1;}

        else if (username[0] == 't' && username[1] =='e' && username[2] =='h' && username[3] =='r' && username[4] =='e' && username[5] =='e' && username[6] =='m' &&
        password[0]=='t'&&password[1]=='e'&&password[2]=='h'&& password[3]=='1'&&password[4]=='2' && password[5]=='3')
        {correct = 1;}

        else
        {
            correct = 0;
            printf("Invalid username or Password. Please re-enter credentials\n\n");
            printf("Enter your Username: ");
            fgets(username, sizeof(username), stdin);
            printf("Enter your Password: ");
            fgets(password, sizeof(password), stdin);
        }

    }
    printf("\n\n\t\t\tWELCOME TO OUR GRAPH PLOTTER\n\n");

    // MAIN & INPUT (AFFAN NAJAM)
    do {
        printf("\nHow many points do you want to plot? ");
        scanf("%d", &n);

        int x[n], y[n];
        for (i = 0; i < n; i++) {
            printf("\nEnter x-axis for point %d: ", i + 1);
            scanf("%d", &x[i]);
            printf("Enter y-axis for point %d: ", i + 1);
            scanf("%d", &y[i]);
        }

        plotGraph(x, y, n);
        displayQuadrant(x, y, n);

        printf("\nDo you want to create a new graph? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
