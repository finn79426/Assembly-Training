/*
080483ed <main>:
 80483ed:       push   ebp
 80483ee:       mov    ebp,esp
 80483f0:       sub    esp,0x8	// 申請 8 byte
 80483f3:       mov    DWORD PTR [ebp-0x4],0x1
 80483fa:       mov    eax,DWORD PTR [ebp-0x4]	// eax = 0x1
 80483fd:       cmp    eax,0x2 // if(eax == 0x2)
 8048400:       je     8048412 <main+0x25>
 8048402:       cmp    eax,0x3 // if (eax == 0x3)
 8048405:       je     8048418 <main+0x2b>
 8048407:       cmp    eax,0x1 // if (eax != 0x1)
 804840a:       jne    804841e <main+0x31>		// 這行 jne 等於直接跟 default case 和 case 1 做合併
 804840c:       mov    BYTE PTR [ebp-0x5],0x41
 8048410:       jmp    8048423 <main+0x36>
 8048412:       mov    BYTE PTR [ebp-0x5],0x42
 8048416:       jmp    8048423 <main+0x36>
 8048418:       mov    BYTE PTR [ebp-0x5],0x43
 804841c:       jmp    8048423 <main+0x36>
 804841e:       mov    BYTE PTR [ebp-0x5],0x44
 8048422:       nop
 8048423:       mov    eax,0x0
 8048428:       leave  
 8048429:       ret  
 */

int main(){
	// 若省略花指令(必定不會觸發的指令)，則解讀出來的行為會是長這樣：
	int var = 0x1;
	char chr = 0x41; // 'A'
	return 0;

	/*****************************************************************/
	// 但我們的目的是能夠還原出原本開發者寫的 C code，所以能解讀花指令就解讀出來
	
	int var = 0x1;
	// 因為 eax 跟 var 的數值都一樣，所以直接拿 var 來做比較也 OK (追蹤 Code 會比較好讀)
	if(var == 2){
		char chr = 0x42; // 'B'
	}
	
	if(var == 3){
		char chr = 0x43; // 'C'
	}
	
	if(var != 1){
		char chr = 0x44; // 'D'
	}
	
	char chr = 0x41; // 'A'
	
	return 0;
	
	/*****************************************************************/
	// 整理出脈絡後，我們可以開始往更精簡的 C code 邁進，越精簡就越符合開發者寫的 Code
	// 從上面可以發現到 var 會比較 2, 3 是否相等，這邊可以用 switch 來做
	
	switch(var){
	  case 2:
		char chr = 0x42; // 'B'
		break;
	  case 3:
		char chr = 0x43; // 'C'
		break;
	}
	
	if(var != 1){
		char chr = 0x44; // 'D'
	}
	
	char chr = 0x41; // 'A'	
	
	return 0;
	
	/*****************************************************************/
	// 從上面的解讀來看，跟開發者會寫的 Code 還是差一段距離...
	// 畢竟很少開發者會用 B -> C -> D -> A 的比較流程
	// default case 的判斷：如果上面所有 case 都沒有匹配，才會執行 default case
	// 從 if 到賦值 0x41 的 code 可以看出一些端倪，它其實跟 case 1 合併了！
	switch(var){
	  case 2:
		char chr = 0x42; // 'B'
		break;
	  case 3:
		char chr = 0x43; // 'C'
		break;
	  case 1:
	  	char chr = 0x41; // 'A'
	  	break;
	  default:
	  	char chr = 0x44; // 'B'
	  	break;
	}
	
	return 0;
	
	/*****************************************************************/
	// 最後在把 switch case 調換一下順序吧～反正不影響程式結果，好讀一些有何不可？
	switch(var){
	  case 1:
	  	char chr = 0x41; // 'A'
	  	break;
	  case 2:
		char chr = 0x42; // 'B'
		break;
	  case 3:
		char chr = 0x43; // 'C'
		break;
	  default:
	  	char chr = 0x44; // 'B'
	  	break;
	}
	
	return 0;	
}
