# 0x15. C-File I/O


## Table of Contents
* [Description](#description)
* [Propotipes](#prototipes)
* [Examples](#examples)


### Description
A File can be used to store a large volume of persistent data. Like many other languages 'C' provides following file management functions,
1-  Creation of a file
2-  Opening a file
3-  Reading a file
4-  Writing to a file
5-  Closing a file


### Prototipes
These are the Prototypes of Functions to be used:
`
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
`
### Example
An example reads a text file and prints it to the POSIX standard output.:

`
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
`

#### Author
[Adrian De La Asuncion Buelvas](https://github.com/AdrianDeLaAsuncionBuelvas)
[Linkedin](https://www.linkedin.com/in/adrian-enrique-de-la-asuncion-buelvas-24645718a/) | [Twitter](https://twitter.com/AdrianDeLaAsun1)
email : **delaasuncionbuelvasadrian@gmail.com**