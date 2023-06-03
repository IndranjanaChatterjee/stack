import java.util.*;
public class problem
{
    String st[];
    int size,top;
    problem()
    {
        top=-1;
        size=0;
    }
    problem(int cap)
    {
        size=cap;
        st=new String[size];
        top=-1;
    }
    void push(String n)
    {
        if(top==(size-1))
        {
            System.out.println("Overflows");
        }
        else
        {
            ++top;
            System.out.println(top);
        
        
            st[top]=n;
        }
    }
    String popname()
    {
        if(top==-1)
        {
            System.out.println("Underflows");
            return ("");
        }
        else
        {
            String s;
            s=st[top];
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
                System.out.println(st[i]);
            }
        }
    }
}