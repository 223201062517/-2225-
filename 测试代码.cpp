#undef QQQdialect 
#undef QQQ146
#undef QQQ148
#undef QQQbndchk
/*  Note: for BITMAP execution histories QQQthreaded is not defined */
#undef QQQthreaded
#define QQQdo178b
#undef QQQfixbra
#undef QQQswitch3
#undef QQQternary
#define QQQswitch
#define qqqMaxBranchDepth      2
static int zzfileid = 8 ;
#undef QQQFORKFL
#undef QQQIADDRF
#undef QQQADRMOD
#undef QQQDCAPFL
#undef QQQCOMPRESSED_EXH
#define QQQMAINFL
#undef QQQSINGLEFILE
#undef QQQFILEID
#undef QQQseparate
static int ytprogramzzopen = 0 ;
#ifndef FILE
#include <stdio.h>
/*  If stdio.h is not available then insert:   typedef int * FILE;
#endif
*/
#endif
#undef QQ_ANSI_PROTOTYPE   
#ifdef __STDC__    
#define QQ_ANSI_PROTOTYPE 1 
#else      
#ifdef VAXC  
#define QQ_ANSI_PROTOTYPE 1    
#endif   
#endif 
#define QQQnumfil 40  /* default setting */   
#define LDRA_DUBLIN    
static int diagopen = 0 ;
#define qqzzidfield 3   
static int ytprogramzqqzqz();
static int ytprogramzqqzqz1();
static int ytprogramzzqqzz (int qqqi);
static int ytprogramzqzqzq (int qqqi);
static int ytprogramzqfqzz (int qqqi);
static int ytprogramzzzqtz (int qqqa,int qqqb);
static int ytprogramzzzqfz (int qqqa,int qqqb);
static int ytprogramzzdo17(int a,int b);
static int ytprogramzzqqzzFULine (int nLine);
static int ytprogramzzqqzzFU0(int nLine1,int Result,int nLine);
/*-------------  END OF PLTEST PROTOTYPES ------------------------------*/ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#if defined(PLDYN_ISOLATE_FUN_1
void user_define(int n,int max){ 
int yutianzfp1=ytprogramzzqqzz( 6); int i, j= 0, array[ 50], r, i1 ; 
srand(( unsigned int)
time( NULL)); 
printf( "璇疯緭鍏ュ弬涓庤繍绠楃殑绗﹀彿(鏈€澶?0涓?锛歕n1锛氬姞鍙凤紝2锛氬噺鍙凤紝3锛氫箻鍙凤紝4锛氶櫎鍙凤紝5:(绗﹀彿锛?锛?绗﹀彿锛?锛氬皬鏁扮偣0锛氱粨鏉?); 
ytprogramzzqqzz( 10); for 
(



(i=0)
; 



(i<50)
; 




(i++)
)
{ 
int yutianzfp2=ytprogramzzqqzz( 26); scanf( "%d",& array[ i]); 
j++; 
ytprogramzzqqzz( 28); if 


(array[i]==0){ 
int yutianzfp3=ytprogramzzqqzz( 33); break ; 
ytprogramzzqqzz( 34); } 
ytprogramzzqqzz( 35); } 
ytprogramzzqqzz( 36); for 
(



(i=0)
; 



(i<n)
; 




(i++)
)
{ 
int yutianzfp4=ytprogramzzqqzz( 52); r=
rand()% max ; 
ytprogramzzqqzz( 54); for 
(



(i1=0)
; 



(i1<j)
; 




(i1++)
)
{ 
int yutianzfp5=ytprogramzzqqzz( 70); r=
rand()% max ; 
ytprogramzzqqzz( 72); if 


(array[i1]==1){ 
int yutianzfp6=ytprogramzzqqzz( 77); printf( "%d+", r); 
ytprogramzzqqzz( 78); } 
ytprogramzzqqzz( 79); if 


(array[i1]==2){ 
int yutianzfp7=ytprogramzzqqzz( 84); printf( "%d-", r); 
ytprogramzzqqzz( 85); } 
ytprogramzzqqzz( 86); if 


(array[i1]==3){ 
int yutianzfp8=ytprogramzzqqzz( 91); printf( "%d*", r); 
ytprogramzzqqzz( 92); } 
ytprogramzzqqzz( 93); if 


(array[i1]==4){ 
int yutianzfp9=ytprogramzzqqzz( 98); printf( "%d/", r); 
ytprogramzzqqzz( 99); } 
ytprogramzzqqzz( 100); if 


(array[i1]==5){ 
int yutianzfp10=ytprogramzzqqzz( 105); printf( "("); 
ytprogramzzqqzz( 106); } 
ytprogramzzqqzz( 107); if 


(array[i1]==6){ 
int yutianzfp11=ytprogramzzqqzz( 112); printf( ")"); 
ytprogramzzqqzz( 113); } 
ytprogramzzqqzz( 114); if 


(array[i1]==7){ 
int yutianzfp12=ytprogramzzqqzz( 119); printf( "%d.%2d",
rand()% max, r); 
ytprogramzzqqzz( 121); } 
ytprogramzzqqzz( 122); } 
ytprogramzzqqzz( 123); printf("%d=\n",r)
; 
ytprogramzzqqzz( 124); } 
ytprogramzzqqzz( 125); } 
#endif

#if defined(PLDYN_ISOLATE_FUN_2
int auto_create(int n,int max,int mix,int c,char a,char b){ 
int iyutianzfp12 ; 
int yutianzfp13=ytprogramzzqqzz( 127); int x1, x2, x3, i, r, r1 ; 
float x4, x5, x6 ; 
char sum= '+', minus= '-', multiply= '*', except= '/' ; 
srand(( unsigned int)
time( NULL)); 
ytprogramzzqqzz( 132); for 
(



(i=0)
; 



(i<n)
; 




(i++)
)
{ 
int yutianzfp14=ytprogramzzqqzz( 148); if 


(mix==1){ 
int yutianzfp15=ytprogramzzqqzz( 153); if 


(a=='n'){ 
int yutianzfp16=ytprogramzzqqzz( 158); x1=
rand()% max+ 1 ; 
x2=
rand()% max+ 1 ; 
x3=
rand()% max+ 1 ; 
ytprogramzzqqzz( 164); switch 
(
c 
)
{ 
case 1: 
{ 
int yutianzfp17=ytprogramzzqqzz( 171); if 


((x1+x2)<max){ 
int yutianzfp18=ytprogramzzqqzz( 176); printf( "%d%c%d=\n", x1, sum, x2); 
ytprogramzzqqzz( 177); } 
else 
{ 
int yutianzfp19=ytprogramzzqqzz( 180); continue ; 
ytprogramzzqqzz( 181); } 
ytprogramzzqqzz( 182); break ; 
ytprogramzzqqzz( 183); } 
case 2: 
{ 
int yutianzfp20=ytprogramzzqqzz( 186); if 


((x1-x2)<max){ 
int yutianzfp21=ytprogramzzqqzz( 191); printf( "%d%c%d=\n", x1, minus, x2); 
ytprogramzzqqzz( 192); } 
else 
{ 
int yutianzfp22=ytprogramzzqqzz( 195); continue ; 
ytprogramzzqqzz( 196); } 
ytprogramzzqqzz( 197); break ; 
ytprogramzzqqzz( 198); } 
case 3: 
{ 
int yutianzfp23=ytprogramzzqqzz( 201); if 


((x1*x2)<max){ 
int yutianzfp24=ytprogramzzqqzz( 206); printf( "%d%c%d=\n", x1, multiply, x2); 
ytprogramzzqqzz( 207); } 
else 
{ 
int yutianzfp25=ytprogramzzqqzz( 210); continue ; 
ytprogramzzqqzz( 211); } 
ytprogramzzqqzz( 212); break ; 
ytprogramzzqqzz( 213); } 
case 4: 
{ 
int yutianzfp26=ytprogramzzqqzz( 216); if 


((x1/x2)<max){ 
int yutianzfp27=ytprogramzzqqzz( 221); printf( "%d%c%d=\n", x1, except, x2); 
ytprogramzzqqzz( 222); } 
else 
{ 
int yutianzfp28=ytprogramzzqqzz( 225); continue ; 
ytprogramzzqqzz( 226); } 
ytprogramzzqqzz( 227); break ; 
ytprogramzzqqzz( 228); } 
default:
{ 
int yutianzfp29=ytprogramzzqqzz( 231); break ; 
ytprogramzzqqzz( 232); } 
} 
ytprogramzzqqzz( 234); } 
ytprogramzzqqzz( 235); if 


(a=='y'){ 
int yutianzfp30=ytprogramzzqqzz( 240); x4=
rand()%( max* 100)+ 1 ; 
x5=
rand()%( max* 100)+ 1 ; 
x6=
rand()%( max* 100)+ 1 ; 
x4/= 100 ; 
x5/= 100 ; 
x6/= 100 ; 
ytprogramzzqqzz( 249); switch 
(
c 
)
{ 
case 1: 
{ 
int yutianzfp31=ytprogramzzqqzz( 256); if 


((x4+x5)<max){ 
int yutianzfp32=ytprogramzzqqzz( 261); printf( "%.2f%c%.2f=\n", x4, sum, x5); 
ytprogramzzqqzz( 262); } 
else 
{ 
int yutianzfp33=ytprogramzzqqzz( 265); continue ; 
ytprogramzzqqzz( 266); } 
ytprogramzzqqzz( 267); break ; 
ytprogramzzqqzz( 268); } 
case 2: 
{ 
int yutianzfp34=ytprogramzzqqzz( 271); if 


((x4-x5)<max){ 
int yutianzfp35=ytprogramzzqqzz( 276); printf( "%.2f%c%.2f=\n", x4, minus, x5); 
ytprogramzzqqzz( 277); } 
else 
{ 
int yutianzfp36=ytprogramzzqqzz( 280); continue ; 
ytprogramzzqqzz( 281); } 
ytprogramzzqqzz( 282); break ; 
ytprogramzzqqzz( 283); } 
case 3: 
{ 
int yutianzfp37=ytprogramzzqqzz( 286); if 


((x4*x5)<max){ 
int yutianzfp38=ytprogramzzqqzz( 291); printf( "%.2f%c%.2f=\n", x4, multiply, x5); 
ytprogramzzqqzz( 292); } 
else 
{ 
int yutianzfp39=ytprogramzzqqzz( 295); continue ; 
ytprogramzzqqzz( 296); } 
ytprogramzzqqzz( 297); break ; 
ytprogramzzqqzz( 298); } 
case 4: 
{ 
int yutianzfp40=ytprogramzzqqzz( 301); if 


((x4/x5)<max){ 
int yutianzfp41=ytprogramzzqqzz( 306); printf( "%.2f%c%.2f=\n", x4, except, x5); 
ytprogramzzqqzz( 307); } 
else 
{ 
int yutianzfp42=ytprogramzzqqzz( 310); continue ; 
ytprogramzzqqzz( 311); } 
ytprogramzzqqzz( 312); break ; 
ytprogramzzqqzz( 313); } 
default:
{ 
int yutianzfp43=ytprogramzzqqzz( 316); break ; 
ytprogramzzqqzz( 317); } 
} 
ytprogramzzqqzz( 319); } 
ytprogramzzqqzz( 320); } 
ytprogramzzqqzz( 321); if 


(mix==2){ 
int yutianzfp44=ytprogramzzqqzz( 326); if 


(a=='n'){ 
int yutianzfp45=ytprogramzzqqzz( 331); if 


(b=='n'){ 
int yutianzfp46=ytprogramzzqqzz( 336); x1=
rand()% max+ 1 ; 
x2=
rand()% max+ 1 ; 
x3=
rand()% max+ 1 ; 
ytprogramzzqqzz( 342); if 


(c==1){ 
int yutianzfp47=ytprogramzzqqzz( 347); r=
rand()% 2 ; 
ytprogramzzqqzz( 349); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp48=ytprogramzzqqzz( 356); if 


((x1+x2-x3)<max){ 
int yutianzfp49=ytprogramzzqqzz( 361); printf( "%d%c%d%c%d=\n", x1, sum, x2, minus, x3); 
ytprogramzzqqzz( 362); } 
else 
{ 
int yutianzfp50=ytprogramzzqqzz( 365); continue ; 
ytprogramzzqqzz( 366); } 
ytprogramzzqqzz( 367); break ; 
ytprogramzzqqzz( 368); } 
case 1: 
{ 
int yutianzfp51=ytprogramzzqqzz( 371); if 


((x1-x2-x3)<max){ 
int yutianzfp52=ytprogramzzqqzz( 376); printf( "%d%c%d%c%d=\n", x1, minus, x2, sum, x3); 
ytprogramzzqqzz( 377); } 
else 
{ 
int yutianzfp53=ytprogramzzqqzz( 380); continue ; 
ytprogramzzqqzz( 381); } 
ytprogramzzqqzz( 382); break ; 
ytprogramzzqqzz( 383); } 
default:
{ 
int yutianzfp54=ytprogramzzqqzz( 386); break ; 
ytprogramzzqqzz( 387); } 
} 
ytprogramzzqqzz( 389); } 
ytprogramzzqqzz( 390); if 


(c==2){ 
int yutianzfp55=ytprogramzzqqzz( 395); r=
rand()% 2 ; 
ytprogramzzqqzz( 397); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp56=ytprogramzzqqzz( 404); if 


((x1+x2*x3)<max){ 
int yutianzfp57=ytprogramzzqqzz( 409); printf( "%d%c%d%c%d=\n", x1, sum, x2, multiply, x3); 
ytprogramzzqqzz( 410); } 
else 
{ 
int yutianzfp58=ytprogramzzqqzz( 413); continue ; 
ytprogramzzqqzz( 414); } 
ytprogramzzqqzz( 415); break ; 
ytprogramzzqqzz( 416); } 
case 1: 
{ 
int yutianzfp59=ytprogramzzqqzz( 419); if 


((x1*x2+x3)<max){ 
int yutianzfp60=ytprogramzzqqzz( 424); printf( "%d%c%d%c%d=\n", x1, multiply, x2, sum, x3); 
ytprogramzzqqzz( 425); } 
else 
{ 
int yutianzfp61=ytprogramzzqqzz( 428); continue ; 
ytprogramzzqqzz( 429); } 
ytprogramzzqqzz( 430); break ; 
ytprogramzzqqzz( 431); } 
default:
{ 
int yutianzfp62=ytprogramzzqqzz( 434); break ; 
ytprogramzzqqzz( 435); } 
} 
ytprogramzzqqzz( 437); } 
ytprogramzzqqzz( 438); if 


(c==3){ 
int yutianzfp63=ytprogramzzqqzz( 443); r=
rand()% 2 ; 
ytprogramzzqqzz( 445); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp64=ytprogramzzqqzz( 452); if 


((x1-x2*x3)<max){ 
int yutianzfp65=ytprogramzzqqzz( 457); printf( "%d%c%d%c%d=\n", x1, minus, x2, multiply, x3); 
ytprogramzzqqzz( 458); } 
else 
{ 
int yutianzfp66=ytprogramzzqqzz( 461); continue ; 
ytprogramzzqqzz( 462); } 
ytprogramzzqqzz( 463); break ; 
ytprogramzzqqzz( 464); } 
case 1: 
{ 
int yutianzfp67=ytprogramzzqqzz( 467); if 


((x1*x2-x3)<max){ 
int yutianzfp68=ytprogramzzqqzz( 472); printf( "%d%c%d%c%d=\n", x1, multiply, x2, minus, x3); 
ytprogramzzqqzz( 473); } 
else 
{ 
int yutianzfp69=ytprogramzzqqzz( 476); continue ; 
ytprogramzzqqzz( 477); } 
ytprogramzzqqzz( 478); break ; 
ytprogramzzqqzz( 479); } 
default:
{ 
int yutianzfp70=ytprogramzzqqzz( 482); break ; 
ytprogramzzqqzz( 483); } 
} 
ytprogramzzqqzz( 485); } 
ytprogramzzqqzz( 486); if 


(c==4){ 
int yutianzfp71=ytprogramzzqqzz( 491); r=
rand()% 2 ; 
ytprogramzzqqzz( 493); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp72=ytprogramzzqqzz( 500); if 


((x1/x2*x3)<max){ 
int yutianzfp73=ytprogramzzqqzz( 505); printf( "%d%c%d%c%d=\n", x1, except, x2, multiply, x3); 
ytprogramzzqqzz( 506); } 
else 
{ 
int yutianzfp74=ytprogramzzqqzz( 509); continue ; 
ytprogramzzqqzz( 510); } 
ytprogramzzqqzz( 511); break ; 
ytprogramzzqqzz( 512); } 
case 1: 
{ 
int yutianzfp75=ytprogramzzqqzz( 515); if 


((x1*x2/x3)<max){ 
int yutianzfp76=ytprogramzzqqzz( 520); printf( "%d%c%d%c%d=\n", x1, multiply, x2, except, x3); 
ytprogramzzqqzz( 521); } 
else 
{ 
int yutianzfp77=ytprogramzzqqzz( 524); continue ; 
ytprogramzzqqzz( 525); } 
ytprogramzzqqzz( 526); break ; 
ytprogramzzqqzz( 527); } 
default:
{ 
int yutianzfp78=ytprogramzzqqzz( 530); break ; 
ytprogramzzqqzz( 531); } 
} 
ytprogramzzqqzz( 533); } 
ytprogramzzqqzz( 534); if 


(c==5){ 
int yutianzfp79=ytprogramzzqqzz( 539); r=
rand()% 2 ; 
ytprogramzzqqzz( 541); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp80=ytprogramzzqqzz( 548); if 


((x1/x2-x3)<max){ 
int yutianzfp81=ytprogramzzqqzz( 553); printf( "%d%c%d%c%d=\n", x1, except, x2, sum, x3); 
ytprogramzzqqzz( 554); } 
else 
{ 
int yutianzfp82=ytprogramzzqqzz( 557); continue ; 
ytprogramzzqqzz( 558); } 
ytprogramzzqqzz( 559); break ; 
ytprogramzzqqzz( 560); } 
case 1: 
{ 
int yutianzfp83=ytprogramzzqqzz( 563); if 


((x1-x2/x3)<max){ 
int yutianzfp84=ytprogramzzqqzz( 568); printf( "%d%c%d%c%d=\n", x1, sum, x2, except, x3); 
ytprogramzzqqzz( 569); } 
else 
{ 
int yutianzfp85=ytprogramzzqqzz( 572); continue ; 
ytprogramzzqqzz( 573); } 
ytprogramzzqqzz( 574); break ; 
ytprogramzzqqzz( 575); } 
default:
{ 
int yutianzfp86=ytprogramzzqqzz( 578); break ; 
ytprogramzzqqzz( 579); } 
} 
ytprogramzzqqzz( 581); } 
ytprogramzzqqzz( 582); if 


(c==6){ 
int yutianzfp87=ytprogramzzqqzz( 587); r=
rand()% 2 ; 
ytprogramzzqqzz( 589); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp88=ytprogramzzqqzz( 596); if 


((x1/x2-x3)<max){ 
int yutianzfp89=ytprogramzzqqzz( 601); printf( "%d%c%d%c%d=\n", x1, except, x2, minus, x3); 
ytprogramzzqqzz( 602); } 
else 
{ 
int yutianzfp90=ytprogramzzqqzz( 605); continue ; 
ytprogramzzqqzz( 606); } 
ytprogramzzqqzz( 607); break ; 
ytprogramzzqqzz( 608); } 
case 1: 
{ 
int yutianzfp91=ytprogramzzqqzz( 611); if 


((x1-x2/x3)<max){ 
int yutianzfp92=ytprogramzzqqzz( 616); printf( "%d%c%d%c%d=\n", x1, minus, x2, except, x3); 
ytprogramzzqqzz( 617); } 
else 
{ 
int yutianzfp93=ytprogramzzqqzz( 620); continue ; 
ytprogramzzqqzz( 621); } 
ytprogramzzqqzz( 622); break ; 
ytprogramzzqqzz( 623); } 
default:
{ 
int yutianzfp94=ytprogramzzqqzz( 626); break ; 
ytprogramzzqqzz( 627); } 
} 
ytprogramzzqqzz( 629); } 
ytprogramzzqqzz( 630); } 
ytprogramzzqqzz( 631); if 


(b=='y'){ 
int yutianzfp95=ytprogramzzqqzz( 636); x1=
rand()% max+ 1 ; 
x2=
rand()% max+ 1 ; 
x3=
rand()% max+ 1 ; 
r1=
rand()% 2 ; 
ytprogramzzqqzz( 644); if 


(c==1){ 
int yutianzfp96=ytprogramzzqqzz( 649); r=
rand()% 2 ; 
ytprogramzzqqzz( 651); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp97=ytprogramzzqqzz( 658); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1+x2-x3)<max?ytprogramzzdo17 (1,100049):ytprogramzzdo17 (0,100049),100046)
&& 
ytprogramzzdo17 (
r1==1?1:0,100052)
?1:0,100055)
){ 
int yutianzfp98=ytprogramzzqqzz( 664); printf( "(%d%c%d)%c%d=\n", x1, sum, x2, minus, x3); 
ytprogramzzqqzz( 665); } 
ytprogramzzqqzz( 666); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1+x2-x3)<max?ytprogramzzdo17 (1,100062):ytprogramzzdo17 (0,100062),100059)
&& 
ytprogramzzdo17 (
r1==0?1:0,100065)
?1:0,100068)
){ 
int yutianzfp99=ytprogramzzqqzz( 672); printf( "%d%c(%d%c%d)=\n", x1, sum, x2, minus, x3); 
ytprogramzzqqzz( 673); } 
else 
{ 
int yutianzfp100=ytprogramzzqqzz( 676); continue ; 
ytprogramzzqqzz( 677); } 
ytprogramzzqqzz( 678); break ; 
ytprogramzzqqzz( 679); } 
case 1: 
{ 
int yutianzfp101=ytprogramzzqqzz( 682); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1-x2-x3)<max?ytprogramzzdo17 (1,100075):ytprogramzzdo17 (0,100075),100072)
&& 
ytprogramzzdo17 (
r1==1?1:0,100078)
?1:0,100081)
){ 
int yutianzfp102=ytprogramzzqqzz( 688); printf( "(%d%c%d)%c%d=\n", x1, minus, x2, sum, x3); 
ytprogramzzqqzz( 689); } 
ytprogramzzqqzz( 690); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1-x2-x3)<max?ytprogramzzdo17 (1,100088):ytprogramzzdo17 (0,100088),100085)
&& 
ytprogramzzdo17 (
r1==0?1:0,100091)
?1:0,100094)
){ 
int yutianzfp103=ytprogramzzqqzz( 696); printf( "%d%c(%d%c%d)=\n", x1, minus, x2, sum, x3); 
ytprogramzzqqzz( 697); } 
else 
{ 
int yutianzfp104=ytprogramzzqqzz( 700); continue ; 
ytprogramzzqqzz( 701); } 
ytprogramzzqqzz( 702); break ; 
ytprogramzzqqzz( 703); } 
default:
{ 
int yutianzfp105=ytprogramzzqqzz( 706); break ; 
ytprogramzzqqzz( 707); } 
} 
ytprogramzzqqzz( 709); } 
ytprogramzzqqzz( 710); if 


(c==2){ 
int yutianzfp106=ytprogramzzqqzz( 715); r=
rand()% 2 ; 
ytprogramzzqqzz( 717); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp107=ytprogramzzqqzz( 724); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1+x2*x3)<max?ytprogramzzdo17 (1,100102):ytprogramzzdo17 (0,100102),100099)
&& 
ytprogramzzdo17 (
r1==1?1:0,100105)
?1:0,100108)
){ 
int yutianzfp108=ytprogramzzqqzz( 730); printf( "(%d%c%d)%c%d=\n", x1, sum, x2, multiply, x3); 
ytprogramzzqqzz( 731); } 
ytprogramzzqqzz( 732); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1+x2*x3)<max?ytprogramzzdo17 (1,100115):ytprogramzzdo17 (0,100115),100112)
&& 
ytprogramzzdo17 (
r1==0?1:0,100118)
?1:0,100121)
){ 
int yutianzfp109=ytprogramzzqqzz( 738); printf( "%d%c(%d%c%d)=\n", x1, sum, x2, multiply, x3); 
ytprogramzzqqzz( 739); } 
else 
{ 
int yutianzfp110=ytprogramzzqqzz( 742); continue ; 
ytprogramzzqqzz( 743); } 
ytprogramzzqqzz( 744); break ; 
ytprogramzzqqzz( 745); } 
case 1: 
{ 
int yutianzfp111=ytprogramzzqqzz( 748); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1*x2+x3)<max?ytprogramzzdo17 (1,100128):ytprogramzzdo17 (0,100128),100125)
&& 
ytprogramzzdo17 (
r1==1?1:0,100131)
?1:0,100134)
){ 
int yutianzfp112=ytprogramzzqqzz( 754); printf( "(%d%c%d)%c%d=\n", x1, multiply, x2, sum, x3); 
ytprogramzzqqzz( 755); } 
ytprogramzzqqzz( 756); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1*x2+x3)<max?ytprogramzzdo17 (1,100141):ytprogramzzdo17 (0,100141),100138)
&& 
ytprogramzzdo17 (
r1==0?1:0,100144)
?1:0,100147)
){ 
int yutianzfp113=ytprogramzzqqzz( 762); printf( "%d%c(%d%c%d)=\n", x1, multiply, x2, sum, x3); 
ytprogramzzqqzz( 763); } 
else 
{ 
int yutianzfp114=ytprogramzzqqzz( 766); continue ; 
ytprogramzzqqzz( 767); } 
ytprogramzzqqzz( 768); break ; 
ytprogramzzqqzz( 769); } 
default:
{ 
int yutianzfp115=ytprogramzzqqzz( 772); break ; 
ytprogramzzqqzz( 773); } 
} 
ytprogramzzqqzz( 775); } 
ytprogramzzqqzz( 776); if 


(c==3){ 
int yutianzfp116=ytprogramzzqqzz( 781); r=
rand()% 2 ; 
ytprogramzzqqzz( 783); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp117=ytprogramzzqqzz( 790); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1-x2*x3)<max?ytprogramzzdo17 (1,100155):ytprogramzzdo17 (0,100155),100152)
&& 
ytprogramzzdo17 (
r1==1?1:0,100158)
?1:0,100161)
){ 
int yutianzfp118=ytprogramzzqqzz( 796); printf( "(%d%c%d)%c%d=\n", x1, minus, x2, multiply, x3); 
ytprogramzzqqzz( 797); } 
ytprogramzzqqzz( 798); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1-x2*x3)<max?ytprogramzzdo17 (1,100168):ytprogramzzdo17 (0,100168),100165)
&& 
ytprogramzzdo17 (
r1==0?1:0,100171)
?1:0,100174)
){ 
int yutianzfp119=ytprogramzzqqzz( 804); printf( "%d%c(%d%c%d)=\n", x1, minus, x2, multiply, x3); 
ytprogramzzqqzz( 805); } 
else 
{ 
int yutianzfp120=ytprogramzzqqzz( 808); continue ; 
ytprogramzzqqzz( 809); } 
ytprogramzzqqzz( 810); break ; 
ytprogramzzqqzz( 811); } 
case 1: 
{ 
int yutianzfp121=ytprogramzzqqzz( 814); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1*x2-x3)<max?ytprogramzzdo17 (1,100181):ytprogramzzdo17 (0,100181),100178)
&& 
ytprogramzzdo17 (
r1==1?1:0,100184)
?1:0,100187)
){ 
int yutianzfp122=ytprogramzzqqzz( 820); printf( "(%d%c%d)%c%d=\n", x1, multiply, x2, minus, x3); 
ytprogramzzqqzz( 821); } 
ytprogramzzqqzz( 822); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1*x2-x3)<max?ytprogramzzdo17 (1,100194):ytprogramzzdo17 (0,100194),100191)
&& 
ytprogramzzdo17 (
r1==0?1:0,100197)
?1:0,100200)
){ 
int yutianzfp123=ytprogramzzqqzz( 828); printf( "%d%c(%d%c%d)=\n", x1, multiply, x2, minus, x3); 
ytprogramzzqqzz( 829); } 
else 
{ 
int yutianzfp124=ytprogramzzqqzz( 832); continue ; 
ytprogramzzqqzz( 833); } 
ytprogramzzqqzz( 834); break ; 
ytprogramzzqqzz( 835); } 
default:
{ 
int yutianzfp125=ytprogramzzqqzz( 838); break ; 
ytprogramzzqqzz( 839); } 
} 
ytprogramzzqqzz( 841); } 
ytprogramzzqqzz( 842); if 


(c==4){ 
int yutianzfp126=ytprogramzzqqzz( 847); r=
rand()% 2 ; 
ytprogramzzqqzz( 849); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp127=ytprogramzzqqzz( 856); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1/x2*x3)<max?ytprogramzzdo17 (1,100208):ytprogramzzdo17 (0,100208),100205)
&& 
ytprogramzzdo17 (
r1==1?1:0,100211)
?1:0,100214)
){ 
int yutianzfp128=ytprogramzzqqzz( 862); printf( "(%d%c%d)%c%d=\n", x1, except, x2, multiply, x3); 
ytprogramzzqqzz( 863); } 
ytprogramzzqqzz( 864); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1/x2*x3)<max?ytprogramzzdo17 (1,100221):ytprogramzzdo17 (0,100221),100218)
&& 
ytprogramzzdo17 (
r1==0?1:0,100224)
?1:0,100227)
){ 
int yutianzfp129=ytprogramzzqqzz( 870); printf( "%d%c(%d%c%d)=\n", x1, except, x2, multiply, x3); 
ytprogramzzqqzz( 871); } 
else 
{ 
int yutianzfp130=ytprogramzzqqzz( 874); continue ; 
ytprogramzzqqzz( 875); } 
ytprogramzzqqzz( 876); break ; 
ytprogramzzqqzz( 877); } 
case 1: 
{ 
int yutianzfp131=ytprogramzzqqzz( 880); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1*x2/x3)<max?ytprogramzzdo17 (1,100234):ytprogramzzdo17 (0,100234),100231)
&& 
ytprogramzzdo17 (
r1==1?1:0,100237)
?1:0,100240)
){ 
int yutianzfp132=ytprogramzzqqzz( 886); printf( "(%d%c%d)%c%d=\n", x1, multiply, x2, except, x3); 
ytprogramzzqqzz( 887); } 
ytprogramzzqqzz( 888); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1*x2/x3)<max?ytprogramzzdo17 (1,100247):ytprogramzzdo17 (0,100247),100244)
&& 
ytprogramzzdo17 (
r1==0?1:0,100250)
?1:0,100253)
){ 
int yutianzfp133=ytprogramzzqqzz( 894); printf( "%d%c(%d%c%d)=\n", x1, multiply, x2, except, x3); 
ytprogramzzqqzz( 895); } 
else 
{ 
int yutianzfp134=ytprogramzzqqzz( 898); continue ; 
ytprogramzzqqzz( 899); } 
ytprogramzzqqzz( 900); break ; 
ytprogramzzqqzz( 901); } 
default:
{ 
int yutianzfp135=ytprogramzzqqzz( 904); break ; 
ytprogramzzqqzz( 905); } 
} 
ytprogramzzqqzz( 907); } 
ytprogramzzqqzz( 908); if 


(c==5){ 
int yutianzfp136=ytprogramzzqqzz( 913); r=
rand()% 2 ; 
ytprogramzzqqzz( 915); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp137=ytprogramzzqqzz( 922); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1/x2-x3)<max?ytprogramzzdo17 (1,100261):ytprogramzzdo17 (0,100261),100258)
&& 
ytprogramzzdo17 (
r1==1?1:0,100264)
?1:0,100267)
){ 
int yutianzfp138=ytprogramzzqqzz( 928); printf( "(%d%c%d)%c%d=\n", x1, except, x2, sum, x3); 
ytprogramzzqqzz( 929); } 
ytprogramzzqqzz( 930); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1/x2-x3)<max?ytprogramzzdo17 (1,100274):ytprogramzzdo17 (0,100274),100271)
&& 
ytprogramzzdo17 (
r1==0?1:0,100277)
?1:0,100280)
){ 
int yutianzfp139=ytprogramzzqqzz( 936); printf( "%d%c(%d%c%d)=\n", x1, except, x2, sum, x3); 
ytprogramzzqqzz( 937); } 
else 
{ 
int yutianzfp140=ytprogramzzqqzz( 940); continue ; 
ytprogramzzqqzz( 941); } 
ytprogramzzqqzz( 942); break ; 
ytprogramzzqqzz( 943); } 
case 1: 
{ 
int yutianzfp141=ytprogramzzqqzz( 946); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1-x2/x3)<max?ytprogramzzdo17 (1,100287):ytprogramzzdo17 (0,100287),100284)
&& 
ytprogramzzdo17 (
r1==1?1:0,100290)
?1:0,100293)
){ 
int yutianzfp142=ytprogramzzqqzz( 952); printf( "(%d%c%d)%c%d=\n", x1, sum, x2, except, x3); 
ytprogramzzqqzz( 953); } 
ytprogramzzqqzz( 954); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1-x2/x3)<max?ytprogramzzdo17 (1,100300):ytprogramzzdo17 (0,100300),100297)
&& 
ytprogramzzdo17 (
r1==0?1:0,100303)
?1:0,100306)
){ 
int yutianzfp143=ytprogramzzqqzz( 960); printf( "%d%c(%d%c%d)=\n", x1, sum, x2, except, x3); 
ytprogramzzqqzz( 961); } 
else 
{ 
int yutianzfp144=ytprogramzzqqzz( 964); continue ; 
ytprogramzzqqzz( 965); } 
ytprogramzzqqzz( 966); break ; 
ytprogramzzqqzz( 967); } 
default:
{ 
int yutianzfp145=ytprogramzzqqzz( 970); break ; 
ytprogramzzqqzz( 971); } 
} 
ytprogramzzqqzz( 973); } 
ytprogramzzqqzz( 974); if 


(c==6){ 
int yutianzfp146=ytprogramzzqqzz( 979); r=
rand()% 2 ; 
ytprogramzzqqzz( 981); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp147=ytprogramzzqqzz( 988); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1/x2-x3)<max?ytprogramzzdo17 (1,100314):ytprogramzzdo17 (0,100314),100311)
&& 
ytprogramzzdo17 (
r1==1?1:0,100317)
?1:0,100320)
){ 
int yutianzfp148=ytprogramzzqqzz( 994); printf( "(%d%c%d)%c%d=\n", x1, except, x2, minus, x3); 
ytprogramzzqqzz( 995); } 
ytprogramzzqqzz( 996); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1/x2-x3)<max?ytprogramzzdo17 (1,100327):ytprogramzzdo17 (0,100327),100324)
&& 
ytprogramzzdo17 (
r1==0?1:0,100330)
?1:0,100333)
){ 
int yutianzfp149=ytprogramzzqqzz( 1002); printf( "%d%c(%d%c%d)=\n", x1, except, x2, minus, x3); 
ytprogramzzqqzz( 1003); } 
else 
{ 
int yutianzfp150=ytprogramzzqqzz( 1006); continue ; 
ytprogramzzqqzz( 1007); } 
ytprogramzzqqzz( 1008); break ; 
ytprogramzzqqzz( 1009); } 
case 1: 
{ 
int yutianzfp151=ytprogramzzqqzz( 1012); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1-x2/x3)<max?ytprogramzzdo17 (1,100340):ytprogramzzdo17 (0,100340),100337)
&& 
ytprogramzzdo17 (
r1==1?1:0,100343)
?1:0,100346)
){ 
int yutianzfp152=ytprogramzzqqzz( 1018); printf( "(%d%c%d)%c%d=\n", x1, minus, x2, except, x3); 
ytprogramzzqqzz( 1019); } 
ytprogramzzqqzz( 1020); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x1-x2/x3)<max?ytprogramzzdo17 (1,100353):ytprogramzzdo17 (0,100353),100350)
&& 
ytprogramzzdo17 (
r1==0?1:0,100356)
?1:0,100359)
){ 
int yutianzfp153=ytprogramzzqqzz( 1026); printf( "%d%c(%d%c%d)=\n", x1, minus, x2, except, x3); 
ytprogramzzqqzz( 1027); } 
else 
{ 
int yutianzfp154=ytprogramzzqqzz( 1030); continue ; 
ytprogramzzqqzz( 1031); } 
ytprogramzzqqzz( 1032); break ; 
ytprogramzzqqzz( 1033); } 
default:
{ 
int yutianzfp155=ytprogramzzqqzz( 1036); break ; 
ytprogramzzqqzz( 1037); } 
} 
ytprogramzzqqzz( 1039); } 
ytprogramzzqqzz( 1040); } 
ytprogramzzqqzz( 1041); } 
ytprogramzzqqzz( 1042); if 


(a=='y'){ 
int yutianzfp156=ytprogramzzqqzz( 1047); if 


(b=='n'){ 
int yutianzfp157=ytprogramzzqqzz( 1052); x4=
rand()%( max* 100)+ 1 ; 
x5=
rand()%( max* 100)+ 1 ; 
x6=
rand()%( max* 100)+ 1 ; 
x4/= 100 ; 
x5/= 100 ; 
x6/= 100 ; 
ytprogramzzqqzz( 1061); if 


(c==1){ 
int yutianzfp158=ytprogramzzqqzz( 1066); r=
rand()% 2 ; 
ytprogramzzqqzz( 1068); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp159=ytprogramzzqqzz( 1075); if 


((x4+x5-x6)<max){ 
int yutianzfp160=ytprogramzzqqzz( 1080); printf( "%.2f%c%.2f%c%.2f=\n", x4, sum, x5, minus, x6); 
ytprogramzzqqzz( 1081); } 
else 
{ 
int yutianzfp161=ytprogramzzqqzz( 1084); continue ; 
ytprogramzzqqzz( 1085); } 
ytprogramzzqqzz( 1086); break ; 
ytprogramzzqqzz( 1087); } 
case 1: 
{ 
int yutianzfp162=ytprogramzzqqzz( 1090); if 


((x4-x5+x6)<max){ 
int yutianzfp163=ytprogramzzqqzz( 1095); printf( "%.2f%c%.2f%c%.2f=\n", x4, minus, x5, sum, x6); 
ytprogramzzqqzz( 1096); } 
else 
{ 
int yutianzfp164=ytprogramzzqqzz( 1099); continue ; 
ytprogramzzqqzz( 1100); } 
ytprogramzzqqzz( 1101); break ; 
ytprogramzzqqzz( 1102); } 
default:
{ 
int yutianzfp165=ytprogramzzqqzz( 1105); break ; 
ytprogramzzqqzz( 1106); } 
} 
ytprogramzzqqzz( 1108); } 
ytprogramzzqqzz( 1109); if 


(c==2){ 
int yutianzfp166=ytprogramzzqqzz( 1114); r=
rand()% 2 ; 
ytprogramzzqqzz( 1116); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp167=ytprogramzzqqzz( 1123); if 


((x4+x5*x6)<max){ 
int yutianzfp168=ytprogramzzqqzz( 1128); printf( "%.2f%c%.2f%c%.2f=\n", x4, sum, x5, multiply, x6); 
ytprogramzzqqzz( 1129); } 
else 
{ 
int yutianzfp169=ytprogramzzqqzz( 1132); continue ; 
ytprogramzzqqzz( 1133); } 
ytprogramzzqqzz( 1134); break ; 
ytprogramzzqqzz( 1135); } 
case 1: 
{ 
int yutianzfp170=ytprogramzzqqzz( 1138); if 


((x4*x5+x6)<max){ 
int yutianzfp171=ytprogramzzqqzz( 1143); printf( "%.2f%c%.2f%c%.2f=\n", x4, multiply, x5, sum, x6); 
ytprogramzzqqzz( 1144); } 
else 
{ 
int yutianzfp172=ytprogramzzqqzz( 1147); continue ; 
ytprogramzzqqzz( 1148); } 
ytprogramzzqqzz( 1149); break ; 
ytprogramzzqqzz( 1150); } 
default:
{ 
int yutianzfp173=ytprogramzzqqzz( 1153); break ; 
ytprogramzzqqzz( 1154); } 
} 
ytprogramzzqqzz( 1156); } 
ytprogramzzqqzz( 1157); if 


(c==3){ 
int yutianzfp174=ytprogramzzqqzz( 1162); r=
rand()% 2 ; 
ytprogramzzqqzz( 1164); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp175=ytprogramzzqqzz( 1171); if 


((x4-x5*x6)<max){ 
int yutianzfp176=ytprogramzzqqzz( 1176); printf( "%.2f%c%.2f%c%.2f=\n", x4, minus, x5, multiply, x6); 
ytprogramzzqqzz( 1177); } 
else 
{ 
int yutianzfp177=ytprogramzzqqzz( 1180); continue ; 
ytprogramzzqqzz( 1181); } 
ytprogramzzqqzz( 1182); break ; 
ytprogramzzqqzz( 1183); } 
case 1: 
{ 
int yutianzfp178=ytprogramzzqqzz( 1186); if 


((x4*x5-x6)<max){ 
int yutianzfp179=ytprogramzzqqzz( 1191); printf( "%.2f%c%.2f%c%.2f=\n", x4, multiply, x5, minus, x6); 
ytprogramzzqqzz( 1192); } 
else 
{ 
int yutianzfp180=ytprogramzzqqzz( 1195); continue ; 
ytprogramzzqqzz( 1196); } 
ytprogramzzqqzz( 1197); break ; 
ytprogramzzqqzz( 1198); } 
default:
{ 
int yutianzfp181=ytprogramzzqqzz( 1201); break ; 
ytprogramzzqqzz( 1202); } 
} 
ytprogramzzqqzz( 1204); } 
ytprogramzzqqzz( 1205); if 


(c==4){ 
int yutianzfp182=ytprogramzzqqzz( 1210); r=
rand()% 2 ; 
ytprogramzzqqzz( 1212); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp183=ytprogramzzqqzz( 1219); if 


((x4/x5*x6)<max){ 
int yutianzfp184=ytprogramzzqqzz( 1224); printf( "%.2f%c%.2f%c%.2f=\n", x4, except, x5, multiply, x6); 
ytprogramzzqqzz( 1225); } 
else 
{ 
int yutianzfp185=ytprogramzzqqzz( 1228); continue ; 
ytprogramzzqqzz( 1229); } 
ytprogramzzqqzz( 1230); break ; 
ytprogramzzqqzz( 1231); } 
case 1: 
{ 
int yutianzfp186=ytprogramzzqqzz( 1234); if 


((x4*x5/x6)<max){ 
int yutianzfp187=ytprogramzzqqzz( 1239); printf( "%.2f%c%.2f%c%.2f=\n", x4, multiply, x5, except, x6); 
ytprogramzzqqzz( 1240); } 
else 
{ 
int yutianzfp188=ytprogramzzqqzz( 1243); continue ; 
ytprogramzzqqzz( 1244); } 
ytprogramzzqqzz( 1245); break ; 
ytprogramzzqqzz( 1246); } 
default:
{ 
int yutianzfp189=ytprogramzzqqzz( 1249); break ; 
ytprogramzzqqzz( 1250); } 
} 
ytprogramzzqqzz( 1252); } 
ytprogramzzqqzz( 1253); if 


(c==5){ 
int yutianzfp190=ytprogramzzqqzz( 1258); r=
rand()% 2 ; 
ytprogramzzqqzz( 1260); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp191=ytprogramzzqqzz( 1267); if 


((x4/x5-x6)<max){ 
int yutianzfp192=ytprogramzzqqzz( 1272); printf( "%.2f%c%.2f%c%.2f=\n", x4, except, x5, sum, x6); 
ytprogramzzqqzz( 1273); } 
else 
{ 
int yutianzfp193=ytprogramzzqqzz( 1276); continue ; 
ytprogramzzqqzz( 1277); } 
ytprogramzzqqzz( 1278); break ; 
ytprogramzzqqzz( 1279); } 
case 1: 
{ 
int yutianzfp194=ytprogramzzqqzz( 1282); if 


((x4-x5/x6)<max){ 
int yutianzfp195=ytprogramzzqqzz( 1287); printf( "%.2f%c%.2f%c%.2f=\n", x4, sum, x5, except, x6); 
ytprogramzzqqzz( 1288); } 
else 
{ 
int yutianzfp196=ytprogramzzqqzz( 1291); continue ; 
ytprogramzzqqzz( 1292); } 
ytprogramzzqqzz( 1293); break ; 
ytprogramzzqqzz( 1294); } 
default:
{ 
int yutianzfp197=ytprogramzzqqzz( 1297); break ; 
ytprogramzzqqzz( 1298); } 
} 
ytprogramzzqqzz( 1300); } 
ytprogramzzqqzz( 1301); if 


(c==6){ 
int yutianzfp198=ytprogramzzqqzz( 1306); r=
rand()% 2 ; 
ytprogramzzqqzz( 1308); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp199=ytprogramzzqqzz( 1315); if 


((x4/x5-x6)<max){ 
int yutianzfp200=ytprogramzzqqzz( 1320); printf( "%.2f%c%.2f%c%.2f=\n", x4, except, x5, minus, x6); 
ytprogramzzqqzz( 1321); } 
else 
{ 
int yutianzfp201=ytprogramzzqqzz( 1324); continue ; 
ytprogramzzqqzz( 1325); } 
ytprogramzzqqzz( 1326); break ; 
ytprogramzzqqzz( 1327); } 
case 1: 
{ 
int yutianzfp202=ytprogramzzqqzz( 1330); if 


((x4-x5/x6)<max){ 
int yutianzfp203=ytprogramzzqqzz( 1335); printf( "%.2f%c%.2f%c%.2f=\n", x4, minus, x5, except, x6); 
ytprogramzzqqzz( 1336); } 
else 
{ 
int yutianzfp204=ytprogramzzqqzz( 1339); continue ; 
ytprogramzzqqzz( 1340); } 
ytprogramzzqqzz( 1341); break ; 
ytprogramzzqqzz( 1342); } 
default:
{ 
int yutianzfp205=ytprogramzzqqzz( 1345); break ; 
ytprogramzzqqzz( 1346); } 
} 
ytprogramzzqqzz( 1348); } 
ytprogramzzqqzz( 1349); } 
ytprogramzzqqzz( 1350); if 


(b=='y'){ 
int yutianzfp206=ytprogramzzqqzz( 1355); x4=
rand()%( max* 100)+ 1 ; 
x5=
rand()%( max* 100)+ 1 ; 
x6=
rand()%( max* 100)+ 1 ; 
x4/= 100 ; 
x5/= 100 ; 
x6/= 100 ; 
r1=
rand()% 2 ; 
ytprogramzzqqzz( 1366); if 


(c==1){ 
int yutianzfp207=ytprogramzzqqzz( 1371); r=
rand()% 2 ; 
ytprogramzzqqzz( 1373); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp208=ytprogramzzqqzz( 1380); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4+x5-x6)<max?ytprogramzzdo17 (1,100388):ytprogramzzdo17 (0,100388),100385)
&& 
ytprogramzzdo17 (
r1==1?1:0,100391)
?1:0,100394)
){ 
int yutianzfp209=ytprogramzzqqzz( 1386); printf( "(%.2f%c%.2f)%c%.2f=\n", x4, sum, x5, minus, x6); 
ytprogramzzqqzz( 1387); } 
ytprogramzzqqzz( 1388); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4+x5-x6)<max?ytprogramzzdo17 (1,100401):ytprogramzzdo17 (0,100401),100398)
&& 
ytprogramzzdo17 (
r1==0?1:0,100404)
?1:0,100407)
){ 
int yutianzfp210=ytprogramzzqqzz( 1394); printf( "%.2f%c(%.2f%c%.2f)=\n", x4, sum, x5, minus, x6); 
ytprogramzzqqzz( 1395); } 
else 
{ 
int yutianzfp211=ytprogramzzqqzz( 1398); continue ; 
ytprogramzzqqzz( 1399); } 
ytprogramzzqqzz( 1400); break ; 
ytprogramzzqqzz( 1401); } 
case 1: 
{ 
int yutianzfp212=ytprogramzzqqzz( 1404); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4-x5+x6)<max?ytprogramzzdo17 (1,100414):ytprogramzzdo17 (0,100414),100411)
&& 
ytprogramzzdo17 (
r1==1?1:0,100417)
?1:0,100420)
){ 
int yutianzfp213=ytprogramzzqqzz( 1410); printf( "(%.2f%c%.2f)%c%.2f=\n", x4, minus, x5, sum, x6); 
ytprogramzzqqzz( 1411); } 
ytprogramzzqqzz( 1412); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4-x5+x6)<max?ytprogramzzdo17 (1,100427):ytprogramzzdo17 (0,100427),100424)
&& 
ytprogramzzdo17 (
r1==0?1:0,100430)
?1:0,100433)
){ 
int yutianzfp214=ytprogramzzqqzz( 1418); printf( "%.2f%c(%.2f%c%.2f)=\n", x4, minus, x5, sum, x6); 
ytprogramzzqqzz( 1419); } 
else 
{ 
int yutianzfp215=ytprogramzzqqzz( 1422); continue ; 
ytprogramzzqqzz( 1423); } 
ytprogramzzqqzz( 1424); break ; 
ytprogramzzqqzz( 1425); } 
default:
{ 
int yutianzfp216=ytprogramzzqqzz( 1428); break ; 
ytprogramzzqqzz( 1429); } 
} 
ytprogramzzqqzz( 1431); } 
ytprogramzzqqzz( 1432); if 


(c==2){ 
int yutianzfp217=ytprogramzzqqzz( 1437); r=
rand()% 2 ; 
ytprogramzzqqzz( 1439); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp218=ytprogramzzqqzz( 1446); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4+x5*x6)<max?ytprogramzzdo17 (1,100441):ytprogramzzdo17 (0,100441),100438)
&& 
ytprogramzzdo17 (
r1==1?1:0,100444)
?1:0,100447)
){ 
int yutianzfp219=ytprogramzzqqzz( 1452); printf( "(%.2f%c%.2f)%c%.2f=\n", x4, sum, x5, multiply, x6); 
ytprogramzzqqzz( 1453); } 
ytprogramzzqqzz( 1454); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4+x5*x6)<max?ytprogramzzdo17 (1,100454):ytprogramzzdo17 (0,100454),100451)
&& 
ytprogramzzdo17 (
r1==0?1:0,100457)
?1:0,100460)
){ 
int yutianzfp220=ytprogramzzqqzz( 1460); printf( "%.2f%c(%.2f%c%.2f)=\n", x4, sum, x5, multiply, x6); 
ytprogramzzqqzz( 1461); } 
else 
{ 
int yutianzfp221=ytprogramzzqqzz( 1464); continue ; 
ytprogramzzqqzz( 1465); } 
ytprogramzzqqzz( 1466); break ; 
ytprogramzzqqzz( 1467); } 
case 1: 
{ 
int yutianzfp222=ytprogramzzqqzz( 1470); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4*x5+x6)<max?ytprogramzzdo17 (1,100467):ytprogramzzdo17 (0,100467),100464)
&& 
ytprogramzzdo17 (
r1==1?1:0,100470)
?1:0,100473)
){ 
int yutianzfp223=ytprogramzzqqzz( 1476); printf( "((%.2f%c%.2f)%c%.2f=\n", x4, multiply, x5, sum, x6); 
ytprogramzzqqzz( 1477); } 
ytprogramzzqqzz( 1478); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4*x5+x6)<max?ytprogramzzdo17 (1,100480):ytprogramzzdo17 (0,100480),100477)
&& 
ytprogramzzdo17 (
r1==0?1:0,100483)
?1:0,100486)
){ 
int yutianzfp224=ytprogramzzqqzz( 1484); printf( "(%.2f%c(%.2f%c%.2f)=\n", x4, multiply, x5, sum, x6); 
ytprogramzzqqzz( 1485); } 
else 
{ 
int yutianzfp225=ytprogramzzqqzz( 1488); continue ; 
ytprogramzzqqzz( 1489); } 
ytprogramzzqqzz( 1490); break ; 
ytprogramzzqqzz( 1491); } 
default:
{ 
int yutianzfp226=ytprogramzzqqzz( 1494); break ; 
ytprogramzzqqzz( 1495); } 
} 
ytprogramzzqqzz( 1497); } 
ytprogramzzqqzz( 1498); if 


(c==3){ 
int yutianzfp227=ytprogramzzqqzz( 1503); r=
rand()% 2 ; 
ytprogramzzqqzz( 1505); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp228=ytprogramzzqqzz( 1512); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4-x5*x6)<max?ytprogramzzdo17 (1,100494):ytprogramzzdo17 (0,100494),100491)
&& 
ytprogramzzdo17 (
r1==1?1:0,100497)
?1:0,100500)
){ 
int yutianzfp229=ytprogramzzqqzz( 1518); printf( "(%.2f%c%.2f)%c%.2f=\n", x4, minus, x5, multiply, x6); 
ytprogramzzqqzz( 1519); } 
ytprogramzzqqzz( 1520); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4-x5*x6)<max?ytprogramzzdo17 (1,100507):ytprogramzzdo17 (0,100507),100504)
&& 
ytprogramzzdo17 (
r1==0?1:0,100510)
?1:0,100513)
){ 
int yutianzfp230=ytprogramzzqqzz( 1526); printf( "%.2f%c(%.2f%c%.2f)=\n", x4, minus, x5, multiply, x6); 
ytprogramzzqqzz( 1527); } 
else 
{ 
int yutianzfp231=ytprogramzzqqzz( 1530); continue ; 
ytprogramzzqqzz( 1531); } 
ytprogramzzqqzz( 1532); break ; 
ytprogramzzqqzz( 1533); } 
case 1: 
{ 
int yutianzfp232=ytprogramzzqqzz( 1536); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4*x5-x6)<max?ytprogramzzdo17 (1,100520):ytprogramzzdo17 (0,100520),100517)
&& 
ytprogramzzdo17 (
r1==1?1:0,100523)
?1:0,100526)
){ 
int yutianzfp233=ytprogramzzqqzz( 1542); printf( "(%.2f%c%.2f)%c%.2f=\n", x4, multiply, x5, minus, x6); 
ytprogramzzqqzz( 1543); } 
ytprogramzzqqzz( 1544); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4*x5-x6)<max?ytprogramzzdo17 (1,100533):ytprogramzzdo17 (0,100533),100530)
&& 
ytprogramzzdo17 (
r1==0?1:0,100536)
?1:0,100539)
){ 
int yutianzfp234=ytprogramzzqqzz( 1550); printf( "%.2f%c(%.2f%c%.2f)=\n", x4, multiply, x5, minus, x6); 
ytprogramzzqqzz( 1551); } 
else 
{ 
int yutianzfp235=ytprogramzzqqzz( 1554); continue ; 
ytprogramzzqqzz( 1555); } 
ytprogramzzqqzz( 1556); break ; 
ytprogramzzqqzz( 1557); } 
default:
{ 
int yutianzfp236=ytprogramzzqqzz( 1560); break ; 
ytprogramzzqqzz( 1561); } 
} 
ytprogramzzqqzz( 1563); } 
ytprogramzzqqzz( 1564); if 


(c==4){ 
int yutianzfp237=ytprogramzzqqzz( 1569); r=
rand()% 2 ; 
ytprogramzzqqzz( 1571); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp238=ytprogramzzqqzz( 1578); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4/x5*x6)<max?ytprogramzzdo17 (1,100547):ytprogramzzdo17 (0,100547),100544)
&& 
ytprogramzzdo17 (
r1==1?1:0,100550)
?1:0,100553)
){ 
int yutianzfp239=ytprogramzzqqzz( 1584); printf( "(%.2f%c%.2f)%c%.2f=\n", x4, except, x5, multiply, x6); 
ytprogramzzqqzz( 1585); } 
ytprogramzzqqzz( 1586); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4/x5*x6)<max?ytprogramzzdo17 (1,100560):ytprogramzzdo17 (0,100560),100557)
&& 
ytprogramzzdo17 (
r1==0?1:0,100563)
?1:0,100566)
){ 
int yutianzfp240=ytprogramzzqqzz( 1592); printf( "%.2f%c(%.2f%c%.2f)=\n", x4, except, x5, multiply, x6); 
ytprogramzzqqzz( 1593); } 
else 
{ 
int yutianzfp241=ytprogramzzqqzz( 1596); continue ; 
ytprogramzzqqzz( 1597); } 
ytprogramzzqqzz( 1598); break ; 
ytprogramzzqqzz( 1599); } 
case 1: 
{ 
int yutianzfp242=ytprogramzzqqzz( 1602); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4*x5/x6)<max?ytprogramzzdo17 (1,100573):ytprogramzzdo17 (0,100573),100570)
&& 
ytprogramzzdo17 (
r1==1?1:0,100576)
?1:0,100579)
){ 
int yutianzfp243=ytprogramzzqqzz( 1608); printf( "(%.2f%c%.2f)%c%.2f=\n", x4, multiply, x5, except, x6); 
ytprogramzzqqzz( 1609); } 
ytprogramzzqqzz( 1610); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4*x5/x6)<max?ytprogramzzdo17 (1,100586):ytprogramzzdo17 (0,100586),100583)
&& 
ytprogramzzdo17 (
r1==0?1:0,100589)
?1:0,100592)
){ 
int yutianzfp244=ytprogramzzqqzz( 1616); printf( "%.2f%c(%.2f%c%.2f)=\n", x4, multiply, x5, except, x6); 
ytprogramzzqqzz( 1617); } 
else 
{ 
int yutianzfp245=ytprogramzzqqzz( 1620); continue ; 
ytprogramzzqqzz( 1621); } 
ytprogramzzqqzz( 1622); break ; 
ytprogramzzqqzz( 1623); } 
default:
{ 
int yutianzfp246=ytprogramzzqqzz( 1626); break ; 
ytprogramzzqqzz( 1627); } 
} 
ytprogramzzqqzz( 1629); } 
ytprogramzzqqzz( 1630); if 


(c==5){ 
int yutianzfp247=ytprogramzzqqzz( 1635); r=
rand()% 2 ; 
ytprogramzzqqzz( 1637); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp248=ytprogramzzqqzz( 1644); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4/x5-x6)<max?ytprogramzzdo17 (1,100600):ytprogramzzdo17 (0,100600),100597)
&& 
ytprogramzzdo17 (
r1==1?1:0,100603)
?1:0,100606)
){ 
int yutianzfp249=ytprogramzzqqzz( 1650); printf( "(%.2f%c%.2f)%c%.2f=\n", x4, except, x5, sum, x6); 
ytprogramzzqqzz( 1651); } 
ytprogramzzqqzz( 1652); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4/x5-x6)<max?ytprogramzzdo17 (1,100613):ytprogramzzdo17 (0,100613),100610)
&& 
ytprogramzzdo17 (
r1==0?1:0,100616)
?1:0,100619)
){ 
int yutianzfp250=ytprogramzzqqzz( 1658); printf( "%.2f%c(%.2f%c%.2f)=\n", x4, except, x5, sum, x6); 
ytprogramzzqqzz( 1659); } 
else 
{ 
int yutianzfp251=ytprogramzzqqzz( 1662); continue ; 
ytprogramzzqqzz( 1663); } 
ytprogramzzqqzz( 1664); break ; 
ytprogramzzqqzz( 1665); } 
case 1: 
{ 
int yutianzfp252=ytprogramzzqqzz( 1668); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4-x5/x6)<max?ytprogramzzdo17 (1,100626):ytprogramzzdo17 (0,100626),100623)
&& 
ytprogramzzdo17 (
r1==1?1:0,100629)
?1:0,100632)
){ 
int yutianzfp253=ytprogramzzqqzz( 1674); printf( "(%.2f%c%.2f)%c%.2f=\n", x4, sum, x5, except, x6); 
ytprogramzzqqzz( 1675); } 
ytprogramzzqqzz( 1676); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4-x5/x6)<max?ytprogramzzdo17 (1,100639):ytprogramzzdo17 (0,100639),100636)
&& 
ytprogramzzdo17 (
r1==0?1:0,100642)
?1:0,100645)
){ 
int yutianzfp254=ytprogramzzqqzz( 1682); printf( "%.2f%c(%.2f%c%.2f)=\n", x4, sum, x5, except, x6); 
ytprogramzzqqzz( 1683); } 
else 
{ 
int yutianzfp255=ytprogramzzqqzz( 1686); continue ; 
ytprogramzzqqzz( 1687); } 
ytprogramzzqqzz( 1688); break ; 
ytprogramzzqqzz( 1689); } 
default:
{ 
int yutianzfp256=ytprogramzzqqzz( 1692); break ; 
ytprogramzzqqzz( 1693); } 
} 
ytprogramzzqqzz( 1695); } 
ytprogramzzqqzz( 1696); if 


(c==6){ 
int yutianzfp257=ytprogramzzqqzz( 1701); r=
rand()% 2 ; 
ytprogramzzqqzz( 1703); switch 
(
r 
)
{ 
case 0: 
{ 
int yutianzfp258=ytprogramzzqqzz( 1710); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4/x5-x6)<max?ytprogramzzdo17 (1,100653):ytprogramzzdo17 (0,100653),100650)
&& 
ytprogramzzdo17 (
r1==1?1:0,100656)
?1:0,100659)
){ 
int yutianzfp259=ytprogramzzqqzz( 1716); printf( "(%.2f%c%.2f)%c%.2f=\n", x4, except, x5, minus, x6); 
ytprogramzzqqzz( 1717); } 
ytprogramzzqqzz( 1718); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4/x5-x6)<max?ytprogramzzdo17 (1,100666):ytprogramzzdo17 (0,100666),100663)
&& 
ytprogramzzdo17 (
r1==0?1:0,100669)
?1:0,100672)
){ 
int yutianzfp260=ytprogramzzqqzz( 1724); printf( "%.2f%c(%.2f%c%.2f)=\n", x4, except, x5, minus, x6); 
ytprogramzzqqzz( 1725); } 
else 
{ 
int yutianzfp261=ytprogramzzqqzz( 1728); continue ; 
ytprogramzzqqzz( 1729); } 
ytprogramzzqqzz( 1730); break ; 
ytprogramzzqqzz( 1731); } 
case 1: 
{ 
int yutianzfp262=ytprogramzzqqzz( 1734); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4-x5/x6)<max?ytprogramzzdo17 (1,100679):ytprogramzzdo17 (0,100679),100676)
&& 
ytprogramzzdo17 (
r1==1?1:0,100682)
?1:0,100685)
){ 
int yutianzfp263=ytprogramzzqqzz( 1740); printf( "%.2f%c(%.2f%c%.2f)=\n", x4, minus, x5, except, x6); 
ytprogramzzqqzz( 1741); } 
ytprogramzzqqzz( 1742); if 


(ytprogramzzdo17 (
ytprogramzzzqfz(
(x4-x5/x6)<max?ytprogramzzdo17 (1,100692):ytprogramzzdo17 (0,100692),100689)
&& 
ytprogramzzdo17 (
r1==0?1:0,100695)
?1:0,100698)
){ 
int yutianzfp264=ytprogramzzqqzz( 1748); printf( "(%.2f%c%.2f)%c%.2f=\n", x4, minus, x5, except, x6); 
ytprogramzzqqzz( 1749); } 
else 
{ 
int yutianzfp265=ytprogramzzqqzz( 1752); continue ; 
ytprogramzzqqzz( 1753); } 
ytprogramzzqqzz( 1754); break ; 
ytprogramzzqqzz( 1755); } 
default:
{ 
int yutianzfp266=ytprogramzzqqzz( 1758); break ; 
ytprogramzzqqzz( 1759); } 
} 
ytprogramzzqqzz( 1761); } 
ytprogramzzqqzz( 1762); } 
ytprogramzzqqzz( 1763); } 
ytprogramzzqqzz( 1764); } 
ytprogramzzqqzz( 1765); } 
ytprogramzzqqzz( 1766); return 0 
; 
ytprogramzzqqzz( 1767); } 
#endif

static int ytprogramzzqqzzFU0(int nLine1,int Result,int nLine);
#if defined(PLDYN_ISOLATE_FUN_3
void get_information(char choose){ 
int yutianzfp267=ytprogramzzqqzz( 1769); int n, max, mix, symbol1, symbol ; 
char choose1, brackets ; 
ytprogramzzqqzz( 1771); if 


(choose=='y'){ 
int yutianzfp268=ytprogramzzqqzz( 1776); printf( "璇疯緭鍏ラ鐩暟閲廫n"); 
scanf( "%d",& n); 
printf( "璁剧疆鏈€澶х粨鏋淺n"); 
scanf( "%d",& max); 
getchar(); 
printf( "鏄惁鏈夊皬鏁伴儴鍒嗭紙缁撴灉淇濈暀2浣嶏級锛堟槸璇疯緭鍏モ€榶鈥欙紝鍚﹁杈撳叆鈥榥鈥欙級\n"); 
scanf( "%c",& choose1); 
printf( "绾繍绠楄繕鏄贩鍚堣繍绠楋紙绾繍绠楄杈撳叆1锛屾贩鍚堣繍绠楄杈撳叆2锛塡n"); 
scanf( "%d",& mix); 
ytprogramzzqqzz( 1785); if 


(mix==2){ 
int yutianzfp269=ytprogramzzqqzz( 1790); getchar(); 
printf( "鏄惁闇€瑕佺敓鎴愭嫭鍙凤紙鏄杈撳叆鈥榶鈥欙紝鍚﹁杈撳叆鈥榥鈥欙級\n"); 
scanf( "%c",& brackets); 
printf( "璇疯緭鍏ョ敓鎴愰鐩殑杩愮畻绗n鍔犲噺娉曪細1锛屽姞涔樻硶锛?锛屽噺涔樻硶锛?锛屼箻闄ゆ硶锛?锛屽姞闄ゆ硶锛?锛屽噺闄ゆ硶锛?\n鎸夊洖杞︾粨鏉?); 
scanf( "%d",& symbol); 
ytprogramzzqqzz( 1795); ytprogramzzqqzzFU0(ytprogramzzqqzzFULine(1795),auto_create(n,max,mix,symbol,choose1,brackets),ytprogramzzqqzzFULine(1795))

; 
ytprogramzzqqzz( 1796); } 
ytprogramzzqqzz( 1797); getchar()
; 
ytprogramzzqqzz( 1798); if 


(mix==1){ 
int yutianzfp270=ytprogramzzqqzz( 1803); printf( "璇疯緭鍏ョ敓鎴愰鐩殑杩愮畻绗n鍔犳硶锛?锛屽噺娉曪細2锛屼箻娉曪細3锛岄櫎娉曪細4\n鎸夊洖杞︾粨鏉?); 
scanf( "%d",& symbol1); 
ytprogramzzqqzz( 1805); ytprogramzzqqzzFU0(ytprogramzzqqzzFULine(1805),auto_create(n,max,mix,symbol1,choose1,brackets),ytprogramzzqqzzFULine(1805))

; 
ytprogramzzqqzz( 1806); } 
ytprogramzzqqzz( 1807); } 
ytprogramzzqqzz( 1808); if 


(choose=='n'){ 
int yutianzfp271=ytprogramzzqqzz( 1813); printf( "璇疯緭鍏ラ鐩暟閲廫n"); 
scanf( "%d",& n); 
printf( "璁剧疆杩愮畻鏁拌寖鍥碶n"); 
scanf( "%d",& max); 
getchar(); 
ytprogramzzqqzz( 1818); ytprogramzzqqzz(91818); user_define(n,max); ytprogramzzqqzz(91818)

; 
ytprogramzzqqzz( 1819); } 
ytprogramzzqqzz( 1820); } 
#endif

#if defined(PLDYN_ISOLATE_FUN_4
int main(){ 
int iyutianzfp271 ; 
int yutianzfp272=ytprogramzzqqzz( 1822); char choose ; 
printf( "鏄惁浣跨敤绯荤粺鑷姩鐢熸垚缁冧範棰橈紙鏄杈撳叆鈥榶鈥欙紝鍚﹁杈撳叆鈥榥鈥欙級\n"); 
scanf( "%c",& choose); 
srand(( unsigned int)
time( NULL)); 
ytprogramzzqqzz( 1827); ytprogramzzqqzz(91827); get_information(choose); ytprogramzzqqzz(91827)

; 
ytprogramzzqqzz( 1828); return 0 
; 
ytprogramzzqqzz( 1829); } 
#endif


#define qqqbranches    277
#define QQQMAXMCDCSIZE    698
FILE * ytprogramzzhfil ;
static char qqqqone[] = "%6d\n" ;/*  single point */ 
static char qqqqtwo[] = "%6d%6d\n" ;/*  double point or single + rentrant */ 
static char qqqqthree[] = "%6d%6d%6d\n" ;/*  sp + re + module  or dp + re      */ 
static char qqqqfour[] = "%6d%6d%6d%6d\n" ;/*  double point + re + module         */ 
/*  ----------------------------------------------------------------------   
*  
* For ANSI or Kernighan and Richie parameter lists    
* define QQ_ANSI_PROTOTYPE  
*      
* ----------------------------------------------------------------------    
*/ 
#undef QQ_ANSI_PROTOTYPE   
#ifdef __STDC__    
#define QQ_ANSI_PROTOTYPE 1   
#else    
#ifdef VAXC  
#define QQ_ANSI_PROTOTYPE 1  
#endif /* VAXC */
#endif /* __STDC__ */  
#undef ldra_fprintf  
#undef ldra_sscanf  
/*   #define ldra_fprintf */ 
/*   #define ldra_sscanf */ 
/*  static int ytprogramzzopen = 0; is used to indicate if file is open      */ 
#define QQBUFFERlimitQQ 2000 /* length of buffer for buffered output  */
static void ytqqoutput(FILE * f,char * s,int i);
static void ytqqoutput(FILE * f,char * s,int i) 
{ 
fprintf(f,s,i); 
} 
/*  endof ytqqoutput */ 
static void ytqqoutput0(FILE * f,char * s);
static void ytqqoutput0(FILE * f,char * s) 
{ 
fprintf(f,s); 
} 
/*  endof ytqqoutput0 */ 
static void ytqqoutput2(FILE * f,char * s,int i, int j);
static void ytqqoutput2(FILE * f,char * s,int i, int j) 
{ 
fprintf(f,s,i,j); 
} 
/*  endof ytqqoutput2 */ 
static void ytqqoutput3(FILE * f,char * s,int i,int j,int k);
static void ytqqoutput3(FILE * f,char * s,int i,int j,int k) 
{ 
fprintf(f,s,i,j,k); 
} 
/*  endof ytqqoutput3 */
static void ytqqoutput4(FILE * f,char * s,int i,int j,int k,int l);
static void ytqqoutput4(FILE * f,char * s,int i,int j,int k,int l) 
{ 
fprintf(f,s,i,j,k,l); 
} 
/*  endof ytqqoutput4 */ 
static int ytprogramzqqzqz();
static int ytprogramzqqzqz() 
{ 
if( ytprogramzzopen != 1 ){ 
/*  -------------------    
   if( ytprogramzzopen == 0 ) {   
    ytprogramzzhfil =        
       fopen( "实验2代码.exh","w");    
  }          
  else {     
    ytprogramzzhfil =  
       fopen( "实验2代码.exh","a");    
  }         
 ---------------------*/ 
ytprogramzzopen = 1 ; 
} 
return(1); 
} 

static int ytprogramzqqzqz1();
static int ytprogramzqqzqz1() 
{ 
if( ytprogramzzopen != 1 ) { 
if( ytprogramzzopen == 0 ) { 
ytprogramzzhfil = 
fopen( "实验2代码.exh","w"); 
} 
else { 
ytprogramzzhfil = 
fopen( "实验2代码.exh","a"); 
} 
ytprogramzzopen = 1 ; 
} 
return(1); 
} 

static int ytprogramzzqqzz (int qqqi);
static int ytprogramzzqqzz 
(int qqqi) 
{ 
if( ytprogramzzopen != 1 ) { 
ytprogramzqqzqz1(); 
} ; 
if( ytprogramzzopen ) { 
/*  uncompressed */ 
/*  uncompressed */ 
/*  unbuffered */ 
ytqqoutput(ytprogramzzhfil, 
qqqqone,qqqi); 
} 
return(1); 
} 

static int ytprogramzqzqzq (int qqqi);
static int ytprogramzqzqzq 
(int qqqi) 
{ 
{ 
if( ytprogramzzopen != 1 ) { 
ytprogramzqqzqz1(); 
} ; 
/*  notcompressed notbitmap */ 
/*  notcompressed notbitmap notbuffered */ 
qqoutput(ytprogramzzhfil, 
qqqqone,qqqi); 
/*  upload the history */ 
/*  uncompressed */ 
fclose(ytprogramzzhfil); 
ytprogramzzopen = 2 ; 
/*       
* #ifdef QQQbndchk    
*   if( qzqzqbnd == 0 ) {   
*     bound_output("No Bounds exceeded");    
*   }         
*   else {    
*     bound_output("Bounds exceeded");   
*   }     
* #endif  
*/ 
} 
return(1); 
} 
/*  endof zqzqzq */ 
static int ytprogramzqfqzz (int qqqi);
static int ytprogramzqfqzz 
(int qqqi) 
{ 
{ 
int qqql ; 
qqql=qqqi-1 ; 
ytprogramzzqqzz(qqql); 
ytprogramzzqqzz(qqqi); 
} 
return (1); 
} 
/*  endof zqfqzz */ 
static int ytprogramzzzqtz (int qqqa,int qqqb);
static int ytprogramzzzqtz 
(int qqqa,int qqqb) 
{ 
{ 
if(qqqa){ 
ytprogramzzqqzz(qqqb) ; 
} ; 
} 
return(qqqa); 
} 
/*  endof zzzqtz */ 
static int ytprogramzzzqfz (int qqqa,int qqqb);
static int ytprogramzzzqfz 
(int qqqa,int qqqb) 
{ 
{ 
if(qqqa) { 
return(qqqa); } 
else { 
ytprogramzzqqzz(qqqb); 
} 
} 
return(qqqa); 
} 
/*  zzzqfz */ 
static int ytprogramzzdo17( 
int a,int b) 
{ 
if( a ){ 
ytprogramzzqqzz(b-1); 
} 
else { 
ytprogramzzqqzz(b); 
} ; 
return a ; 
} 
/*   endof zzdo17 */ 
static int ytprogramzzqqzzFU0(int nLine1,int Result,int nLine)
{ 
return(Result); 
} 
/*   endof zzFU     0*/
static int ytprogramzzqqzzFULine (int nLine);
static int ytprogramzzqqzzFULine 
(int nLine) 
{ 
if( ytprogramzzopen != 1 ) { 
ytprogramzqqzqz1(); 
} ; 
if( ytprogramzzopen ) { 
/*  uncompressed */ 
/*  uncompressed */ 
/*  unbuffered */ 
ytqqoutput(ytprogramzzhfil, 
qqqqone,nLine+90000); 
} 
return(nLine+90000); 
} 
/*   endof FULine */ 
/*  END OF PLTEST INSTRUMENTATION */ 

