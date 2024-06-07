#include<stdio.h>

int main(){
    int trans=0,incoming, outgoing, buck_size, n, store = 0;
    printf("Enter bucket size (in Bytes)");
    scanf("%d", &buck_size);
    printf("Enter outgoing rate(in Bytes): ");
    scanf("%d",&outgoing);
    printf("Enter no of packets: ");
    scanf("%d",&n);
    while (n != 0)
    {
    printf("Enter the incoming packet size : ");
    scanf("%d", &incoming);
    printf("Incoming packet size %d\n", incoming);
    
   
    if (incoming <= (buck_size - store))
    {
    store += incoming;
    printf("Bucket buffer size %d out of %d\n", store, buck_size);
    } 
    else
    {
    printf("Dropped %d no of packets\n", incoming - (buck_size - store));
    printf("Bucket buffer size %d out of %d\n", store, buck_size);
    store = buck_size;
    
    }
       if (store<=outgoing)
         trans=store;
        else
         trans=outgoing;
        store = store - trans;
        printf("Transfers %d Bytes\n",trans);
        printf("After %d Bytes outgoing %d bytes left out of %d in buffer\n",trans, store, buck_size);
        n--;
    }
}
