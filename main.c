#include <stdio.h>
int index = 0;
char arr[1024];
int aaa()
{
    int count = 0;
    
    for(int i = 0; i < index; i++)
    {
        
        if (x == arr[i]) {
            count++;
        }
        
    }
    
    if (count == 0) {
        return 0;
    }
    else{
        return 1;
    }
    
}
int main(){
    int code = 0;
    printf("进入敏感字符系统\n");

    
    while(1){
        printf("1--添加一个敏感字符\n");
        printf("2--删除一个敏感字符\n");
        printf("3--显示所有敏感字符\n");
        printf("4--替换敏感字符\n");
        printf("5--退出系统\n");

        scanf("%d",&code);
        printf("请输入相对应的功能编号：\n");

        
        if (code == 1) {
            char a ;
            printf("请输入要添加的敏感字符\n");

            scanf("%c",&a);
            scanf("%c",&a);

            arr[index] = a;
            index++;
            printf("添加成功，点击回车继续\n");

            char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
        if (code == 2) {
            
            index--;
            printf("删除成功，点击回车继续\n");

            char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
        if (code == 3) {
            printf("显示所有敏感字符\n");

            for( i = 0; i < index; i++)
            {
                printf("%c",arr[i]);
            }
            
            printf("显示成功，点击回车继续\n");

            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if (code == 4) {
            printf("请输入一段英文：\n");
            char nr[1024];
            scanf("%c",nr);
            
            for(int i = 0; 1; i++)
            {
                
                if (nr[i] == '\0') {
                    break;
                }
                
                if (aaa(arr[i]) == 1) {
                    nr[i] = '*'
                }
                printf("%c",nr[i]);
            }
            printf("\n");

            printf("替换成功，点击回车继续\n");

            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if (code == 5) {
            printf("退出系统\n");
            break;
        }
    }
    
}