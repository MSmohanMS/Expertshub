#include <stdio.h>
#include <conio.h>
void main()
{
   int idly=100,dosa=50,tea=50,vadai=200;
   int aidly,adosa,atea,avadai;
   int bidly,bdosa,btea,bvadai;
   int cidly,cdosa,ctea,cvadai;
   int didly,ddosa,dtea,dvadai;
   int eidly,edosa,etea,evadai;
   clrscr();
   printf("aidluy:",aidly);
   scanf("%d",&aidly);
   printf("ad:",adosa);
   scanf("%d",&adosa);
   printf("at:",atea);
   scanf("%d",&atea);
   printf("av:",avadai);
   scanf("%d",&avadai);
   printf("bi:",bidly);
   scanf("%d",&bidly);
   printf("bd:",bdosa);
   scanf("%d",&bdosa);
   printf("bt:",btea);
   scanf("%d",&btea);
   printf("bv:",bvadai);
   scanf("%d",&bvadai);
   printf("ci:",cidly);
   scanf("%d",&cidly);
   printf("cd:",cdosa);
   scanf("%d",&cdosa);
   printf("ct:",ctea);
   scanf("%d",&ctea);
   printf("cv:",cvadai);
   scanf("%d",&cvadai);
   printf("di:",didly);
   scanf("%d",&didly);
   printf("dd:",ddosa);
   scanf("%d",&ddosa);
   printf("dt:",dtea);
   scanf("%d",&dtea);
   printf("dv:",dvadai);
   scanf("%d",&dvadai);
   printf("ei:",eidly);
   scanf("%d",&eidly);
   printf("ed:",edosa);
   scanf("%d",&edosa);
   printf("et:",etea);
   scanf("%d",&etea);
   printf("ev:",evadai);
   scanf("%d",&evadai);
   idly=idly-aidly-bidly-cidly-didly-eidly;
   dosa=dosa-adosa-bdosa-cdosa-ddosa-edosa;
   tea=tea-atea-btea-ctea-dtea-etea;
   vadai=vadai-avadai-bvadai-cvadai-dvadai-evadai;
   printf("balence\nbidly\t%d\nbdosa\t%d\nbtea\t%d\nbvadai\t%d",idly,dosa,tea,vadai);
   getch();
}