#ifndef MODULE_INCLUDED
#define MODULE_INCLUDED

// Can use '@' or '\'

/**
 * @headerfile module.h "module.h"
 *
 * Documentation for the file.
 * Could also use @file?
 */

/**
 * @brief   Execute the first function in the module.
 *
 * This is a the body of the description.
 * This function takes no arguments, does nothing, and returns nothing.
 * It simply provides Doxygen with something to document.
 *
 * @return  A descsription of the returned value - in this case, nothing.
 */
void module_function_1();

/**
 * @brief   Execute the second function in the module.
 *
 * This function takes an argument but does nothing.
 * It simply provides Doxygen with something to document.
 *
 * @param   the_param   This is the parameter.
 * @return  Nothing.
 */
void module_function_2(int the_param);

/**
 * @brief   Execute the third function in the moudle.
 *
 * This function takes an input and an output argument but does nothing.
 * It simply provides Doxygen with something to document.
 *
 * @param[in]   input   This is the input parameter.
 * @param[out]  output  This is the output parameter.
 */
void module_function_3(int input, int *output);

#endif
