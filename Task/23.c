/*
080483ed <main>:
80483ed:push   ebp
80483ee:mov    ebp,esp
80483f0:sub    esp,0x8	// 申請 8 byte 空間
80483f3:mov    DWORD PTR [ebp-0x4],0x4	// int
80483fa:mov    DWORD PTR [ebp-0x8],0x0	// int
8048401:mov    eax,DWORD PTR [ebp-0x4]
8048404:xor    al,0xff	// eax
8048406:mov    DWORD PTR [ebp-0x8],eax
8048409:mov    eax,0x0
804840e:leave  
804840f:ret  
 */

int main(){
	int var1 = 4;
	int var2 = 0;
	
	var2 = var1 ^ 0xff;

	return 0;
}

/*
|===============EAX===============|---32個0, 4 BYTE, 2 WORD, 1 DWORD
                  |======AX=======|---16個0, 2 BYTE, 1 WORD
                  |==AH===|        ---8個0 , 1 BYTE
                          |===AL==|---8個0 , 1 BYTE
*/
