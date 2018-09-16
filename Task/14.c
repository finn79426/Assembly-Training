/*
080483ed <main>:
 80483ed:       push   ebp
 80483ee:       mov    ebp,esp
 80483f0:       sub    esp,0x4 // 申請 4 byte 空間
 80483f3:       mov    DWORD PTR [ebp-0x4],0xa	// int
 80483fa:       cmp    DWORD PTR [ebp-0x4],0x1
 80483fe:       jne    8048402 <main+0x15>
 8048400:       jmp    8048417 <main+0x2a>
 8048402:       cmp    DWORD PTR [ebp-0x4],0x2
 8048406:       jne    8048417 <main+0x2a>
 8048408:       nop
 8048409:       mov    DWORD PTR [ebp-0x4],0x0
 8048410:       mov    eax,0x0
 8048415:       jmp    804841c <main+0x2f>
 8048417:       mov    eax,0x1
 804841c:       leave  
 804841d:       ret    
 */

/*
int main(){
	int var = 0xa; // 10
	if(var != 0x1){
		if(var != 0x2){
			return 1;
		}
	}
	
	return 1;
}
*/

// 老實說這題解的我一臉懵逼...正確解答居然是 goto ?!
// 0x8048408 ~ 0x8048410 一整個就很怪，從頭到尾沒有 jmp 到這...居然可以被 compiler 編進來...
// 覺得這題出的不是很好，不應該用 return 的，通靈才能解出來吧Orz

int main(){
  int var = 10;
  
  if(var == 1){
    goto label1;
  }else if(n == 2){
    goto label2;
  }
  
 label1:
  return 1;
  
 label2:
  n = 0;
  
  return 0;
}
