#include <stdio.h>
#include <string.h>

// Structure definition
struct Hockey {
    char playerName[50];
    char countryName[50];
    int matchesPlayed;
    int goalsScored;
};

int main() {
    int n;
    printf("Enter the number of players: ");
    scanf("%d", &n);

    struct Hockey players[n];

    // Read player records
    for (int i = 0; i < n; i++) {
        printf("Enter details for player %d:\n", i + 1);
        printf("Player Name: ");
        scanf("%s", players[i].playerName);
        printf("Country Name: ");
        scanf("%s", players[i].countryName);
        printf("Number of Matches Played: ");
        scanf("%d", &players[i].matchesPlayed);
        printf("Number of Goals Scored: ");
        scanf("%d", &players[i].goalsScored);
        printf("\n");
    }

    // Sort the player records in descending order of goals scored using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (players[j].goalsScored < players[j + 1].goalsScored) {
                // Swap the player records
                struct Hockey temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }

    // Display the player records in descending order of goals scored
    printf("Player records in descending order of goals scored:\n");
    for (int i = 0; i < n; i++) {
        printf("Player Name: %s\n", players[i].playerName);
        printf("Country Name: %s\n", players[i].countryName);
        printf("Number of Matches Played: %d\n", players[i].matchesPlayed);
        printf("Number of Goals Scored: %d\n", players[i].goalsScored);
        printf("\n");
    }

    return 0;
}
