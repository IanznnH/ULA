void ULA_MUL(int8_t *A, int8_t *Q, int8_t *M, int8_t *overflow) {
    int16_t result = (int16_t)(*Q) * (int16_t)(*M);//Multiplica os operadores de 8 bits
    
    int8_t upper_part = (int8_t)(result >> 8); //Parte mais alta dos bits
    int8_t lower_part = (int8_t)(result & 0xFF);//Parte mais baixa dos bits

    *A = upper_part;
    *Q = lower_part;

    if (upper_part != 0 && upper_part != -1) {//Verifica se tem overflow ou não
        *overflow = 1; 
    } else {
        *overflow = 0; 
    }
}
