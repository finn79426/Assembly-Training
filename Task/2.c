/*
080483ed <main>:
 80483ed:	push   ebp
 80483ee:	mov    ebp,esp
 80483f0:	sub    esp,0x4	// 要求 4 byte 空間
 80483f3:	mov    BYTE PTR [ebp-0x1],0x41 // [ebp-0x1] 空間放入 1 byte 資料：0x41
 80483f7:	mov    eax,0x0
 80483fc:	leave  
 80483fd:	ret    
*/

int main(){
	// 由於是 BYTE PTR (只放入 1 Byte 資料)
	// 所以我們可以判斷他應該是 char
	char var = 0x41 // 'a'
	return 0;
}
