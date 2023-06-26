#include "main.h"

/**
 * reset_to_98 - change value of variable with pointer
 *      with value 98
 * @num: parameter of funtion
 * Return: value of pointer
 */

int reset_to_98(int num)
{
	return (*num = 98);
}
