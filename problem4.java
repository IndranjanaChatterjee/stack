import java.util.*;
public class problem4
{
    char ch[];
    int capacity,top;
    
    problem4(int cap)
    {
        capacity=cap;
        ch=new char[capacity];
        top=-1;
    }
    void pushChar(char v)
    {
        if(top==(capacity-1))
        {
            System.out.println("It is full,cannot push item");
        }
        else
        {
            ++top;
            //System.out.println(top);
        
        
            ch[top]=v;
        }
    }
    char popChar()
    {
        if(top==-1)
        {
            System.out.println("It is empty");
            return ('\\');
        }
        else
        {
            char s;
            s=ch[top];
            --top;
            return(s);
        }
    }
    void display()
    {
        if(top!=-1)
        {
            int i;
            for(i=0;i<=top;i++)
            {
                System.out.println(ch[i]);
            }
        }
    }
}