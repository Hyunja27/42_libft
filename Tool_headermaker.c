#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <dirent.h>

void    ft_pharse_cfile(char *filename, int fdnum)
{
    char buffer[100];
    int i = 0;
    int j = 0;
    FILE *fd ;

    fd = NULL;
    memset(buffer, 0, 100);
    i = 0;
    fd = fopen(filename, "r");
    if (fd == NULL)
        exit (-1);
    while (fgets(buffer, 100, fd))
    {
        if (buffer[0] == '\t' || buffer[0] == '}' || buffer[0] == '{' ||
            buffer[0] == '/' || buffer[0] == '\n' || buffer[0] == '#' ||
            buffer[0] == '0' || buffer[0] == ' ')
            continue;
        else
        {
            /*while (buffer[i] != '\n')
            {
                if (buffer[i] == '\t' && buffer[i + 1] == '\t' && buffer[i + 2] == '\t')
                {
                    while (buffer[i + 3])
                    {
                        buffer[i + 1] = buffer[i + 2];
                        i++;
                    }
                }

                if (buffer[i] == '\t' && buffer[i + 1] != '\t')
                {
                    while (buffer[i + 2])
                    {
                        buffer[i + 1] = buffer[i + 2];
                        i++;
                    }
                }
                i++;
            }*/
            printf("%s",buffer);
            write(fdnum, &buffer, strlen(buffer));
            i = 0;
        }
    }
    fclose(fd);
}

char *ft_strjoin(char *str1, char *str2, char *str3)
{
    int len;
    char *returnstr;

    returnstr = NULL;
    len = 0;
    len += strlen(str1);
    len += strlen(str2);
    len += strlen(str3);

    if (!(returnstr = malloc(sizeof(char) * (len + 1))))
        exit(0);
    else
    {
        strcpy(returnstr,str1);
        strcat(returnstr,str2);
        strcat(returnstr,str3);
    }
    return returnstr;
}

void ft_dirname(char *path, int fd)
{
    DIR *dir_status;
    struct dirent *dir_entry;
    char *newpath;

    dir_status = opendir(path);
    if (dir_status != NULL)
    {
        while ((dir_entry = readdir(dir_status)))
        {
            if (!strcmp(dir_entry->d_name, "."))
                continue;
            else if (!strcmp(dir_entry->d_name, ".."))
                continue;

            newpath = ft_strjoin(path, "/", dir_entry->d_name);

            if (dir_entry->d_type == DT_DIR)
            {
                printf("Directory name: %s\n", dir_entry->d_name);
                ft_dirname(newpath, fd);
            }
            else if (dir_entry->d_namlen >= 3 &&
                dir_entry->d_name[dir_entry->d_namlen - 2] == '.' &&
                dir_entry->d_name[dir_entry->d_namlen - 1] == 'c')
            {
                printf(" -File name: %s\n", dir_entry->d_name);
                ft_pharse_cfile(newpath, fd);
            }
        }
        closedir(dir_status);
    }
}

int main(int ac, char **av)
{
    int fd;

    fd = open(av[1],O_CREAT | O_RDWR,0644);
    if (fd == -1)
        exit (-1);
    ft_dirname(".", fd);
    close(fd);
    return (0);
}
