#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#include <stdio.h>  
#include <stdlib.h>  
#include<string.h>
#include "a.h"
typedef Fraction value_type;
typedef double key_type;
#include "sorted_list.h"
#define INSERTED_ORDER 1
#define SORTED_ORDER 2

/* function description
 * filter the values using function pointer.
 * @param Sorted_list * Sorted_list pointer
 * @param value_type (*f)(value_type) test function pointer
 * @return Sorted_list pointer of new link list with filtered values.
 */
Sorted_list * filter( Sorted_list * old_list_detail, int  (*f)(value_type));

/* function description
 * map the values using function pointer.
 * @param Sorted_list * Sorted_list pointer
 * @param value_type (*f)(value_type) function pointer
 * @return Sorted_list pointer of new link list.
 */
Sorted_list * map( Sorted_list * old_list_detail, value_type (*f)(value_type));

/* function description
 * reduce the values of link list using function pointer.
 * @param Sorted_list * Sorted_list pointer
 * @param int (*f)(value_type*,value_type*,value_type*) function pointer
 * @param value_type init
 * @param int order specify order while reducing 
 * @return value_type single value after reduce
 */

value_type reduce( Sorted_list * list_detail, int (*f)(value_type*, value_type*, value_type*),value_type init,int order);

/* function description
 * first applying map, and then reduce using function pointers for both
 * @param Sorted_list * Sorted_list pointer
 * @param value_type (*map_fn)(value_type) function pointer for map
 * @param value_type (*reduce_fn)(value_type,value_type) function pointer for reduce
 * @param value_type init
 * @param int order specify order while reducing
 * @return value_type return single value.
 */

value_type map_reduce( Sorted_list * list_detail, value_type (*map_fn)(value_type), value_type (*reduce_fn)(value_type,value_type),value_type init,int order);
 
/* function description
 * first applying map, and then reduce using function pointers for both
 * @param Sorted_list * first Sorted_list pointer 
 * @param Sorted_list * second Sorted_list pointer
 * @param value_type (*map_fn)(value_type) function pointer for map
 * @param int order specify order while reducing
 * @return value_type * return array of value_type.
 */

value_type * map_2_array( Sorted_list * list1,Sorted_list * list2, value_type (*map_fn)(value_type,value_type),int order);
/* function description
 * first applying map, and then reduce using function pointers for both
 * @param Sorted_list * first Sorted_list pointer
 * @param Sorted_list * second Sorted_list pointer
 * @param value_type (*map_fn)(value_type) function pointer for map
 * @param value_type (*reduce_fn)(value_type, value_type) function pointer for reduce
 * @param value_type init
 * @param int order specify order while reducing
 * @return value_type return single value.
 */

value_type  map_2_reduce( Sorted_list * list1,Sorted_list * list2, value_type (*map_fn)(value_type,value_type),value_type (*reduce_fn)(value_type,value_type),value_type init,int order);

#endif
