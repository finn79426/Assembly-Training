/*
080483ed <main>:
80483ed:push   ebp
80483ee:mov    ebp,esp
80483f0:sub    esp,0x4 // 申請 4 byte 空間
80483f3:mov    WORD PTR [ebp-0x2],0xa // 跟上一題不一樣，這次是佔用 2 byte (WORD) 來放 0xa
80483f9:mov    eax,0x0
80483fe:leave  
80483ff:ret
*/

int main(){
	/*
		------------    EBP
		|	0x00   |	EBP-1	WORD
		|   0x0a   |    EBP-2	WORD	
		| DontCare |	EBP-3
		| DontCare |	EBP-4	(ESP)
	*/
	short int var = 0xa; // 10
	return 0;
}
