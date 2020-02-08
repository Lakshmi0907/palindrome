 #include<stdio.h>
int rev(int n){
	int rev1=0;
	int rem;
	while(n!=0){
		rem=n%10;
		rev1=rev1*10+rem;
		n=n/10;
	}
	return rev1;
}
int pal(int n){
	int s=rev(n);
	if(n==s){
		return 1;}
		else{
			return 0;
		}
}
int check(int n){
	int q=n;
	int p=rev(n);
	p=p+q;
	return p;
}
int main(){
	int n,i,a[100],k,c=0,s,f=0,ch,count=0,f1=1;
printf("enrer numer of elements");
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&a[i]);	
}
for(i=0;i<n;i++){
	k=a[i];
	count=0;
	while(f1<=1000){
		s=check(k);
		ch=pal(s);
		if(ch==0){
			count++;
			k=s;
			f1++;
		}
		else{
			break;
		}
	}
	printf("%d\n",count+1);
	printf("%d\n",s);
}
}
