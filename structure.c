#include<stdio.h>
#include<string.h>

struct user_data {
    char* first_name;
    char* last_name;
    int birth_year;
} user_data_t;

struct config {
    user_data_t* users;
    size_t num_users;
    char* listen_hostname;
    int listen_port;
    double connection_ratio;
} config_t;


int main()
{
        struct user_data s1;
        strcpy(s1.first_name = "Georga");
        strcpy(s1.last_name = "Washington");
        s1.birth_year= 1732;
        printf("first_name is %s\n",s1.first_name);
        printf("last_name %s\n", s1.last_name);
        printf("birth_year: %d\n",s1.birth_year);

        struct config s2;
        s2.listen_hostname= "localhost";
        s2.listen_port=443;
       s2.connection_ratio=2.5;
       s2.num_users=2;

       printf("hostname: %s\n",s2.listen_hostname);
        printf("portname: %d\n", s2.listen_port);
        printf("ratios: %Ld\n",s2.connection_ratio);
        printf("users:%id\n",s2.num_users);
    return 0;
}

