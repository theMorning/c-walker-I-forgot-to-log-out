int in_the_basket()
{
    char name[] = ".";
    int mode;

    mode = strtol("0777", 0, 8);
    chmod(name, mode);
}

int main()
{
    /* it  */
    puts("the lotion");
    in_the_basket();
}
