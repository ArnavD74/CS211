#include <stdio.h>
#include <string.h>
typedef struct Album // name of struct
{
  char *name;
  int numSongs;
} album_t; // defines alias

// instead of typing struct album a, you can now just write album_t a;

typedef struct Song
{
  char title[50];
  int length;
  album_t *album;
} song_t; // _t is common convention to represent a type

int main()
{
  album_t test_album;
  song_t test_song;

  test_album.name = "C Programming";
  test_album.numSongs = 1;

  strcpy(test_song.title, "Structs");
  test_song.length = 120;
  test_song.album = &test_album;
  
  printf("Album name: %s\n", test_song.album->name);
  // same things as
  // printf("%s\n", (*(test_song.album)).name);

  printf("test_album: %ld,\ntest_song %ld,\nchar: %ld,\nint: %ld,\nalbum_t*: %ld\n",
         sizeof(test_album), sizeof(test_song), sizeof(char), sizeof(int),
         sizeof(album_t *));
}