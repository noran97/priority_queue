
struct pqueue
{
    int arr[100];
    int size;

};
void initiate(struct pqueue*queu)
{
    queu->size=-1;
}
void enqueue(struct pqueue*queu,int value)
{(queu->size)++;

    queu->arr[queu->size]=value;
     for(int i=0;i<=queu->size;i++)
    {
        int key=queu->arr[i];
        int j=i-1;
        while(j>=0&&queu->arr[j]>key)
        {
            queu->arr[j+1]=queu->arr[j];
            j--;
        }
     queu->arr[j+1]=key;
    }

}
int is_empty(struct pqueue*queu)
{int result=0;
    if(queu->size==-1)result=1;
        return result;
}
int is_full(struct pqueue*queu)
{int result=0;
    if(queu->size==100)result=1;
        return result;
}

int dequeue(struct pqueue*queu)
{

   (queu->size)--;
   return queu->arr[(queu->size)+1];
}
int maxx(struct pqueue*queu)
{
    return queu->arr[(queu->size)];
}
int minn(struct pqueue*queu)
{
    return queu->arr[0];
}
