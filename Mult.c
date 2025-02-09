void ULA_MUL(int8_t *A, int8_t *Q, int8_t *M, int8_t *overflow) {
    int16_t result = (int16_t)(*Q) * (int16_t)(*M);
    *A = (int8_t)(result >> 8); 
    *Q = (int8_t)(result & 0xFF); 
    *overflow = (*A != 0 && *A != -1); 
}