#include <assert.h>
#include "filesystemcrud_functions.c"

int main(){

assert(criar_cha("Alfazema") == 0);

assert(ler_cha("Alfazema") != 0);

assert(remover_cha("Alfazema") != 0 );

printf("todos os testes passaram!!!!");

return 0;

}
