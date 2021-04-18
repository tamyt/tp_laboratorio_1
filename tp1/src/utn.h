#ifndef UTN_H_
#define UTN_H_
/**
 * \brief Solicita un numero al usuario
 * \param float* resultado, puntero al espacio de memoria donde se dejarà el valor obtenido.
 * \param char* mensaje, es el mensaje a ser mostrado al usuario.
 * \param char* mensajeError, es el mensaje de error a ser mostrado al usuario.
 * \param int minimo,valor minimo admitido.
 * \param int maximo,valor maximo admitido.
 * \param int reintentos,cantidad de reintentos permitidos.
 * \return (-1) Error / (0) Ok
 *
 */
int utn_getNumero(float* resultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
/**
 * \brief Suma numero1 y numero2
 * \param float* resultado, puntero al espacio de memoria donde se dejarà el valor obtenido.
 * \param float numero1,primer operando.
 * \param float numero2,segundo operando.
 * \return (-1) Error / (0) Ok
 */
int sumar(float* resultado,float numero1,float numero2);
/**
 * \brief Resta numero1 y numero2
 * \param float* resultado, puntero al espacio de memoria donde se dejarà el valor obtenido.
 * \param float numero1,primer operando.
 * \param float numero2,segundo operando.
 * \return (-1) Error / (0) Ok
 */
int restar(float* resultado,float numero1,float numero2);
/**
 * \brief Multiplica numero1 por numero2
 * \param float* resultado, puntero al espacio de memoria donde se dejarà el valor obtenido.
 * \param float numero1,primer operando.
 * \param float numero2,segundo operando.
 * \return (-1) Error / (0) Ok
 */
int multiplicar(float* resultado,float numero1,float numero2);
/**
 * \brief Divide numero1 por numero2
 * \param float* resultado, puntero al espacio de memoria donde se dejarà el valor obtenido.
 * \param float numero1,primer operando.
 * \param float numero2,segundo operando.
 * \return (-1) Error / (0) Ok
 */
int dividir(float* resultado,float numero1,float numero2);
/**
 * \brief Saca factorial del numero ingresado
 * \param float* resultado, puntero al espacio de memoria donde se dejarà el valor obtenido.
 * \param float numero ingresado con el que sacamos su factorial.
 * \return (-1) Error / (0) Ok
 */
int sacarFactorial(float* resultado,float numero);


#endif /* UTN_H_ */
