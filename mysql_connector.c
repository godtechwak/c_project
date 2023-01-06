#include <mysql.h>
#include <stdio.h>
#include <stdlib.h>

#define host_name "127.0.0.1"
#define user_name "root"
#define password "암호 작성"
#define db_name "test"
#define port_num 3306
#define socket_name NULL

int main(int argc, char *argv){

        MYSQL my_conn; //커넥션 핸들러에 대한 포인터

        mysql_init(&my_conn);

        if (mysql_real_connect(&my_conn, host_name, user_name, password, db_name, port_num, socket_name, 0)) {
                printf("Connection success \n");

        }
        else {
                fprintf(stderr, "Failed to connect to databases: Error %s\n", mysql_error(&my_conn));
                mysql_error(&my_conn);
        }

        mysql_close(&my_conn);

        return EXIT_SUCCESS;

        /*

        printf("MySQL client version %s\n", mysql_get_client_info());

        exit(0);

        */

}
