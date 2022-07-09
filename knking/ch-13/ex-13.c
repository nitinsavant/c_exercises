#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url) {
    strcpy(index_url, "http://www.");
    strcat(strcat(index_url, domain), "/index.html");
}

int main(void) {
    char index_url[50];
    build_index_url("knking.com", index_url);
    printf("%s\n", index_url);
}
