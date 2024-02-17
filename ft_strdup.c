#include <stdio.h>
#include <stdlib.h>
size_t ft_strlen(const char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strdup(const char *s)
{
    char *str;
    size_t len;
    
    len = ft_strlen(s);
   
    str = (char *)malloc((len + 1) * sizeof(char)); //ให้จอง หน่วยความจำ ขนาด(char) จำนวน len+1 แล้วแปรเป็น char* เก็บเข้าที่ตัวแปร char* ที่ชื่อ str
                                                    //เราต้องการจองหน่วยความจำเพื่อเก็บค่าตัวอักษร char ดังนั้น ถ้าไม่ใส่ casting หรือ type conversion จะมีผลให้ตัวคอมไพเลอร์ฟ้อง warning ว่า type ไม่ตรงกัน (ฝั่งนึงเป็น char * แต่อีกฝั่งเป็น void *)
                                                    // เนื่องจาก malloc จะคืนกลับค่า pointer ที่ชี้ไปยังหน่วยความจำ memory ในรูป void * (เนื่องจากหน่วยความจำมันจะเก็บค่าอะไรก็ได้ ก็เลยใช้ type void นั่นก็คือ ไม่ได้ระบุว่า type อะไร)
    if(str[len] == '\0')
    {
        return(NULL);
    }

    while (len >= 0)
    {
        str[len] = s[len];
        len--;
    }
    str[len] = '\0';
    return(str);
}

int main()
{
    char source[] = "GeeksForGeeks";
    char* target = ft_strdup(source); 
 
    printf("%s", target);
    return 0;
}