#include<stdio.h>
void main()
{
int n,incoming,outgoing,buff_size,store=0;
printf("\n Number of packets");
scanf("%d",&n);
printf("\n outgoing");
scanf("%d",&outgoing);
printf("\n Buff_size");
scanf("%d",&buff_size);
while(n!=0)
{
printf("\n Incoming Packet:");
scanf("%d",&incoming);
if(incoming<=(buff_size-store))
store+=incoming;
else
{
printf("\n%d Packet is dropped",incoming-(buff_size-store));
printf("Buffer size %d out of %d\n",store,buff_size);
store=buff_size;
}
store=store-outgoing;
printf("%d After outgoing %d packets left in buffer",store,buff_size);
n--;
}
}
