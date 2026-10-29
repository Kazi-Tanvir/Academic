// Cumulative Skills Check 3: Simple CD collection database on disk
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CDS 50

char artists[MAX_CDS][80];
char albums[MAX_CDS][80];
int tracks[MAX_CDS];
int cd_count = 0;

// Displays a CD entry
void display_cd(int i)
{
    printf("Album: %s | Artist: %s | Tracks: %d\n", albums[i], artists[i], tracks[i]);
}

// Saves database to disk
void save_db(void)
{
    FILE *fp;
    int i;

    if ((fp = fopen("cd_db.bin", "wb")) == NULL) {
        printf("Error opening database file for writing.\n");
        return;
    }
    fwrite(&cd_count, sizeof(int), 1, fp);
    for (i = 0; i < cd_count; i++) {
        fwrite(artists[i], 80, 1, fp);
        fwrite(albums[i], 80, 1, fp);
        fwrite(&tracks[i], sizeof(int), 1, fp);
    }
    fclose(fp);
    printf("Database saved.\n");
}

// Loads database from disk
void load_db(void)
{
    FILE *fp;
    int i;

    if ((fp = fopen("cd_db.bin", "rb")) == NULL) {
        printf("No existing database file found.\n");
        return;
    }
    if (fread(&cd_count, sizeof(int), 1, fp) != 1) {
        fclose(fp);
        return;
    }
    for (i = 0; i < cd_count; i++) {
        fread(artists[i], 80, 1, fp);
        fread(albums[i], 80, 1, fp);
        fread(&tracks[i], sizeof(int), 1, fp);
    }
    fclose(fp);
    printf("Database loaded (%d CDs).\n", cd_count);
}

// Entry point of the program
int main(void)
{
    // Initialize sample CD
    strcpy(artists[0], "Pink Floyd");
    strcpy(albums[0], "The Dark Side of the Moon");
    tracks[0] = 10;
    cd_count = 1;

    save_db();
    load_db();
    display_cd(0);
    remove("cd_db.bin");

    return 0;
}
