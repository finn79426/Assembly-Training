/*
080483ed <main>:
 80483ed:       push   ebp
 80483ee:       mov    ebp,esp
 80483f0:       sub    esp,0x4	// 申請 4 byte 空間
 80483f3:       mov    DWORD PTR [ebp-0x4],0x0	// int
 80483fa:       jmp    8048408 <main+0x1b>
 80483fc:       cmp    DWORD PTR [ebp-0x4],0x64
 8048400:       jle    8048404 <main+0x17>
 8048402:       jmp    8048408 <main+0x1b>
 8048404:       add    DWORD PTR [ebp-0x4],0x1
 8048408:       cmp    DWORD PTR [ebp-0x4],0x63
 804840c:       jle    80483fc <main+0xf>
 804840e:       mov    eax,0x0
 8048413:       leave  
 8048414:       ret  
 */
 
 /*
int main(){
 	int var = 0;
 	if(var <= 0x63){ // 99
 		if(var <= 0x64){ // 100
 			var += 1;
 			// back to first 'if'
 		}
 	}

 	return 0;
}
*/
 
/* 
int main(){
 	int var = 0;
 	
 	while(var <= 0x63){
 		if(var <= 0x64){
 			var += 1;
 		}
 	}

}
*/

// 這題我也覺得出的不太好
// 原因是如果 while 判斷不成立，那 while 裡面的 if 根本不會碰到
// 以反組譯的方式來還原原本的 C code，官方解答反而會看起來有些牽強
// 底下官方解答

int main(){

  int var = 0;

  while(var <= 0x63){
    if(var <= 0x64)
      continue;
    var++;
  }
  return 0;
}
