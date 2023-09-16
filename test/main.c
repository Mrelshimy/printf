#include "main.h"

int main(){
		int ret ;
		int ret2;
		ret2 = _printf("abcndaw%");
		printf("ret2 = %d\n", ret2);
		ret = printf("abcndaw%");
		printf("return = %d", ret);
		printf("\n");
	        _printf("Hello code\n");
		_printf("Hello %world\n");
		_printf("%");
		_printf("Hello %sorld\n", "WO");
		_printf("% Hello %%world\n");
		_printf("Hello %c world\n", 'H');
								    
			    return(ret);
}
