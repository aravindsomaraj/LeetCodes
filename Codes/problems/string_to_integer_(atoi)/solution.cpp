class Solution {
public:
    int myAtoi(string s) {
        int num=0;
        long numtrial=0;
        int i=0;
        while(s[i]==' ')
        {
            i++;
        }
        int flag=1;
        if(s[i]=='-')
        {
            i++;
            flag=0;
        }
        else if(s[i]=='+')
        {
            i++;
        }
        int f=0;
        while(s[i]>='0' && s[i]<='9')
        {
            if(numtrial<=INT_MAX)
                numtrial=numtrial*10 + (s[i]-48);
            // else
            // {
            //     f=1;
            //     num=INT_MAX;
            // }
            
            i++;
        }
        
        if(flag==0)
        {
            numtrial=-numtrial;
            // if(f==1)
            //     num=num-1;
        }
        
        if(numtrial>INT_MAX)
            num=INT_MAX;
        else if(numtrial<INT_MIN)
            num=INT_MIN;
        else
            num=(int)numtrial;
        return num;
        
        
        
        
    }
};