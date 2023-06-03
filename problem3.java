import java.util.*;
public class problem3
{
    int ele[];
    int capacity,top;
    
    problem3(int cap)
    {
        capacity=cap;
        ele=new int[capacity];
        top=-1;
    }
    void pushItem(int value)
    {
        if(top==(capacity-1))
        {
            System.out.println("It is full,cannot push item");
        }
        else
        {
            ++top;
            //System.out.println(top);
        
        
            ele[top]=value;
        }
    }
    int popItem()
    {
        if(top==-1)
        {
            System.out.println("It is empty");
            return (-9999);
        }
        else
        {
            int s;
            s=ele[top];
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
                System.out.println(ele[i]);
            }
        }
    }
}