//array insertion----

#include <stdio.h>

int main() {
	// your code goes here
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int idx, val;
    scanf("%d %d",&idx,&val);
    for(int i=n;i>=idx+1;i--){
        a[i]=a[i-1];
    }
    a[idx]=val;
    for(int i=0;i<=n;i++){
        printf("%d ",a[i]);
    }
}
------------------------------------------------------------------------------------------------

//array delation-----


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n-1];
    for(int i=0;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int idx;
    scanf("%d",&idx);
    for(int i=idx;i<=n-1;i++){
        a[i]=a[i+1];
    }
    
    for(int i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
}
-----------


