// inih-example.h
#ifndef INIH_EXAMPLE_H
#define INIH_EXAMPLE_H
typedef struct
{
    int version;
    const char* name;
    const char* email;
} configuration;

static int handler(void* user, const char* section, const char* name,
                   const char* value);
#endif // INIH_EXAMPLE_H
