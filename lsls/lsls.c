#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  char *directory = argv[1];

  if (argv[1] == NULL)
  {
    char str[] = ".";
    directory = str;
  }
  // printf("%d\n", argc);
  // printf("%s\n", dir);

  // Open directory
  DIR *dir = opendir(directory);
  // Repeatly read and print entries
  while (1)
  {
    struct dirent *ent;
    ent = readdir(dir);
    if (ent == NULL)
    {
      break;
    }
    struct stat buf;
    stat(ent, &buf);
    // printf("S_IFDIR: %d\n", S_IFDIR);
    // printf("buf.st_mode: %d\n", buf.st_mode);
    if (buf.st_mode & S_IFDIR)
    {
      printf("<DIR> %s\n", ent->d_name);
    }
    else
    {
      printf("%lld %s\n", buf.st_size, ent->d_name);
    }
  }
  // Close directory
  closedir(dir);
  return 0;
}