/*
0804841d <main>:
804841d:push   ebp
804841e:mov    ebp,esp
8048420:sub    esp,0xc	// 申請 12 byte 空間
8048423:mov    DWORD PTR [ebp-0x4],0x7e0	// int
804842a:mov    eax,DWORD PTR [ebp-0x4]		// eax = 0x7e0
804842d:mov    DWORD PTR [esp+0x4],eax		// send to prinf_argument
8048431:mov    DWORD PTR [esp],0x80484e0	// 0x80484e0 存著 "Year = %d"
8048438:call   80482f0 <printf@plt>			// push 0x804843d ; jmp 0x80482f0
804843d:mov    eax,0x0						// 此時 esp = 0x8048e0 ; eip = 0x804843d
8048442:leave  
8048443:ret    
*/
#include <stdio.h>

int main(){
	int var = 0x7e0; // 2016
	
	printf("Year = %d", var);
	
}x`
